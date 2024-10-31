import { useState } from "react";

import "./App.css";

// Criar umaa array de objeto sobre produtos
const products = [
	{ tittle: "Repolho", isFruit: false, id: 1 },
	{ tittle: "Alho", isFruit: false, id: 2 },
	{ tittle: "Maça", isFruit: true, id: 3 },
];

const ShoppingList = () => {
	// listas dos itens

	/* 	
		No React, a propriedade key é um atributo especial que ajuda o React a identificar quais itens de 	uma lista mudaram, foram adicionados ou removidos. É importante para a performance e a correta renderização de listas de componentes.
	*/
	const listItems = products.map((product) => (
		<li
			key={product.id}
			style={{ color: product.isFruit ? "red" : "darkgreen" }}
		>
			{product.tittle}
		</li>
	));

	return <ul>{listItems}</ul>;
};

function App() {
	return (
		<>
			<ShoppingList />
		</>
	);
}

export default App;
