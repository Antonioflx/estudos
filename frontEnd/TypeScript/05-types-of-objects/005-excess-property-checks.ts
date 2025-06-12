interface SquareConfig {
	color?: string;
	width?: number;
}

function createSquare(config: SquareConfig): {
	color: string;
	area: number;
} {
	return {
		color: config.color || "red",
		area: config.width ? config.width * config.width : 20,
	};
}

// let mySquare = createSquare({ coulor: "red", width: 100 }); // js deixaria isso acontecer
// let mySquare = createSquare({ color: "red", width: 100 });
// outra forma de dar certo
let mySquare = createSquare({
	width: 100,
	opacity: 0.5,
} as SquareConfig);

// mas a melhor forma seria atribuir uma assinatura de indíce
console.log(mySquare);

interface SquareConfig_ex2 {
	color?: string;
	width?: number;
	[propName: string]: unknown;
}

function createSquare_ex2(config: SquareConfig_ex2): {
	color: string;
	area: number;
} {
	return {
		color: config.color || "red",
		area: config.width ? config.width * config.width : 20,
	};
}

let mySquare_ex2 = createSquare_ex2({
	width: 200,
	coulor: "200",
});

console.log(mySquare_ex2);

/*

    function createSquare(config) {
        return {
            color: config.color || "red",
            area: config.width ? config.width * config.width : 20,
        };
    }


    let mySquare = createSquare({coulor: "red", width: 200})

    compila normalmente
*/
