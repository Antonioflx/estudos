/* |Variaveis|
    var -> Variavel global (PS: Melhor usar let e const)
    
    let -> Variavel local 
    const -> Variavel constante

    Diferença entre let e const:
    let -> posso reatribuir outro valor;
    const -> nao pode reatribuir outro valor;
        > const precisa atribuir um valor.
        > utilizar mais frenquentemente do que let, para diminuir possibilidades de erro.
*/

/* Tipos primitivos -> String, Numbers, Boolean, null, undefined, Symbol */

/* Concatenatio --> utilizaçao do +
    Ex: console.log('Meu nome e' + nome);

   Template String --> utiliza ${let} 
    Ex: console.log(`Meu nome e ${nome}`);
*/

// Obs: Propriedade nao tem () 
// Se tiver () é um metodo -> basicamente, uma funcao associada ao objeto.


/*  ARRAYS -> variaveis que recebem mais de um valor.
        Array -> pode receber tipos de variaveis diferentes, number, string, etc.
    Ex: const fruits = ['apple, banana, orange'];
    Para acessar -> fruits[0] == apple.

    Para adicionar um valor no final da array:
        fruits.push('mangos')
    Para adicionar um valor no inicio da array:
        fruits.unshift('mangos');
    Para tirar o valor final da array:
        fruits.pop();
    
*/

/* object // Precisa usar virgula.
const person = {
    nome:'Antonio',
    sobrenome: 'Felix',
    idade: 21,
    fruits:['apple', 'banana', 'orange'],
    endereco: {
        rua: 'sei la onde',
        cidade: 'Pudim',
        estado: 'BOTIJAO',
    }
}

console.log(person);

// Para acesar apenas um valor do objeto. console.log(person.name, person.sobrenome);

console.log(person.fruits[1]);

// Pegar um valor de um objeto dentro de outro objeto.

console.log(person.endereco.cidade);

// Desestruturaçao -- 

const { nome, sobrenome, endereco: { estado } } = person; // criar variaveis.

console.log(estado);

// adicionar um valor no object

person.email = 'antoniofelix@pudim.com';

console.log(person);

*/

/* array de objetos.

const todos = [
    {
        id: 1,
        text: 'Estudando Java Script',
        isCompleted: true    
    },
    {
        id: 2,
        text: 'Estudei HTML5 e CSS3',
        isCompleted: true    
    },
    {
        id: 3,
        text: 'Terminei PHP 8',
        isCompleted: false    
    },
];
        //Forma de interagir com uma array de objetos
*/



