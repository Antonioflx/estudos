// Anotações sobre os methodos do React

import { useState, useCallback, useEffect } from "react";

// useState();
// Faz a renderização dessa unica parte do algoritmo, toda vez que o valor muda
// Nessa situação. count é a variavel que só pode ser mudada pela função setCounter

const [count, setCounter] = useState(0); // Atribuindo valor 0 inicialmente.

setCounter(() => count + 1);

// useCallback()

// Chama o método assim que a página inicia, fazendo que a interação seja garantida.

const [password, setPassword] = useState("");

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

// useEffect

// Execute um método assim que aconteça uma mudança aconteça, utilizar em conjunto com o callBack
// Fazer todas as mundanças assim que as variaveis mudem.
useEffect(
	() => generatePassword(),
	[length, numberAllowed, charAllowed]
);

// useRef()
// copiar coisas da janela.
