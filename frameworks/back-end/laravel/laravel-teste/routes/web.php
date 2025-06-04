<?php

// use App\Http\Controllers\ProdutoController;

use App\Http\Controllers\ProdutoController2;
use Illuminate\Support\Facades\Route;

// trabalhando com controller -> tira o callback
/*
    1 parametro é a rota
    2 parametro é o controller
        -> dentro do 2 parametro
        -> o metodo

*/
// Route::get('/', [ProdutoController::class, 'index'])->name('produto.index');

// // trabalhar com paramestros
// Route::get('/produto/{id?}', [ProdutoController::class, 'showProduct'])->name('produto.show');
//----------------------------------//

// -------------criando com Resource -----------
// 2 parametros -> 1 o nome produtos e o controller
Route::resource('produtos', ProdutoController2::class);


//----------------------------------//

// --------- rotas normais----------------------
// Route::get('/', function () {
//     // view -> fica dentro de resources/views
//     return view("welcome");
// });
// redirecionando
// Route::get('/', function () {
    
//     return redirect()->route('admin.clientes');
// });


// verbos HTTP -> metodos dessa requisição HTTP 
// get , post, puts, delete, patch, options

/*
    Passa 2 parametros
        1. Rota em questão
        2. função de callback
*/
// http://127.0.0.1:8000/empresa sem o folder
// http://127.0.0.1:8000/site/empresa com o folder

// Route::get('/empresa', function (){
//     return view('site/empresa');
// });

/*
    Não é mt seguro
*/
// Route::any('/any', function () {
//     return "Permite todo tipo de acesso HTTP (put, delete, get, post)";
// });

// /*
//     inverso de any
//     3 paramestros:
//         1. o tipo de acesso
//         2. rota em questão
//         3. funcao callback
// */
// Route::match(['get', 'post'],'/match', function() {
//     return "Permite apenas acessos definidos";
// });
// // n funcionaria com o metodo get ( acessar pela url )
// // Route::match(['put', 'delete'],'/match', function() {
// //     return "Permite apenas acessos definidos";
// // });

// /* 
//     Passagem de parametros nas rotas
//     passar o id pela via URL

//     /produto/{id} -> declara no callback $id
// */
// Route::get('/produto/{id}', function($id) {
//     return "O Id do produto é: " . $id;
// });

// // assim sou obrigado a passar o dia/month/year
// Route::get('/reserva/ambiente/{id}/{month}/{year}', function($id, $month, $year) {
//     return "Hoje, o dia é : " . $id . "/" . $month . "/" . $year;
// });

// // mas se eu colocar ? apos o parametro e definir um valor default nas variaveis, posso receber nada
// Route::get('/reserva/ambiente2/{id?}/{month?}/{year?}', function($id = "", $month = "", $year = "") {
//     return "Hoje, o dia é : " . $id . "/" . $month . "/" . $year;
// });

// // redirecionamentos
// /*
//     redirect(rota que queremos redirecionar)

//     quando acessar a rota sobre quero que vá para empresa
// */
// // 1 forma
// // Route::get('/sobre', function() {
// //     return redirect('/empresa');
// // });

// /*
//     2 forma:
//     // rota que queremos redirecionar
//     // para onde
// */
// Route::redirect('/sobre', '/empresa');

// // abreviações de view -> sem callback ( se n precisar de dados )
// /*
//     Route::get('/empresa', function (){
//         return view('site/empresa');
//     });
// */

// Route::view('/empresa', 'site/empresa');

// // rotas nomeadas
// // Route::get('/news', function() {
// //     return view('news');
// // });

// // posso atribuir um nome para ela
// // usar name(e o nome);
// Route::get('/news', function() {
//     return view('news');
// })->name('noticias');

// // renderizar com o nome da rota
// // route -> redirecionar para noticias
// Route::get('/novidades', function () {
//     return redirect()->route('noticias');
// });

/*
    Grupos de rotas -> repeti admin várias vezes

    Route::get('admin/dashboard', function() {
        return "dashboard";
    });

    Route::get('admin/users', function() {
        return "users";
    });

    Route::get('admin/clientes', function() {
        return "clientes";
    });
 
*/
// criando grupo de rotas
// prefixo() -> recebe o prefixo admin
// -> encadear metodo group(recebe call back -> que terá as rotas)
// Route::prefix('admin')->group(function () {
//     Route::get('dashboard', function() {
//         return "dashboard";
//     });

//     Route::get('users', function() {
//         return "users";
//     });

//     Route::get('clientes', function() {
//         return "clientes";
//     });
// });

// outra forma se eu nomear as rotas
// teria que usar name('admin.')
// Route::name('admin.')->group(function() {

//     // Route::get('admin/dashboard', function() {
//     //     return "dashboard";
//     // })->name("admin.dashboard");
    
//     // Route::get('admin/users', function() {
//     //     return "users";
//     // })->name("admin.users");
    
//     // Route::get('admin/clientes', function() {
//     //     return "clientes";
//     // })->name("admin.clientes");

//     // tiraria o admin. no name
//     Route::get('admin/dashboard', function() {
//         return "dashboard";
//     })->name("dashboard");
    
//     Route::get('admin/users', function() {
//         return "users";
//     })->name("users");
    
//     Route::get('admin/clientes', function() {
//         return "clientes";
//     })->name("clientes");
// });

// outros tipos de agrupamentos
// name e prefixo ao mesmo tempo
/*
    Utilizar group()
        -> Passa como parametro uma array com algumas chaves
        [
            prefix => valor,
            as (name para o group) => valor 
        ]


        -> e função callback
*/
// Route::group(['prefix' => 'admin', 'as' => 'admin.'], function() {
    
//     Route::get('dashboard', function() {
//         return "dashboard";
//     })->name("dashboard");
    
//     Route::get('users', function() {
//         return "users";
//     })->name("users");
    
//     Route::get('clientes', function() {
//         return "clientes";
//     })->name("clientes");
// });