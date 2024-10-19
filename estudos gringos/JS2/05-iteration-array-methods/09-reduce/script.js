// Reduce -> reduz a array para apenas um valor.


const numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

// long version

const sum = numbers.reduce(function (acumulator, currenteValue) {
    return acumulator + currenteValue // vai somar os numeros.
}, 0 ) // adicionou um valor inicial 0

console.log(sum);

// short version

const sum2 = numbers.reduce(
    (acumulator, currenteValue) => acumulator + currenteValue, 0);

console.log(sum2);

// Using a for loop

const sum3 = () => {
    let acc = 0;
    for (const cur of numbers) {
        acc += cur;
    }
    return acc;
}

console.log(sum3());


const cart = [
    { id: 1, name: 'Product 1', price: 130},
    { id: 2, name: 'Product 2', price: 150},
    { id: 3, name: 'Product 3', price: 175},
];

console.log(cart);


// pegar todos os preços

const total = cart.reduce((acc, product) => acc + product.price, 0);

console.log(total);