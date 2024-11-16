// props -> é uma forma de passar dados de um componente para outro
import { useState } from "react";
import styles from "./product-item.module.css"; // importando um modulo de css

function ButtomComponent({ onClick }) {
	return <button onClick={onClick}>Toggle</button>;
}

export default function ShowText() {
	// state -> renderizar o componente através da interação
	const [toggle, setToggle] = useState(true);

	const btnText = toggle ? (
		<p style={{ color: "red" }}>Mostrando o texto</p>
	) : null;

	const changeToggle = () => setToggle(!toggle);
	return (
		<div
			style={{
				// Atribuir o inline css
				width: "450px",
				backgroundColor: "lightgray",
				padding: "30px",
				marginBottom: "10px",
				border: "2px solid gray",
				borderRadius: "10px",
				display: "flex",
				justifyContent: "center",
			}}
		>
			<div>
				{btnText}
				<ButtomComponent onClick={changeToggle} />
			</div>
		</div>
	);
}
