interface Circle {
	kind: "circle";
	radius: number;
}

interface Square {
	kind: "square";
	sideLength: number;
}

type Shape = Circle | Square;

function getArea(shape: Shape) {
	switch (shape.kind) {
		case "circle":
			return Math.PI * shape.radius ** 2;

		case "square":
			return shape.sideLength ** 2;

		default:
			const exhaustiveCheck: never = shape; // never -> tipo para representar um valor que não deveria existir
			// estaria relacionada a exaustividade -> tipo, tentou de tudo, mas deu erro
			return exhaustiveCheck;
	}
}

console.log(getArea({ kind: "square", sideLength: 20 }));

console.log(getArea({ kind: "circle", radius: 20 }));

export {};

interface Triangulo {
	kind: "Triangulo";
	height: number;
	width: number;
}

type Shape_ex2 = Circle | Square | Triangulo;

function getArea_ex2(shape: Shape_ex2) {
	switch (shape.kind) {
		case "circle":
			return Math.PI * shape.radius ** 2;

		case "square":
			return shape.sideLength ** 2;

		case "Triangulo":
			return (shape.width * shape.height) / 2;
		// se n tiver Triangulo da erro

		default:
			const exhaustiveCheck: never = shape; // never -> tipo para representar um valor que não deveria existir
			// estaria relacionada a exaustividade -> tipo, tentou de tudo, mas deu erro
			return exhaustiveCheck;
	}
}

console.log(
	getArea_ex2({ kind: "Triangulo", width: 20, height: 30 })
);
