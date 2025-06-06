const names: Array<string> = ["Antonio", "Dante", "Matheus"];

names.forEach(function (s) {
	console.log(s.toUpperCase());
});

names.push("Jose");

names.forEach((name: string) => console.log(name.toLowerCase()));

// assim, seria a declaração insegura de objetos.

const numbers_inseguro = {
	par: [2, 4, 6],
	impar: [1, 3, 5],
};

console.log("Objeto inseguro ", numbers_inseguro);

// type seria bom usar justamente para coisas mais complexas como
// type number =  1 | 2
// type ID = string | number;
type Number = {
	par: Array<number>;
	impar: Array<number>;
};

const number_seguro_ex1: Number = {
	par: [2, 4],
	impar: [1, 3],
};

number_seguro_ex1.par.push(6);
console.log(number_seguro_ex1);

/*
    type Animal = {
        nome: string;
    };

    type Cão = Animal & {
    raca: string;
    };


    seria tipo

    type Cão = {
        nome: string,
        raca: string,
    }

    type Cachorro = Animal & { raca: string };
    type Peixe = Animal & { tipoAgua: "doce" | "salgada" };
*/

// nesse caminho que fiz, seria melhor interface

interface Number_ex2 {
	par: Array<number>;
	impar: Array<number>;
}

const number_seguro_ex2: Number_ex2 = {
	par: [10, 20],
	impar: [11, 21],
};

console.log(number_seguro_ex2);

// colocar um ? -> pode ser undefined
function printName(name: { first: string; last?: string }): string {
	return "Nome: " + name.first + " " + name.last;
}

function printName_ex2(name: {
	first: string;
	last: string;
}): string {
	return "Nome: " + name.first + " " + name.last;
}

console.log(printName({ first: "Antonio" }));
console.log(printName_ex2({ first: "Antonio", last: "Felix" })); // é necessario o last name tbm
export {};
