// function sum_ex1({ a, b, c }) { tipo any -> da erro
// 	console.log(a + b + c);
// }

// a tipagem vem dps da desestruturação
function sum_ex2({ a, b, c }: { a: number; b: number; c: number }) {
	console.log(a + b + c);
}

// ou posso criar um type

type SumNumbers = { a: number; b: number; c: number };

function sum_ex3({ a, b, c }: SumNumbers) {
	console.log(a + b + c);
}

sum_ex2({ a: 20, b: 30, c: 40 });
sum_ex3({ a: 40, b: 30, c: 40 });
