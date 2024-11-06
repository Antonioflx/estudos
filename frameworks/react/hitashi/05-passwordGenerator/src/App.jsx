import { useState, useCallback, useEffect, useRef } from "react";

import "./App.css";

function App() {
	// States para tamanho, permitir numeros e caracteres especiais

	const [length, setLength] = useState(8);
	const [numberAllowed, setNumberAllowed] = useState(false);
	const [charAllowed, setCharAllowed] = useState(false);
	const [password, setPassword] = useState("");

	const passwordRef = useRef(null);
	// utilizar um callback dentro de um callback do React
	// Para quando iniciar a página já resgatar o método e gerar uma senha aleatória toda vez.

	const generatePassword = useCallback(() => {
		let pass = "";
		let str = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

		// Caso o usu marque a caixa, os numeros serão permitidos.

		// Concantenar a string com os numeros.
		if (numberAllowed) str += "0123456789";

		// Concatenar a string com caracteres especiais.
		if (charAllowed) str += "!@#$%^&*()_+";

		// Fazer um loop para pecorrer na string

		for (let i = 0; i < length; i++) {
			const char = Math.floor(Math.random() * str.length + 1);

			pass += str.charAt(char);
		}

		setPassword(pass);

		// Pesquisar sobre matriz de dependeencias -> Utilizar quando os states não mudam muito
		// Aqui só mudara 2 vezes. Se sim ou se não.
	}, [length, numberAllowed, charAllowed]);

	// Quando quisermos que aconteça algo quando o componente estar sendo montado ou carregado
	/*
    Pesquisar mais useEffect.

    1 Par: callback, 2 Par: Matriz de depedências.

    Matriz de depedências, assim que algo mudar, faça a função generatePassowrd() 
  */
	useEffect(
		() => generatePassword(),
		[length, numberAllowed, charAllowed]
	);

	// Copiar a senha

	const copyPasswordToClipboard = () => {
		window.navigator.clipboard.writeText(password);
		passwordRef.current?.select();
		// seleciona de 0 a 4;
		// passwordRef.current?.setSelectionRange(0, 4);
	};

	return (
		<div className="w-full max-w-md mx-auto shadow-md rounded-lg px-4 py-3 my-8 bg-gray-800 text-orange-500">
			<h1 className="text-3xl font-bold mb-2 text-center">
				Password Generator
			</h1>
			<div className="flex shadow rounded-lg overflow-hidden mb-4">
				<input
					type="text"
					name="text-pass"
					id="text-pass"
					value={password}
					className="outline-none w-full py-1 px-3"
					placeholder="Password..."
					readOnly
					ref={passwordRef}
				/>
				<button
					onClick={copyPasswordToClipboard}
					className="outline-none bg-blue-700 text-white px-3 py-0.5 shrink-0"
				>
					Copy
				</button>
			</div>
			<div className="flex text-sm gap-x-2">
				<div className="flex items-center gap-x-1">
					<input
						type="range"
						min={8}
						step={1}
						max={14}
						name="tamSenha"
						id="tamSenha"
						className="cursor-pointer"
						onChange={(evt) => setLength(evt.target.value)}
					/>
					<label htmlFor="length">Length: {length}</label>

					<input
						type="checkbox"
						defaultChecked={numberAllowed}
						onChange={() => setNumberAllowed((prev) => !prev)}
						name=""
						id=""
					/>

					<label htmlFor="number">Numbers:</label>

					<input
						type="checkbox"
						defaultChecked={charAllowed}
						onChange={() => setCharAllowed((prev) => !prev)}
						name=""
						id=""
					/>

					<label htmlFor="charInput">Caracteres:</label>
				</div>
			</div>
		</div>
	);
}

export default App;
