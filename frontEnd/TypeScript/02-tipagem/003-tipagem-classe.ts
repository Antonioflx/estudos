// typeScript tbm suporta classe    POO

interface User {
	name: string;
	age: number;
	addres: {
		rua: string;
		bairro: string;
		numero: number;
	};
}

class UserAccount {
	name: string;
	age: number;
	addres: { rua: string; bairro: string; numero: number };

	constructor(
		name: string,
		age: number,
		addres: { rua: string; bairro: string; numero: number }
	) {
		this.name = name;
		this.age = age;
		this.addres = addres;
	}
}

const user: User = new UserAccount("Antonio", 22, {
	rua: "Felizardo Leite",
	bairro: "Centro",
	numero: 22,
});

console.log(user);

// q coisa braba mermao.
