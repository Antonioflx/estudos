// props -> é uma forma de passar dados de um componente para outro
import styles from "./product-item.module.css"; // importando um modulo de css

function ButtomComponent() {
	return <button className={styles.buttonStyle}>Click</button>;
}

export default function ProductItem({ singleProductItem, index }) {
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
			<li key={index} className={styles.productTitle}>
				{singleProductItem} <ButtomComponent />
			</li>
		</div>
	);
}
