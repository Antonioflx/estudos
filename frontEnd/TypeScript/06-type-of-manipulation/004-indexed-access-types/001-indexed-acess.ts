// usar um tipo de acesso indexado para acessar uma propriedade específica

type Person = { age: number; name: string; alive: boolean };

type Age = Person["age"]; // number

type I1 = Person["age" | "name"]; // number ou string

type I2 = Person[keyof Person]; // number, string, boolean

// type I1_ex2 = Person["alve"]; // nào existe, logo da erro

// combinar com typeof

const MyArray = [
	{
		name: "Alice",
		age: 21,
	},
	{
		name: "Bob",
		age: 23,
	},
	{
		name: "Felipe",
		age: 20,
	},
];

type Person_ex2 = (typeof MyArray)[number]; // pega os tipos do array de objetos
/*
    {
        name: string;
        age: number
    }
*/

type Age_ex2 = (typeof MyArray)[number]["age"]; // number

type Age_ex3 = Person["age"]; // number

// n podemos usar variaveis para buscar propriedades

// const key = "age"
// type Age_ex4 = Person[key] erro

// mas podesemos usar alis

type key = "age";
type Age_ex5 = Person[key]; // number
