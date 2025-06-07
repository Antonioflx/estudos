// o | pode ser um ou outro
function getID(id: number | string): number | string {
	return id;
}

console.log("ID " + getID(20));
console.log("ID " + getID("TESTE"));
// console.log("ID " + getID({myID: 2022})); DA ERRO

// n consigo usar metodos caso n funcione em um dos tipo, por exemplo

function printID(id: number | string) {
	// console.log('ID É ' + id.toUpperCase()) // erro;
	// console.log('ID É ' + id.toUpperCase()) // erro;
	console.log(typeof id === "string" ? id.toUpperCase() : id);
}

printID(10);
printID("jose");

function getFirstThree(x: number[] | string) {
	return x.slice(0, 3);
}

// os dois podem ter slice.
console.log(getFirstThree([2, 3, 4, 5]));
console.log(getFirstThree("antonio"));

export {};
