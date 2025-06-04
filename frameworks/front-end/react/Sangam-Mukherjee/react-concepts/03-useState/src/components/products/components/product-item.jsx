// props -> é uma forma de passar dados de um componente para outro
import { useState } from "react";
import styles from "./product-item.module.css"; // importando um modulo de css

function ButtomComponent({ tema, onClick, text }) {
	return (
		<button className={tema} onClick={onClick}>
			Toggle
		</button>
	);
}

export default function ProductItem({ singleProductItem, index }) {
	// state -> renderizar o componente através da interação
	const [toggle, setToggle] = useState(true);

	// importar os styles.
	const { btnBrown, btnGreen } = styles;

	const btnText = toggle ? singleProductItem : null;
	const className = toggle ? btnBrown : btnGreen;

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
			<p key={index} className={styles.productTitle}>
				{btnText}
				<ButtomComponent tema={className} onClick={changeToggle} />
			</p>
		</div>
	);
}
