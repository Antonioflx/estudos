import { useState } from "react";
import MyButton from "./MyButton";
import "./App.css";

function App() {
	const [counter, setCounter] = useState(0);

	const addValue = () => setCounter(counter + 1);
	return (
		<>
			<h1>Contadores que autaliza separadamente</h1>
			<MyButton counter={counter} addValue={addValue} />
			<MyButton counter={counter} addValue={addValue} />
		</>
	);
}

export default App;
