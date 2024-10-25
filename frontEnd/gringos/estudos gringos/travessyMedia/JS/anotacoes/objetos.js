const person = {
    name:'Antonio', // Precisa usar virgula.
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