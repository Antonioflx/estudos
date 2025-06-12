// box pode conter qualquer vlaor

// interface Box {
//     contents: any;
// }

interface Box {
	contents: unknown;
}

let x: Box = {
	contents: "String",
};

if (typeof x.contents === "string")
	console.log("Meu fi é string: ", x.contents.toLowerCase());

// ou

console.log((x.contents as string).toUpperCase());

// poderiamso criar varis interface

interface NumberBox {
	contents: number;
}

interface StringBox {
	contents: string;
}

interface BooleanBox {
	contents: boolean;
}

// mas nada intuitivo mt linha

// mt melhor só crair um tipo

interface Box_2<Type> {
	contents: Type;
}

let box_string: Box_2<string> = { contents: "hello" };
box_string.contents; // string

let box_number: Box_2<number> = {
	contents: 2,
};

box_number.contents; // number

// podemos criar funções genericas

function setContents<Type>(box: Box_2<Type>, newContents: Type) {
	console.log(box.contents);
	box.contents = newContents;
	console.log("New contents: " + newContents);
	console.log("Box Contents: " + box.contents);
}

setContents({ contents: "Oi" }, "jose");

// podemos ter um alise tbm
