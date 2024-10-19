const age = 20;

// Usando if

if (age >= 18) {
    console.log('Voce pode votar!');
} else {
    console.log('Voce nao pode votar!');
}

// Usando ternario.
// ? -> se
// : -> se nao.
age >= 18 ? console.log("Voce pode votar!") : console.log("Voce nao pode votar!");


// Atribuindo um valor de condição para uma variavel
const canVote = age >= 18 ? 'Voce pode votar!' : 'Voce nao pode votar!';

console.log(canVote);

// Varias Declarações

const auth = true;

// let redirect;

// if (auth) {
//     alert('Welcoome to the dashboard');
//     redirect = '/dashboard';
// } else {
//     alert('Acess Denied');
//     redirect = '/login';
// }

// usando ternario

// const redirect = auth 
//     ? (alert('Welcome to the dashboard'), '/dashboard') 
//     : (alert('Acess Denied'), '/login');

// console.log(redirect);

// apenas um condição

// auth ? console.log('Welcome to the dashboard') : null ;

auth && console.log('Welcome to the dashboard');


