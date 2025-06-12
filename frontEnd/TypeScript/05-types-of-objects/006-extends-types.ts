// basicamente só juntar uma interface com a outra

interface Pessoa {
	name: string;
	age: number;
}

interface Address {
	city: string;
	rua: string;
	num: number;
}

interface Pessoa extends Address {
	unit: string;
}
