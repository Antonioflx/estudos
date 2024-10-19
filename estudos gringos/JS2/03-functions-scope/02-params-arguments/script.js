// Default Params
// Caso nao tenha registrado nada, podemos 
// colocar um valor para a var user definida
function registerUser(user = 'Bot') {
    return user + ' is registered';
}

console.log(registerUser());

// Rest Params
// colocar dentro de uma array
function sum(...numbers) {
    return numbers;
}

function sum(...numbers) {
    // fazer a soma dos numeros.
    let total = 0;

    for (const num of numbers) {
        total += num;
    }

    return total;
}

console.log(sum(1,2,3,4,5));

// Objects as params
// passar objects para a function

function loginUser(user) {
    return `The user ${user.name} whith the id of ${user.id} is logged in`
}

// podemos criar a var.
const user = {
    id: 1,
    name: 'Antonio',
};

console.log(loginUser(user));

// ou podemos criar dentro dos argumentos
console.log(loginUser({
    id: 2,
    name: 'Luiza',
})
);

// Arrays as params

// criando uma funcao para numero aleatorio
function randomNumber(arr) {
    const randomIndex = Math.floor(Math.random() * arr.length);
    const item = arr[randomIndex]

    return item;
}

console.log(randomNumber([10,20,30,40,50,60]));
