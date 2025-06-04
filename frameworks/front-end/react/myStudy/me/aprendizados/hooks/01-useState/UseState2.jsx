// Para fazer que o contador seja autalizado de forma separada, fazer no filho
import { useState } from "react";

function Contador2() {
	const [counter, setCounter] = useState(0);

	const handleClick = () => setCounter(counter + 1);

	return (
		<button onClick={handleClick} style={{ margin: "5px" }}>
			Valor: {counter}{" "}
		</button>
	);
}

export default function ShowContador2() {
	return (
		<div>
			<Contador2 />
		</div>
	);
}
