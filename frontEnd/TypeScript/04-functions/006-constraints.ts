// podemos restringir tbm

// intuito seria limitar os tipos de um parametro de tipo

function printLongest<Type extends { length: number }>(
	a: Type,
	b: Type
) {
	console.log(a.length > b.length ? a : b);
}

// printLongenst(10, 20) // da erro, pq numeros n tem propriedades de length

printLongest([10, 20], [30, 40, 50]);
printLongest("Felix", "Antonio");
