//  Um componente React é uma função JavaScript que você pode usar em combinação com tags.

// No React, um componente é uma peça de código reutilizável a qual representa uma parte de sua interface de usuário. Componentes são usados para renderizar, administrar, e atualizar os elementos de UI na sua aplicação.

// Ex1:

// Precisa iniciar com Letra maiuscula para o jsx.
function Component() {
	return (
		<div>
			{" "}
			<p>Mostrando o Componente...</p>
		</div>
	);
}

// export default -> exporta um documento(que eu coloco) principal

// Para retornar mais de um componente utilizar <> </> ou <div> </div>
export default function ShowTheComponent() {
	// Retornando Componentes
	return (
		<>
			<Component />
			<Component />
		</>
	);
}
