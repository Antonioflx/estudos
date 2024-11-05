// useRef é um React Hook que permite referenciar um valor que não é necessário para renderização.

// Parametros: -> Pode ser o valor que quisermos.

// Devolução -> retorna um objeto.

// Alterar uma ref não aciona uma nova renderização. Isso significa que as refs são perfeitas para armazenar informações que não afetam a saída visual do seu componente. Por exemplo, se você precisar armazenar um ID de intervalo e recuperá-lo mais tarde, você pode colocá-lo em uma ref.

// Para atualizar o valor dentro da ref, você precisa alterar manualmente sua current propriedade :

// Ex1:

/*
    function handleStartClick() {
        const intervalId = setInterval(() => { 
            // ....
        }, 1000);
        intervalRef.current = intervalId; // autalizar o valor.
    }


    // acessar

    function handleStopClick() {
        const intervalId = intervalRef.current;
        clearInterval(intervalId);
    }

*/

// Usar uma referência:

/*
    1) Você pode armazenar informações entre novas renderizações (ao contrário de   variáveis ​​regulares, que são redefinidas em cada renderização).

    2) Alterá-lo não aciona uma nova renderização (ao contrário das variáveis ​​de estado, que acionam uma nova renderização).

    3) As informações são locais para cada cópia do seu componente (diferentemente das variáveis ​​externas, que são compartilhadas).
*/

// Contador de Cliques

import { useRef } from "react";

export default function ShowRef() {
	let ref = useRef(0);

	return (
		<button
			onClick={() => {
				ref.current += 1;
				alert("You clicked " + ref.current + " times!");
			}}
		>
			Click me!
		</button>
	);
}
