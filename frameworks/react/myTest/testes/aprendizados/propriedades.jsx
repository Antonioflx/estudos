/* 
    function Componente( props ) {
        console.log(props) -> Mostrará um objeto vazio
    }

    ou seja, tudo que eu colocar em { entrará dentro do objeto -> propriedade}
*/

function Propriedade({ texto }) {
	return (
		<div>
			{" "}
			{/* <p>Mostrando o Componente...</p> */}
			{/* Substituir por -> */}
			{texto}
		</div>
	);
}

/* Da para atribuir os valores:
    <Component texto ={"Atribuindo"} />

*/
export default function DeclaringPropriedade() {
	// Retornando componentes.
	// Atribuindo os valores.
	return (
		<>
			<Propriedade texto={"Atribuindo o 1 valor"} />
			<Propriedade texto={"Atribuindo o 2 valor"} />
		</>
	);
}
