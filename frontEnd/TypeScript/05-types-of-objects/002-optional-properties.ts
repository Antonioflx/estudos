// propriedades opcional do objeto -> propriedade?: <Type>

interface PaintOptions {
	shape: string;
	xPos?: number;
	yPos?: number;
}

function printPaint(opts: PaintOptions) {
	console.log(
		opts.xPos !== undefined && opts.yPos !== undefined
			? `${opts.shape}: x-${opts.xPos} y-${opts.yPos}`
			: opts.shape
	);
}

printPaint({ shape: "body" });
printPaint({ shape: "body", xPos: 20 });
printPaint({ shape: "body", xPos: 20, yPos: 30 });
