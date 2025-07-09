function identity(arg: number): number {
	return arg;
}

// ou podemos fazer

function identity_any(arg: any): any {
	return arg;
}

// mas perdemos o tipo, ent melhor usar type

function identity_type<Type>(arg: Type): Type {
	return arg;
}

//

let output = identity_type<string>("My string");

output = identity_any(1);

function LogginIdentity<Type>(arg: Type[]): Type[] {
	console.log(arg.length);

	return arg;
}

// outra forma de colocar o array
function LogginIdentity_EX2<Type>(arg: Array<Type>): Array<Type> {
	console.log(arg.length);

	return arg;
}

export {};
