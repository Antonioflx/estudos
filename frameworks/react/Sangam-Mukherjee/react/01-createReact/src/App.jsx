import "./App.css";
import ProductList from "./components/products/index";
// import FunctionalComponent from "./components/FunctionalComponent";

const dummyProductData = ["Product 1", "Product 2", "Product 3"];

function App() {
	return (
		<div>
			<h1>React Js Concepts 2024.</h1>
			{/* <FunctionalComponent /> */}
			<ProductList
				listOfProducts={dummyProductData}
				name={"Antonio"}
			/>{" "}
			{/*passando um prop para o Component Product List*/}
		</div>
	);
}

export default App;
