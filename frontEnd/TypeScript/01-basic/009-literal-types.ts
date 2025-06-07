// por si só tipos literários n são válidos

let hello: "hello" = "hello"; // só pode ter hello

// mas da para combinar

function printText(
	str: string,
	position: "left" | "top" | "right" | "bottom"
) {
	console.log(str, position);
}

printText("Antonio", "bottom");
// printText("Antonio", "middle");  erro

// funções tbm
function compare(a: number, b: number): -1 | 0 | 1 {
	return a === b ? 0 : a > b ? 1 : -1;
}

console.log(compare(10, 20)); // -1

interface Options {
	width: number;
}

function configure(x: Options | "Auto") {
	console.log(x);
}

configure({ width: 200 });
configure("Auto");

// inferencia literal

// Ao inicializar uma variável com um objeto, o TypeScript assume que as propriedades desse objeto podem mudar de valor posteriormente

const obj = { count: 0 };

obj.count = 1;
console.log(obj);

// o mesmo a string

interface Request_ex1 {
	name_url: string;
	type_method: "GET" | "POST";
}

declare function handleRequest(request: Request_ex1): void;

const req: Request_ex1 = {
	name_url: "https://example.com",
	type_method: "GET",
};

handleRequest(req);
