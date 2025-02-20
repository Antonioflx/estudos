/*
    Encontrar elemento que só aparece uma vez.

    [2, 7, 7, 2, 3, 2, 7]
*/

const arrayNumbers = [2, 7, 7, 2, 3, 2, 7];
const numeroIguais = [];
let resposta = 0;
let count = 0;
for (let i = 0; i < arrayNumbers.length - 1; i++) {
	for (let j = i + 1; j < arrayNumbers.length; j++) {
		if (arrayNumbers[i] === arrayNumbers[j]) {
			numeroIguais.push(arrayNumbers[i]);
		}
	}

	arrayNumbers[i] === numeroIguais[i]
		? console.log(
				`Teste: i = ${arrayNumbers[i]} igual a ${numeroIguais[i]}`
		  )
		: console.log(
				`Teste: i = ${arrayNumbers[i]} diferente de ${numeroIguais[i]}`
		  );
}

for (let i = 0; i < arrayNumbers.length - 1; i++) {
	for (let j = i; j < arrayNumbers.length; j++) {
		if (!arrayNumbers[i] === numeroIguais[j]) {
			resposta = arrayNumbers[i];
			resposta === arrayNumbers[j + 1] ? false : true;
		}
	}
}

if (!resposta) console.log(resposta);
console.log(numeroIguais);
