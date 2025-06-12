// interseção de type

type Person = {
	name: string;
	age: number;
};

type Adress = {
	rua: string;
	numero: number;
};

type Funcionario = Person & Adress;

function printFuncionaro(func: Funcionario) {
	console.log(func.name, func.age, func.numero, func.rua);
}

printFuncionaro({
	name: "Antonio",
	age: 20,
	rua: "Sei lá",
	numero: 10,
});

export {};
