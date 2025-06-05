interface Point {
	num1: number;
	num2: number;
}

function logPoint(point: Point) {
	console.log(`Number1: ${point.num1}, Number2: ${point.num2}`);
}

const point_ex1 = { num1: 12, num2: 13 };
logPoint(point_ex1);

const point_ex2 = { num1: 20, num2: 40, num3: 60 }; // so vai aparecer num1 e num2
logPoint(point_ex2);

const color = { hex: "#fffffff" };
// logPoint(color) // da erro

class VirtualPoint {
	num1: number;
	num2: number;

	constructor(num1: number, num2: number) {
		this.num1 = num1;
		this.num2 = num2;
	}
}

const newVPoint = new VirtualPoint(100, 200);
logPoint(newVPoint);
