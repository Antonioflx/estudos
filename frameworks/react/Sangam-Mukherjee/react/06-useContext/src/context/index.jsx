// create the context

import { createContext, useState } from "react";

export const GlobalContext = createContext(null); // (valor padrão)

// useContext é um React Hook que permite que você leia e assine o contexto do seu componente.
// É bom utilizar quando temos propriedades em comum, evitando a necessidade de utilizar várias e várias props

// create the global state.
export default function GlobalState({ children }) {
	const [theme, setTheme] = useState("red");

	function handleChangeTheme() {
		setTheme(theme === "lightblue" ? "lightsalmon" : "lightblue");
	}

	return (
		// Pai -> Utilizando nome.Provider -> fornece o valor do contexto para seus descendentes.
		// Se não usar o Provider, os componentes que consomem o contexto não terão acesso a valores definidos, pois o React não sabe qual valor disponibilizar para o contexto.

		// O atributo value do Provider permite definir o valor que será acessado pelos consumidores do contexto (useContext(GlobalContext)).
		<GlobalContext.Provider
			value={{
				theme,
				handleChangeTheme /*Posso passar o -> setTheme ou um método*/,
			}}
		>
			{" "}
			{children}{" "}
		</GlobalContext.Provider>
	);
}
