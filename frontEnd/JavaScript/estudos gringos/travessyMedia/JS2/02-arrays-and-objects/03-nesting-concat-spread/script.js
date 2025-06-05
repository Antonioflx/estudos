let x;

const fruits = ['banana ', 'orange ', 'pear '];

const berries = ['blueberry ', 'strawberry ', 'rasberry '];

// adicionar a array berries na array fruits.
// fruits.push(berries);

// acessar a array berries na array fruits.
// dps acessar o elemento blueberry -> indice 0.
// x = fruits[3][0];

const allFruits = [fruits, berries];

x = allFruits[1][1];

// concatenar as 2 arrays em apenas uma array
// Usando o method -> concat()
x = fruits.concat(berries);

// usando o Spread Operator (...)
x = [...fruits, ...berries];

// Flatten arrays (Achatar)

const arr = [1, 2, [3, 4], 5, [6, 7], 8];

x = arr;

x = arr.flat();

// Static Methods on Array Object.

// verificar se está na array;
x = Array.isArray(fruits);

// cria uma array com o valor que voce define
x = Array.from('12345');

// criar uma array com variaveis
const a = 1;
const b = 2;
const c = 3;

x = Array.of(a, b, c);

x = allFruits
console.log(x);