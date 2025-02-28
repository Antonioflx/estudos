import "./App.css";
import ShowText2 from "./components/products/components/produc-item.2";
import ShowText from "./components/products/components/product-item";
import ProductList from "./components/products/index";

function App() {
	return (
		<div>
			<h1>React Js Concepts 2024.</h1>
			<ProductList name={"Antonio"} />{" "}
			{/*passando um prop para o Component Product List*/}
			<div>
				<ShowText />
				<ShowText2 />
			</div>
		</div>
	);
}

export default App;
