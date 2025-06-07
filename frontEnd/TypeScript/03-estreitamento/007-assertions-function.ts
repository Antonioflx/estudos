interface Shape_ex1 {
	kind: "circle" | "square";
	radius?: number;
	sideLength?: number;
}

// posso passar toda a interface
// function handleShape(shape: Shape) {
// 	if (shape.kind === "circle") return console.log("Is a square");
// }

// mas tbm n preciso passar toda a interface
function handleShape(kind: Shape_ex1["kind"]) {
	if (kind === "circle") return console.log("Is a square");
}

// function getArea(shape: Shape) {
// 	return Math.PI * shape.radius ** 2; // shape.radius possivelmente undefined -> erro
// }

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
	}
}

console.log(getArea({ kind: "square", sideLength: 20 }));

console.log(getArea({ kind: "circle", radius: 20 }));
