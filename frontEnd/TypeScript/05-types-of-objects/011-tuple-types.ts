// tupla - Um tipo de tupla é outro tipo de Arraytipo que sabe exatamente quantos elementos ele contém e exatamente quais tipos ele contém em posições específicas.

// tipo -> declaração de fato estática de tipo e valor

// Tipos de tupla são úteis em APIs fortemente baseadas em convenções, onde o significado de cada elemento é "óbvio". Isso nos dá flexibilidade para escolher o nome que queremos dar às nossas variáveis ​​ao desestruturarmos. No exemplo acima, conseguimos nomear os elementos 0e 1as variáveis ​​da forma que quiséssemos.

// Entretanto, como nem todo usuário tem a mesma visão do que é óbvio, pode valer a pena reconsiderar se usar objetos com nomes de propriedades descritivos pode ser melhor para sua API.

type StringNumberPair = [string, number];

function doSomething(pair: StringNumberPair) {
	const a = pair[0]; // string

	const b = pair[1]; // number

	// const c = pair[2] // erro

	console.log(a, b);
}

doSomething(["Hello", 2]);

// destruturucação

function doDestruturação(pair_2: [string, number]) {
	const [inputString, hash] = pair_2;

	console.log(inputString, hash);
}

doDestruturação(["Tudo bem?", 3]);

interface StringNumberPair_2 {
	length: 2;
	0: string;
	1: number;

	slice(start?: number, end?: number): Array<string | number>;
}

// podemos usar o ?

type Either2dOr3d = [number, number, number?];

function setCordinate(coord: Either2dOr3d) {
	const [x, y, z] = coord;

	console.log(x, y, z);
}

type StringNumberBooleans = [string, number, ...boolean[]]; // StringNumberBooleansdescreve uma tupla cujos dois primeiros elementos são stringe numberrespectivamente, mas que pode ter qualquer número de booleans a seguir.
type StringBooleansNumber = [string, ...boolean[], number]; // StringBooleansNumberdescreve uma tupla cujo primeiro elemento é stringe depois qualquer número de booleans e termina com a number.
type BooleansStringNumber = [...boolean[], string, number]; // BooleansStringNumberdescreve uma tupla cujos elementos iniciais são qualquer número de booleans e terminam com a stringe então a number.

// readonly

function doSomething_ex2(pair: readonly [string, number]) {
	console.log(pair[0], pair[1]);

	// pair[0] = "Oi" erro visto que é de readonyl
}

// Tuplas tendem a ser criadas e deixadas inalteradas na maioria dos códigos, portanto, anotar tipos como readonlytuplas sempre que possível é um bom padrão. Isso também é importante, visto que literais de array com constasserções serão inferidos com readonlytipos de tupla.
