<?php

namespace App\Http\Controllers;

use App\Models\Produto;
use Illuminate\Http\Request;

class ProdutoController2 extends Controller
{
    /**
     * Display a listing of the resource.
     */
    // listar
    public function index()
    {
        /*
            metodo eloquente: 
                -> ORM (Objeto relacional model )
                    -> Serve para mapear de forma automática uma tabela do banco de dados para uma classe
                all()
        */     
        // $produtos = Produto::all();
        // return dd($produtos); // debugar esse objeto

        // return view('news');
        // return view('site/empresa'); // pode usar a / ou .
        // passar um dado para a nossa view
        // return view('site.empresa'); // pode usar a / ou .
        
        $nome = "Antonio";
        $idade = 22;
        return view('site.empresa', ['nome' => $nome, 'idade' => $idade]); 
    }

    /**
     * Show the form for creating a new resource.
     */
    // exibir um form
    public function create()
    {
        //
    }

    /**
     * Store a newly created resource in storage.
     */
    // salvar os registros com as infromações
    public function store(Request $request)
    {
        //
    }

    /**
     * Display the specified resource.
     */

     // exibir
    public function show(string $id)
    {
        //
    }

    /**
     * Show the form for editing the specified resource.
     */
    // editar alguma coisa
    public function edit(string $id)
    {
        //
    }

    /**
     * Update the specified resource in storage.
     */
    // update atualizar o recurso
    public function update(Request $request, string $id)
    {
        //
    }

    /**
     * Remove the specified resource from storage.
     */
    // remover um recurso na base de dados.
    public function destroy(string $id)
    {
        //
    }
}