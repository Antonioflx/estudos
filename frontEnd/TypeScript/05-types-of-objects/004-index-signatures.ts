interface StringArray {
	[index: number]: string;
}
function getStringArray(): StringArray {
	return ["Apple", "Orange", "Banana"];
}

const myArray: StringArray = getStringArray();
const secondItem = myArray[1];

console.log(myArray);
console.log(secondItem);

// índice de string é uma maneira poderosa de descrever o padrão "dicionário"

interface NumberDictionary {
	// [index: string]: number; // define que tem que ser number -> 1 caso
	[index: string]: number | string; // define que tem que ser number ou string -> 2 caso

	length: number;
	name: string;

	// name: string; da erro no 1 caso
	// teste: boolean; da erro
}
