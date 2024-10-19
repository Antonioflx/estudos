// Challenge 1;

// create a function called getCelsius() 
// -> that takes a temperature in Fahrenheit as ang argument and return the temperature in celsius

// (32 °F − 32) × 5/9 = 0 °C -> Formula

// Solution 1 --> Funcao declarativa


function getCelsius(fah) {
    const cel = (fah - 32) * 5/9;
    return `A temperatura em ${fah} \xB0F = ${cel.toFixed(1)} \xB0C` 
    //return console.log(`${fah}` + 'ºF' + ` = ${cel.toFixed(1)}` + 'ºC');
    //console.log(cel.toFixed(1) + 'ºC');
}

console.log(getCelsius(32)); 
    
// Solution 2 --> Funcao expressiva

const celsius = (function (fah, cel) {
    cel = (fah - 32) * 5/9;
    return `A temperatura em ${fah} \xB0F = ${cel.toFixed(1)} \xB0C`;
});

console.log(celsius(64));


// Solution 3 --> Arrow function
const celsiusA = (fah, cel = (fah - 32) * 5/9) => `A temperatura em ${fah} \xB0F = ${cel.toFixed(1)} \xB0C`;

console.log(celsiusA(96));

// Solution 4 --> IIFE

(function getCelsius(fah = 128) { 
    const cel = (fah - 32) * 5/9;
    console.log(`A temperatura em ${fah} \xB0F = ${cel.toFixed(1)} \xB0C`);
})();

// Challenge 2

// criar uma arrow function  para dizer qual e o Min e o Max de um vetor de num;
// utilizar o spread operator para "espalhar" os elementos do vetor para a funcao receber como
// argumentos individuais.


// Forma 1. Arrow Function
const minMax = (number) => `{ min: ${Math.min(...number)}, max: ${Math.max(...number)} }`;
console.log(minMax([1, 0, 2, 3, 5])); // equivalente a Math.min(1, 2, 3) ou  Math.max(1, 2, 3);


// Forma 2.

function minMax2(arr) {
    const min = Math.min(...arr);
    const max = Math.max(...arr);

    // retornar os 2 valores
    return {
        min,
        max,
    }
}

console.log(minMax2([1,2,3,4,5]));

// Challenge 3
// Create an IIFE (Immediately Invoked Function Expression);
// Calcular a area de um retangulo
// The area of a rectangle with a length of 10 and a width of X = AREA;

(function(width, length) {
    const area = width * length;
    console.log(`A area do retangulo que possui ${width}m de comprimento e ${length}m de largura = ${area}m2`)
})(10,5);

// IIFE utilizando arrow function

((width, length) => {
    const area = width * length;
    console.log(`A area do retangulo que possui ${width}m de comprimento e ${length}m de largura = ${area}m2`)
})(10,10 );

