// readonly -> só pode ser lida, n pode ser alterada durante a verificação de tipo

// -> indica que a propriedade não pode ser reescrita

interface SomeType {
	readonly name: string;
}

function doShomething(obj: SomeType) {
	console.log(`prop has the value: ${obj.name}`);

	// obj.name = "Antonio" // da erro, n pode atribuir
}

doShomething({ name: "Comer Livia" });
