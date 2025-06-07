// basicamente -> o operador pode existir ou n

function f(n: number) {
	console.log(n.toFixed());
	console.log(n.toFixed(2));
}

f(10);
// f(); // da erro

// acrescentar o ? pode ser que seja undefined
function fx_2(n?: number) {
	// console.log(n.toFixed());
	// console.log(n?.toFixed(2));
	console.log(n?.toFixed(2));
}

fx_2(20);
fx_2(); // da certo -> undefined

// declarando o valor default -> o undefined será 10
function fx_3(x = 10) {
	console.log(x);
}

fx_3(undefined); // 10
fx_3(); // 10
fx_3(20); // 20

// ------------------- //
