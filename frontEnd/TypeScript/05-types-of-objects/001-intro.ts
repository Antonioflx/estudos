// object anonimos

function greet(person: { name: string; age: number }) {
	return console.log("Hello " + person.name);
}

greet({ name: "Antonio", age: 22 });

// nomeados por uma interface

interface Person {
	name: string;
	age: number;
}

function greet_ex2(person: Person) {
	return console.log("Hello Again " + person.name);
}

greet_ex2({ name: "Livia", age: 21 });

// ou um tipo

type Person_ex2 = {
	name: string;
	age: number;
};

function greet_ex3(person: Person_ex2) {
	return console.log("Ola " + person.name, person.age);
}

greet_ex3({ name: "Andrade", age: 22 });
