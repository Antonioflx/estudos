// Array Methods -> map, filter, find, some, every, includes, indexOf, findIndex

const personsArray = [
	{
		name: "Person 0",
		age: 60,
		country: "USA",
	},
	{
		name: "Person 1",
		age: 30,
		country: "USA",
	},
	{
		name: "Person 2",
		age: 23,
		country: "RUSSIA",
	},
	{
		name: "Person 3",
		age: 21,
		city: "INDIA",
	},
];

// criar uma array que tenha apenas os nomes das pessoas

// map.
// prettier-ignore
const getAllName = personsArray
	.map((elements, index) => {
	return `${index} = ${elements.name} age is ${elements.age}`;
});

console.log(getAllName);

// find -> achar o 1

const getPersonFromUSA = personsArray.find(
	(elements) => elements.country === "USA"
);

console.log(getPersonFromUSA);
// filter -> checkar

// prettier-ignore
const getAllPersonFromUSA = personsArray.filter(
	(elements, index) => elements.country === "USA"
);

console.log(getAllPersonFromUSA);

// some -> retorna um booleano (true ou false) através de uma condição

const checkAgeOfPerson1 = personsArray.some(
	// (elements) => elements.age === 30 // true
	(elements) => elements.age === 20 // false
);

console.log(checkAgeOfPerson1);
console.log(checkAgeOfPerson1 ? "Age is 30" : "Idade está errada");

// every -> Retorna um booelano (true ou false) através se todos satisfazerem a condição

const cheackAllAgeOfPerson = personsArray.every(
	(elements) => elements.age > 20 // false
);

console.log(cheackAllAgeOfPerson);
console.log(
	cheackAllAgeOfPerson
		? "Adultos ou idosos"
		: "Nem todo mundo é adulto ou idoso"
);

// includes -> verificar se um elemento está presente na array -> retorna true ou false

const fruistArray = ["apple", "banana", "orange"];

console.log(fruistArray.includes("apple"));
console.log(fruistArray.includes("mamao"));

// indexOf -> verifica a posição onde o elemento está presente na array -> retorna o indíce se tiver. Caso não tenha retorna -1.

console.log(fruistArray.indexOf("apple"));
console.log(fruistArray.indexOf("banana"));
console.log(fruistArray.indexOf("mamao"));

// findIndex -> retorna o indíce onde o elemento está presente da array de objetos -> caso não tenha retorna -1.
const getRussianPerson = personsArray.findIndex(
	(elements) => elements.country === "RUSSIA"
);

console.log(getRussianPerson);
