// criando um objeto
const user = {
	name: "Antonio",
	age: 22,
};

console.log("Name " + user.name);

// a interface serve para proteger o objeto e fazer a tipagem
interface User {
	name: string;
	// teste: string; caso tenha teste ativo tem que colocar no user2.
	age: number;
}

const user2: User = {
	name: "Hayes",
	// teste: 2, // da erro, pq n pode ser number
	// teste: true, // da erro, pq n pode ser boolean
	// teste: "Antonio", // da certo, pq pode ser string
	age: 22,
};

console.log("Idade " + user2.age);

export {};
