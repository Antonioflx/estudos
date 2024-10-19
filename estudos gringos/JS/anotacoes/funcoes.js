
// Geralmente coloca return em funcoes

// funcao para somar 2 numeros.
//() == parametros
function addNumbers(num1, num2) {
    return num1 + num2;
}

console.log(addNumbers(3,2));

//console.log(addNumbers());  adicionar 2 numeros.

// arrow function. Bom para reduzir o codigo
// nao precisa de { }, nem de return

const addNumber = (num1, num2) => console.log(num1 + num2);

addNumber(5,3);

// Bom para usar em forEach

// Ex: todos.forEach((todo) => console.log(todo));