// IIFE -> Immediately Invoked Function Expression

// Recursiva -> quando voce chama a funcao dentro dela mesma

// Sintaxe -> (function name() {BLOCO})();

// Ex1: sem nomear a funcao

(function () {
    const user = 'John';
    console.log(user);
    // criando uma funcao aqui dentro. Só pode ser chamada dentro dessa funcao anonima
    const hello = () => console.log('Hello from the IIFE');
    hello();
})();

// Ex2: 
// adicionando um parametro da funcao
(function (name) { 
    console.log('Hello ' + name);
})('Shawn');
// atribuindo um valor do parametro no ()

// Ex3:
// Dando um nome para a funcao -> bom para debuging

// caso eu chame a funcao aqui dentro -> hi(); irá entrar em loop.
(function hi() {
    console.log('Hi');
})();