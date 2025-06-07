// função generica. -> tipo any

// tipo any, mas n é bom
function firstElement(arr: any[]) {
	return arr[0];
}

// assim seria mais confiavel, visto que de acordo com os dados será definido um tipo
function firstElement_ex2<Type>(arr: Type[]): Type | undefined {
	return arr[0];
}

// string
const string_array = firstElement_ex2([
	"Antonio",
	"Felix",
	"De",
	"Oliveira",
]);

// numbers
const numbers_array = firstElement_ex2([2, 3, 4]);

// undefined
const undefined_example = firstElement_ex2([]);

// any
const undefined_example2 = firstElement([]);
