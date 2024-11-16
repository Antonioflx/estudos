// props -> é uma forma de passar dados de um componente para outro
import { useState, useEffect } from "react";
import styles from "./product-item.module.css"; // importando um modulo de css

function ButtomComponentAdd({ count, onClick }) {
	return <button onClick={onClick}>Number {count}</button>;
}

function ButtomComponentSub({ count, onClick }) {
	return (
		<button onClick={onClick} style={{ marginLeft: "10px" }}>
			Number {count}
		</button>
	);
}

export default function ShowText2() {
	// state -> renderizar o componente através da interação
	const [count, setCount] = useState(0);

	const btnText =
		count === 10 ? (
			<p style={{ color: "red" }}>Mostrando o texto</p>
		) : null;
	const add1 = () => setCount(count + 1);

	const sub1 = () => setCount(count - 1);
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
				<ButtomComponentAdd count={count} onClick={add1} />
				<ButtomComponentSub count={count} onClick={sub1} />
			</div>
		</div>
	);
}
