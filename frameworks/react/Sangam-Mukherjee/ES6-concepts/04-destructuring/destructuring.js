// Destructuring -> facilitar o acesso.

const id2 = 2;
const productName = "Product Apple Watch";
const rating = 5;

const product2 = {
	id2,
	productName,
	rating,
};

const produtos = {
	id: 1,
	nome: "Banana",
	price: 1.2,
};

// para acesasr produtos.nome

console.log(produtos.nome);

// destruturando

const { id, nome, price } = produtos;

console.log(id, nome, "R$ " + price);

const array = [1, 2, 3];

// let getArrayFirstValue = array[0];
// console.log(getArrayFirstValue);

const [arrayFirstElement, arraySecondElement] = array;

console.log(arrayFirstElement, arraySecondElement);
