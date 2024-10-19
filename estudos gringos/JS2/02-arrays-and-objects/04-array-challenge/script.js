
// First Challenge
const arr = [1, 2, 3, 4, 5];

arr.push(6); // adicionar o valor 6 ->(FINAL);
arr.unshift(0); // adicionar o valor 0 -> (INICIO);

// Inverter a array
arr.reverse();

// Show the array in console
console.log(arr);

// Second Challenge
const arr1 = [1, 2, 3, 4 , 5];
const arr2 = [5, 6, 7, 8, 9, 10];

// Juntar as 2 arrays.
const arr3 = [...arr1, ...arr2];

//tirar o numero 5[INDICE -> 4] repetido.
arr3.splice(4, 1);

// Show the array in console
console.log(arr3);
