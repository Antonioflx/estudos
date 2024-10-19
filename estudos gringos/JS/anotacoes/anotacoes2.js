// Usar funcoes cronstrutoras.

// Quando cria uma funcao construtora -> Comeca com letra maiuscula.

// funcao construtora

/* function Person (nome, sobrenome, nascimento) {
    this.nome = nome;
    this.sobrenome = sobrenome;
    this.nascimento = new Date(nascimento); 
    // utilizar new Date(nascimento) para pegar a data da string.
    // Da para criar funcoes dentro para obter um dado
} 

// Colocar no prototype para n ver a funcao no objeto.
Person.prototype.aniversario = function() {
    return this.nascimento.getFullYear();
}


Person.prototype.nomeCompleto = function() {
    return `${this.nome} ${this.sobrenome}`
}

*/ // Mesma coisa que a de baixo.

// Class

class Person {
    // Metodo e uma funcao dentro de uma class
    constructor(nome, sobrenome, nascimento) { 
        this.nome = nome;
        this.sobrenome = sobrenome;
        this.nascimento = new Date(nascimento); 
    } 

    aniversario() {
        return this.nascimento.getFullYear();
    }

    nomeCompleto () {
        return `${this.nome} ${this.sobrenome}`
    }
}

// criar constantes de pessoas
const person1 = new Person('Antonio', 'Felix', '01-27-2003');
const person2 = new Person('Arthur', 'Samuel', '04-05-2003');


console.log(person1.nascimento.getFullYear());

