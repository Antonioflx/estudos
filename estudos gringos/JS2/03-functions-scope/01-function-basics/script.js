// function -> way to group a code together and run later.

// declaring the function.
function sayHello() {
    return console.log('Hello World!');
}

// invoking a function.
sayHello();

// parametros está dentro dos ()
// Ex nessa function num1, num2
function plusNumbers(num1, num2) {
    return console.log(num1 + num2);
}

// arguments é quando a funcao e chamada
// Ex: nessa chamada argumentos é o 10 e 2.
plusNumbers(10,2)

// funcao geralmente retorna algo

function subtract(num1, num2) {
    return num1 - num2;
}

console.log(subtract(20,4));