import { useState } from "react";

// Somar 1 de cada vez.
// function MyButton() {
// 	const [counter, setCounter] = useState(0);
// 	const [value, setValue] = useState(1);
// 	return (
// 		<div>
// 			<button onClick={() => setCounter(counter + value)}>
// 				Clicado {counter} vezes{" "}
// 			</button>
// 			<select
// 				name="somValue"
// 				id="somValue"
// 				onChange={(evt) => setValue(Number(evt.target.value))}
// 			>
// 				Numero:
// 				<option value="1">Somar + 1</option>
// 				<option value="2">Somar + 2</option>
// 				<option value="3">Somar + 3</option>
// 				<option value="4">Somar + 4</option>
// 			</select>
// 		</div>
// 	);
// }

// Somar os 2 buttons de uma vez. -> Atribuir os valores no app.js
// “elevar o estado”. Ao mover o estado para cima, você o compartilhou entre os componentes.
function MyButton({ counter = 0, addValue }) {
	return (
		<div>
			<button onClick={addValue}>Clicado {counter} vezes </button>
		</div>
	);
}

export default MyButton;
