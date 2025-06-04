// Anotações sobre os methodos do React
// precisamos utilizar state (mecanismo) -> E, qualquer alteração no state, ele renderiza novamente a interface de visualização da web

import { useState, useCallback, useEffect } from "react";

// useState();
// Faz a renderização dessa unica parte do algoritmo, toda vez que o valor muda
// Nessa situação. count é a variavel que só pode ser mudada pela função setCounter

const [count, setCounter] = useState(0); // Atribuindo valor 0 inicialmente

// criar uma var
// let counter = 1;

// Nao conseguimos autalizar a variavel assim, visto que o react controla o mecanismo de autalização do site.
// const addValue = () => counter = counter + 1;

const addValue = () => {
	// setCounter está linkado com a variavel counter
	// Isso funciona como um lote.
	// setCounter(counter + 1);
	// setCounter(counter + 1);
	// setCounter(counter + 1);
	// setCounter(counter + 1);

	// Para evitar o uso do lote, podemos fazer um callback (para acessar o valor antigo)
	// Ao fazer isso, eles não podem ser agrupados, pois dependem do valor anterior.
	setCounter((prevCounter) => prevCounter + 1);
	setCounter((prevCounter) => prevCounter + 1);
	setCounter((prevCounter) => prevCounter + 1);
	setCounter((prevCounter) => prevCounter + 1);
};
