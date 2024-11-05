import { useState, useRef } from "react";

export default function ShowRef2() {
	return <StopWatch />;
}

/*
    Fazer uma melhoria dps,
    tipo, colocar retornar
    e quando clicar start, manter o num anterior.

*/
function StopWatch() {
	const [startTime, setStartTime] = useState(null);
	const [now, setNow] = useState(null);
	const intervalRef = useRef(null);

	function handleStart() {
		setStartTime(Date.now());
		setNow(Date.now());

		// interromper a execução do intervalo.
		// para o intervalo.
		clearInterval(intervalRef.current);

		// Executa uma tarefa repetidamente em intervalos de tempo definidios (ms)
		// Ou seja, aqui chamarei setInterval para começar um novo intervalo para  autalizar o estado now a cada 10ms
		intervalRef.current = setInterval(() => {
			setNow(Date.now());
		}, 10);
	}

	let secondsPassed = 0;

	if (startTime != null && now != null) {
		secondsPassed = (now - startTime) / 1000;
	}
	return (
		<div>
			<h1>Time passed: {secondsPassed.toFixed(3)}</h1>
			<button
				style={{ backgroundColor: "lightgray" }}
				onClick={handleStart}
			>
				Start
			</button>
			{"  "}
			<button
				style={{ backgroundColor: "lightgray" }}
				onClick={() => clearInterval(intervalRef.current)}
			>
				Stop
			</button>
		</div>
	);
}
