// State -> Estado

import { useState } from "react";
import ShowContador2 from "./State2";
/*
     O React tira um print do DOM ORIGINAL. E toda vez que ocorre uma renderização, ele compara o DOM PRINT com o DOM ORIGINAL. E, faz a renderização apenas no local onde foi modificado, otimizando o processo de renderização da DOM
*/

// Tudo que contenha use -> é um processo chamado HOOK

// useState();

// Vamos criar um contador.

// Podemos adicionar funcoes como propriedades
function Contador({ value, onClick }) {
	return (
		<div>
			<button onClick={onClick} style={{ margin: "5px" }}>
				Valor: {value}
			</button>
		</div>
	);
}

// ShowCounter é o pai de Contador -> Estamos elevanto o estado.
// Fazendo com que o pai seja responsável pela renderização do filho
// Isso faz com que os botões Autalizem Juntos
export default function ShowCounter() {
	// Atribuindo variaveis. Apenas o setValue pode modificar o valor value.

	// value -> variavel, setValue -> Funcao para a variavel. useState(valor inicial) -> Fazer a modificação
	const [value, setValue] = useState(0);

	return (
		<div>
			<div>
				<h2>Contadores que autalizam juntos</h2>
				<p>Clique em um dos botões para adicionar +1</p>
				<Contador value={value} onClick={() => setValue(value + 1)} />
				<Contador value={value} onClick={() => setValue(value + 1)} />
			</div>
			<div>
				<h2>Contadores que autalizam separadamente</h2>
				<p>Clique no botão para adicionar +1</p>
				<ShowContador2 />
				<ShowContador2 />
			</div>
		</div>
	);
}
