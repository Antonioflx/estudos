// expressões de funções

// declaramos fn como uma função -> seria um callback (a:string) => void
function greet(fn: (a: string) => void) {
	fn("Hello, World");
}

function printConsole(s: string) {
	console.log(s);
}

greet(printConsole);

// tbm podemos usar o type

type GreetFunction = (a: string) => void;

function greet_ex2(fn: GreetFunction) {
	fn("Antonio Felix");
}

greet_ex2(printConsole);
