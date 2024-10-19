// FizzBuzz challenge

// Printar 1 até 100

// Se o numero for multiplo por 3 -> `Fizz`
// Se o numero for multiplo por 5 -> `Buzz`
// Se o numero for multiplo por 3 e 5 -> `FizzBuzz`

for (i = 1; i <= 100; i++) {

    if (i % 3 === 0 && i % 5 === 0) {
        console.log(`FizzBuzz`);
        continue;
    }

    if (i % 3 === 0) {
        console.log(`Fizz`);
        continue;
    }

    if (i % 5 === 0) {
        console.log(`Buzz`);
        continue;
    }

    console.log(i);
}

// Solucao 2:
// for (i = 1; i <= 100; i++) {

//     if (i % 3 === 0 && i % 5 === 0) {
//         console.log(`FizzBuzz`);
//     } else if (i % 3 === 0) {
//         console.log(`Fizz`);
//     } else if (i % 5 === 0) {
//         console.log(`Buzz`);
//     } else {     
//         console.log(i);
//     }
// }

// Solucao 3:

// for (i = 1; i<= 100; i++) {
//     switch (true) {
//         case i % 3 === 0 && i % 5 === 0 :
//             console.log(`FizzBuzz`);
//         break;

//         case i % 3 === 0 :
//             console.log(`Fizz`);
//         break;

//         case i % 5 === 0 :
//             console.log(`Buzz`);
//         break;
//         default :
//             console.log(i);
//         break;
//     }
// }