/* 
            Falsy Values:
1) false
2) 0
3) "" or '' (sem nada)
4) null
5) undefined
6) NaN

            Truthy Values:
1) Everything else that is not falsy
2) true
3) '0' (0 em uma string)
4) ' ' (espaço em uma string)
5) 'false' (falso em uma sting)
6) [] (array)
7) {} (objeto)
8) function () {} (funcao.)
*/

// Trutjy and Falsy caveats

// !isNaN -> garantir que passará um numero

// console.log(isNaN(valor1));  // false, porque "123" pode ser convertido para um número
// console.log(isNaN(valor2));  // true, porque "abc" não é um número

// console.log(!isNaN(valor1)); // true, porque "123" é um número válido
// console.log(!isNaN(valor2)); // false, porque "abc" não é um número

let children;

if (!isNaN(children)) {
    console.log(`You have ${children} children`);
} else {
    console.log(`Please enter number of children`);
}

// Checking for empty array
// utilizar o lenght;

const posts = [];

if(posts.length > 0) {
    console.log('List Post');
} else {
    console.log('No Post to List');
}

// Cheking for empty object
// colocar o objeto em array ->
// utilizando Object.keys(user)
// dps utilizar lenght

const user = {};

if(Object.keys(user).length > 0) {
    console.log('List User');
} else {
    console.log('No User');
}