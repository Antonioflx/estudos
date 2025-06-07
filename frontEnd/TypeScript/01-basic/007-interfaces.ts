// interface -> outra forma de nomear um objeto

interface Pessoa {
	name: string;
	age: number;
}

function printPessoa(p: Pessoa) {
	console.log("Nome: " + p.name);
	console.log("Idade: " + p.age);
}

const Pessoa_ex1: Pessoa = {
	name: "Antonio",
	age: 20,
};

printPessoa(Pessoa_ex1);

printPessoa({ name: "José", age: 30 });

// diferença enter type e interface

// type -> n pode ser estendido -> tem que ser com &
// apenas interface pode.

// O uso de interfaces com extends pode frequentemente ser mais eficiente para o compilador do que aliases de tipo com interseções
interface Animal {
	name: string;
}

interface Bear extends Animal {
	raca: string;
}

const bear: Bear = {
	name: "Urso",
	raca: "Pardo",
};

console.log(bear);

// com type

type Animal_2 = {
	name: string;
};

type Cachorro = Animal_2 & {
	raca: string;
};

const dog: Cachorro = {
	name: "Antonio",
	raca: "Salsicha",
};

console.log(dog);

// interface pode adicionar mais itens

interface Casa {
	comodo: string;
	numero: number;
}

// posso adicionar mais coisas
// const casa_ex1:Casa = {
//     comodo: "Quarto",
//     numero: 184
// falta rua
// }

interface Casa {
	rua: string;
}

const casa_ex1: Casa = {
	comodo: "Quarto",
	numero: 184,
	rua: "Onde quero",
};

console.log(casa_ex1);

// type n pode ser alterado

type Galaxia = {
	planeta: string;
};

// erro de duplicaçào

// type Galaxia = {
//     ...Animal
// }
