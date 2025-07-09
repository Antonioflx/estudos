function doSomething(value: Array<string>) {
	value.forEach((item) => console.log(item));
}

let myArray: string[] = [
	"Antonioo",
	"Felix",
	"de",
	"Oliveira",
	"Neto",
];

doSomething(myArray);
doSomething(new Array("1", "2", "3"));
export {};
