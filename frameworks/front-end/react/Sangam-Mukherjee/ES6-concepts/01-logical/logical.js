// && -> retorna o primeiro valor falso ou o ultimo valor

// se a for true retornará -> Antonio, se não retornará -> false.
const a = true;
console.log(a && "Antonio");

// || -> retorna o primeiro valor verdadeiro ou o ultimo valor.

// se b for false retornará -> Felix, se não retornará -> true.
const b = false;
console.log(b || "Felix");

// usando &&
// let c = true;
// function getName(name) {
// 	return c && "Nome " + name;
// }

// usando ||
function getName(name) {
	return name || "Não tem nome";
}
console.log(getName());

// usando ??
// retorna o primerio valor nao luno e não indefinido

// let a = null
// let c = 0;
// clg(a ?? 'valor nao nulo'); // "valor nao nulo"
// clg (c ?? 'valor nao nulo"); // 0;
