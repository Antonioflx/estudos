// useContexté um React Hook que permite que você leia e assine o contexto do seu componente.

// É bom utilizar quando temos propriedades em comum, evitando a necessidade de utilizar várias e várias props

import { createContext, useContext, useState } from "react";

// Ex1:
// function MyComponent() {
// 	const theme = useContext(ThemeContext);
// }

// o useContext() -> retorna o valor para o pai mais próximo
// Pai -> Utilizando nome.Provider

// ex 2

// Em vez de utilizar como prop, faço com o useContext
const ThemeContext = createContext(null);

export default function MyApp() {
	return (
		<ThemeContext.Provider value="blue">
			<Form />
		</ThemeContext.Provider>
	);
}

function Form() {
	return (
		<Panel title="Welcome">
			<Button> Sign Up</Button>
			<Button> Log in</Button>
		</Panel>
	);
}

function Panel({ title, children }) {
	return (
		<section>
			<h1>{title}</h1>
			{children}
		</section>
	);
}

function Button({ children }) {
	const theme = useContext(ThemeContext);
	const backColor = theme;

	return <button style={{ backgroundColor: backColor }}>{children}</button>;
}
