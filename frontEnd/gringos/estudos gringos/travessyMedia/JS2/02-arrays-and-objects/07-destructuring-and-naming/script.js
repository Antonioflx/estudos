
const firstName = 'Antonio';
const lastName = 'Felix';
const age =  21;


//  caso tenha as variaveis, n precisa repetir.
const person = {
    firstName,
    lastName,
    age,
}

console.log(person.age);

// Destructuring
// pegar algo que está dentro do objeto e tornar acessivel para fora.

const todo = {
    id: 1,
    title: 'Take out trash',
    user: {
        nome: 'Antonio',
    },
};



// pegar algo que está dentro do objeto e tornar acessivel para fora.
let { id, title, user: { nome } } = todo;

console.log(nome);

// Destructuring arrays
const numbers = [23, 67, 33, 49, 59];

const [first, second, ...rest] = numbers;

// rest operator -> pegar o resto dos valores da array.
console.log(second, rest);

