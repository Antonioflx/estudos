// basicamente seria para usar o typeOf em alguam lógica

function printID(id: string | number) {
	console.log(
		typeof id === "string"
			? id + " : é uma string" // string
			: id + " : é um numero" // number
	);
}

printID(20);
printID("30");
printID("Antonio");

// estreitamento -> processo de refinar tipos para tipos mais específicos.
