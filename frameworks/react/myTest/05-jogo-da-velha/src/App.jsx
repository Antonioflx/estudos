import { useState } from "react";
import "./App.css";
import Game from "./JogoDaVelha";

function App() {
	const [count, setCount] = useState(0);

	return (
		<>
			<Game />
		</>
	);
}

export default App;
