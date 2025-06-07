// void -> retorna nada

function nothing() {
	// void
	return;
}

// object -> qualquer coisa que n seja ( string , number, boolean, bigint, symbol)

// unknown -> mesma coisa que any, porém mais seguro, visto que n podemos fazer nada com unknow valor

function fn(a: any) {
	a.b();
}

// function fn_2(a: unknown) {
//     // a.b(); erro
// }

// retorna um valor desconhecido
function safeParse(s: string): unknown {
	return JSON.parse(s);
}

// never -> algumas funções nunca retornam nada

function fail(msg: string): never {
	throw new Error(msg);
}

// além disso quando não mais nada em uma união.

// ex

function union(value: number | string) {
	if (typeof value === "number") return console.log("number");

	if (typeof value === "string") return console.log("string");

	return console.log("Never");
}

union(10);
union("string");

// Function

// chamda não tipada
function doSomething(f: Function) {
	return f(1, 2, 3);
}
