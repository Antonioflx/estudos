import ProductItem from "./components/product-item";
import "./style.css";

// Por que não devemos utilizar indice no key.
/*
	Acho que é pq o id (geralmente utilizado) -> é algo fixo, caso você não mude,
	mas o indice pode ser mudado
*/

function ProductList({ name, listOfProducts }) {
	return (
		<div>
			{" "}
			<h1>
				Welcome {name && ""}
				{name}
			</h1>
			<h2 className="title"> ECommerce Project </h2>
			<ul style={{ textAlign: "left" }}>
				{listOfProducts.map((item, index) => (
					<ProductItem singleProductItem={item} key={index} />
				))}
			</ul>
		</div>
	);
}

export default ProductList;
