// definir valores
type MyBoll = true;

let bool: MyBoll;

// bool = false da erro, pq n tem false no MyBoll

bool = true; // da certo

type PositiveOddNumbersUnderTen = 1 | 3 | 5 | 7 | 9;

let number: PositiveOddNumbersUnderTen;

// number = 2  da erro

function hasNumber(number: PositiveOddNumbersUnderTen): number {
	return number;
}

// console.log(hasNumber(2)); // da erro
console.log(hasNumber(3)); // da certo

// com o | podemos tbm atribuir 2 valores na função

const teste_function = (pessoas: string | string[]) =>
	typeof pessoas === "string" ? pessoas : [pessoas];
