// Function declarete
// function add(a, b) { 
//     return a + b;
// }

// console.log(add(10,2));

// Function expression
const plus = function(a, b) {
    return a + b;
}

console.log(plus(10,25));

// Arrow Function syntax
// n precisa colocar o nome function, apenas () => { }

const add = (a, b) => {  
    return a + b;
}
console.log(add(100 ,20));

// Apenas uma expressao dentro da Arrow Function
// tira {} e return.
const diff = (a, b) => a - b;

console.log(diff(100 ,20));

// Se a funcao tiver apenas um param
// normalmente

const double = (a) => a * 2

console.log(double(20));

// encurtar -> tirar ()

const shortDouble = a => a * 2;

console.log(shortDouble(3));


// Returning a single object
// precisa adicionar ()

const createObj = () => ({
    firstName: 'Antonio',
    lastName: 'Felix'
});
 
console.log(createObj());
 
 
// Utilizar o loop -> forEach em arrays.

const numbers = [1,2,3,4,5];
console.log(numbers);

// utilizando forEach() -> passar uma funcao anonima
numbers.forEach(function (n) {
    console.log(n);
})

// Arrow function in a callback
const numbers2 = [10,9,8,7,6]
numbers2.forEach( n => console.log(n));

// Apenas 1 parametro, ou seja, tira (). Apenas uma expressao, ou seja, tira as {} e return.