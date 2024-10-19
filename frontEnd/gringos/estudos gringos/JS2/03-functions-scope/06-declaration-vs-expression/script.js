// Function Declaration
// Podemos chamar a funcao antes ou dps.

console.log(addDollarSign(100));

function addDollarSign(value) {
    return '$' + value;
}


// Function Expression
// é uma funcao atribuida a uma variavel.
// Nao podemos chamar a funcao atens, 
const addPlusSign = function (value) { 
    return '+' + value;
};

console.log(addDollarSign(200));
// hoisting
