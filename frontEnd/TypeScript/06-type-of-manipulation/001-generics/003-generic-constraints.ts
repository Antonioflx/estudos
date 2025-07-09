// podemos fazer restrições

interface LengthWise {
	length: number;
}

function loggingIdentity<Type extends LengthWise>(arg: Type): Type {
	console.log(arg.length);
	return arg;
}

loggingIdentity("2");
// loggingIdentity(2); // da erro, pq n tem como ler o length.
