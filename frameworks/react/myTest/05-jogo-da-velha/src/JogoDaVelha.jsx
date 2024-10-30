import { useState } from "react";

function Square({ value, onSquareClick }) {
	// const [value, setValue] = useState(null);
	return (
		<button
			className="square"
			onClick={onSquareClick}
			style={{
				width: "100px",
				height: "100px",
				backgroundColor: "lightgray",
				color: "black",
				fontSize: "25px",
				fontWeight: "bolder",
			}}
		>
			{value}
		</button>
	);
}

function Board({ xIsNext, squares, onPlay }) {
	// variavel para definir a letra
	// const [xIsNext, setXIsNext] = useState(true);
	// const [squares, setSquares] = useState(Array(9).fill(null));

	const handleClick = (i) => {
		if (squares[i] || calculateWinner(squares)) return; // Caso já tenha um valor no quadrado, retornará true e vai retornar cedo.

		const nextSquares = squares.slice(); // slice serve para clonar a array.
		xIsNext ? (nextSquares[i] = "X") : (nextSquares[i] = "O");

		// setSquares(nextSquares); // adicionar o valor a array modificada.
		// setXIsNext(!xIsNext); // autalizar caso seja X, torna false para jogar o O

		onPlay(nextSquares);
	};

	// Mostrar que o jogador ganhou

	const winner = calculateWinner(squares);
	let status;

	winner
		? (status = "Winner: Jogador " + winner)
		: (status = "Next player: " + (xIsNext ? "X" : "O"));

	return (
		<>
			<div
				className="status"
				style={{
					display: "flex",
					justifyContent: "right",
					paddingBottom: "100px",
				}}
			>
				{status}
			</div>

			<div className="board-row">
				<Square // Fazer um loop...
					value={squares[0]}
					onSquareClick={() => handleClick(0)} // chamando a funcao em um callback, facilitando a renderização. Além disso, passando o parametro, visto que. onSquareClick{handleClick(0)} -> Estariamos chamando a função infinitamente.
				/>
				<Square
					value={squares[1]}
					onSquareClick={() => handleClick(1)}
				/>
				<Square
					value={squares[2]}
					onSquareClick={() => handleClick(2)}
				/>
			</div>
			<div className="board-row">
				<Square
					value={squares[3]}
					onSquareClick={() => handleClick(3)}
				/>
				<Square
					value={squares[4]}
					onSquareClick={() => handleClick(4)}
				/>
				<Square
					value={squares[5]}
					onSquareClick={() => handleClick(5)}
				/>
			</div>
			<div className="board-row">
				<Square
					value={squares[6]}
					onSquareClick={() => handleClick(6)}
				/>
				<Square
					value={squares[7]}
					onSquareClick={() => handleClick(7)}
				/>
				<Square
					value={squares[8]}
					onSquareClick={() => handleClick(8)}
				/>
			</div>
		</>
	);
}

// funcao para calcular o vencedor

export default function Game() {
	const [history, setHistory] = useState([Array(9).fill(null)]); // Armazenar os valores antigos.
	const [currentMove, setCurrentMove] = useState(0);
	const xIsNext = currentMove % 2 === 0;
	const currentSquares = history[currentMove];

	function handlePlay(nextSquares) {
		// setSquares(nextSquares); // adicionar o valor a array modificada.
		// setXIsNext(!xIsNext); // autalizar caso seja X, torna false para jogar o O
		const nextHistory = [
			...history.slice(0, currentMove + 1),
			nextSquares,
		];
		setHistory(nextHistory); // Juntar os valores da array.
		setCurrentMove(nextHistory.length - 1);
	}

	function jumpTo(nextMove) {
		setCurrentMove(nextMove);
	}

	const moves = history.map((squares, move) => {
		let description;
		move > 0
			? (description = "Go to move #" + move)
			: (description = "Go to game start");

		return (
			<li key={move}>
				<button onClick={() => jumpTo(move)}>{description}</button>
			</li>
		);
	});
	return (
		<div className="game">
			<div className="game-board">
				<Board
					xIsNext={xIsNext}
					squares={currentSquares}
					onPlay={handlePlay}
				/>
			</div>
			<div
				className="game-info"
				style={{ display: "flex", justifyContent: "end" }}
			>
				<ol>{moves}</ol>
			</div>
		</div>
	);
}

function calculateWinner(squares) {
	const lines = [
		[0, 1, 2],
		[3, 4, 5],
		[6, 7, 8],
		[0, 3, 6],
		[1, 4, 7],
		[2, 5, 8],
		[0, 4, 8],
		[2, 4, 6],
	];

	for (let i = 0; i < lines.length; i++) {
		const [a, b, c] = lines[i];
		if (
			squares[a] &&
			squares[a] === squares[b] &&
			squares[a] === squares[c]
		) {
			return squares[a];
		}
	}
	return null;
}
