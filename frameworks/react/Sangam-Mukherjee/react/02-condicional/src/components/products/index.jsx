import { render } from "react-dom";
import ProductItem from "./components/product-item";
import "./style.css"; /// criar css simples.

// Por que não devemos utilizar indice no key.
/*
	Acho que é pq o id (geralmente utilizado) -> é algo fixo, caso você não mude,
	mas o indice pode ser mudado
*/

function ProductList({ name, listOfProducts }) {
	const flag = false;

	// function renderTextBlock(getFlag) {
	// 	return getFlag ? `Welcome ${name}` : "Hello World";
	// }

	const renderTextBlock = flag ? `Welcome ${name}` : "Hello World";
	return (
		<div>
			{" "}
			<h1 className="title"> ECommerce Project </h1>
			<h2>
				{/* Welcome {name && ""} utilizando operador &&*/}
				{/* {name} */}
				{/*Utiilizando operador ternário -> 1. caminho*/}
				{/* {flag ? `Welcome ${name}` : "Hello World"}  */}
				{/* Criando uma Função -> facilitar a leitura -> 2. caminho*/}
				{/* {renderTextBlock(flag)} */}
				{/*Criando uma variável -> 3. caminho */}
				{renderTextBlock}
			</h2>
			<ul style={{ textAlign: "left" }}>
				{listOfProducts.map((item, index) => (
					<ProductItem singleProductItem={item} key={index} />
				))}
			</ul>
		</div>
	);
}

export default ProductList;
