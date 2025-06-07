// podemos fazer que uma função se sobrescreva.

// sobrecarga
function makeDate(timestamp: number): Date;
function makeDate(m: number, d: number, y: number): Date;
function makeDate(
	mOrTimeStamp: number,
	d?: number,
	y?: number
): Date {
	if (d !== undefined && y !== undefined)
		return new Date(y, mOrTimeStamp, d);

	return new Date(mOrTimeStamp);
}

const d1 = makeDate(12345678);
const d2 = makeDate(5, 5, 5);
// const d3 = makeDate(2, 2); // erro tem que ser 1 ou 3 argumentos

function fn(x: string): void;
function fn() {} // ..
// function fn(x? : string) {
// precisaria adicionar esse para dar certo
// }

// fn(); // da erro
// pq? -> A assinatura para escrever o corpo da função n pode ver o de fora.

// outro ponto tbm

// é que os parametros de sobrecarga tem que ser compativeis

// function example(s: string): string; // erro de compatibilidade
// function example(x: boolean): boolean;
// function example(x: boolean | string) {
// 	console.log("ops", x);
// }

function len(s: string): number;
function len(arr: any[]): number;
function len(x: any) {
	return x.length;
}

len(""); // da certo
len([0]); // da certgo
// len(Math.random() > 0.5 ? "hello" : [0]); // da erro, pq o ts só consegue resolver uma chammada de função

// o correto e ideal seria

function len_correct(data: any[] | string) {
	return data.length;
}

console.log(len_correct("hellos"));
console.log(len_correct([0, 2, 2, 3, 4]));
console.log(len_correct([0, 2, 2, "Jose", "Felix"]));

// evitar sobrecarga
