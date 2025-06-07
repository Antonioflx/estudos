// Infrencia -> ts define o tipo de acordo com o input

// podemos "Definri os tipos"

// por exemplo Input -> será uma array de algo que o ts vai definir de acordo com o input[]
// Output -> será um retorno de Array
function map<Input, Output>(
	arr: Input[],
	func: (arg: Input) => Output
): Output[] {
	return arr.map(func);
}

const parsed = map(["1", "2", "3", "4"], (n) => parseInt(n));

const example_2 = map(
	["Antonio", "Felix", "De", "Oliveira", "Neto"],
	(item) => item
);

console.log(parsed);
console.log(example_2);
