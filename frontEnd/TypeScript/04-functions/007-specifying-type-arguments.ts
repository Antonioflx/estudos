function combine<Type>(arr1: Type[], arr2: Type[]): Type[] {
	return arr1.concat(arr2);
}

// const arr = combine([1, 2], ["hello"]);  da erro
const arr = console.log(combine([1, 2], [3, 4]));

// podemos definir nós mesmos o tipo. Assim, da certo
const arr2 = console.log(
	combine<string | number>([1, 2, 3, 4], ["hello"])
);

// bom evitarmos tantos tipos

function printOla(s: string) {
	return console.log("Hello: ", s);
}

printOla("Eu");
