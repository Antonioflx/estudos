import "./style.css"; /// criar css simples.

// Por que não devemos utilizar indice no key.
/*
	Acho que é pq o id (geralmente utilizado) -> é algo fixo, caso você não mude,
	mas o indice pode ser mudado
*/

function ProductList({ name }) {
	const flag = true;

	// function renderTextBlock(getFlag) {
	// 	return getFlag ? `Welcome ${name}` : "Hello World";
	// }

	const renderTextBlock = flag ? `Welcome ${name}` : "Hello World";
	return (
		<div>
			{" "}
			<h1 className="title"> ECommerce Project </h1>
			<h2>{renderTextBlock}</h2>
		</div>
	);
}

export default ProductList;
