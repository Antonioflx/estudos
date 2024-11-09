// props -> é uma forma de passar dados de um componente para outro

function ButtomComponent() {
	return <button>Click</button>;
}

export default function ProductItem({ singleProductItem, index }) {
	return (
		<div>
			<li key={index}>
				{singleProductItem} <ButtomComponent />
			</li>
		</div>
	);
}
