// object Literals

let x;

const person = {
    nome: 'Antonio',
    age: 21,
    hasChild: false,
    address: {
        city: 'Patos',
        street: 'Prado-123',
        state: 'PB',
    },
    hobbies: ['study', 'sports'],
};
// nome, age, hasChild sao propriedades
// para acessar propriedades utiliza o .

x = person;
x = person.nome;
x = person['age'];
x = person.address.city;
x = person.hobbies[1];

// mudar os valores da propriedade.
person.nome = 'Luzia';
person.hasChild = 'true';

// deletar uma propriedade
delete person.age;

// adicionar uma nova propriedade
person.isSad = false;
person.sobrenome = 'Felix';
// atribuir uma function para uma propriedade
// precisar utilizar o this para acessar a propriedade dentro da function.
person.fullName = function () {
    console.log(`Hello, my full name is ${this.nome} ${this.sobrenome}`);
};

person.fullName();

x = person;
console.log(x);