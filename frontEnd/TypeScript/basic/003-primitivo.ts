// string, number e boolean -> sempre usar eles. Evitar String, Boolean, Number
const name: string = "Antonio";
const idade: number = 21;
const hasChild: boolean = false;

// any -> pode ser qualquer um
const any_type: any = "oi";

console.log("Nome " + name, idade, hasChild, any_type);

// pode ficar sem o tipo de retorno, mas tbm pode ter com o retorno
function greet(name: string) {
	console.log("Meu nome é " + name);
}

// pode ficar sem o tipo de retorno, mas tbm pode ter com o retorno
function greet_ex2(age: number): string {
	return "Minha idade é " + age;
}

const get_age = (idade: number): number => idade;

console.log("Idade: ", get_age(22));

// console.log(greet(42)); erro.
greet("Antonio");
console.log(greet_ex2(22));

// retornar um promise
async function getFavoriteNumber(): Promise<number> {
	return 26;
}

console.log(getFavoriteNumber());

export {};
