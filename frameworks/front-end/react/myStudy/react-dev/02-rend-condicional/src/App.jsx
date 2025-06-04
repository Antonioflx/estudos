import { useState } from "react";

import "./App.css";

import AdminPanel from "./AdminPainel";
import LoginForm from "./LoginForm";

function App() {
	// Criando varaiveis, 1 parametro. E 2 parametro funcoes para passar no props das outras páginas.
	// Além disso, utilizando useState() para deixar um valor atribuido.
	const [isLoggedIn, setIsLoggedIn] = useState(false);
	const [userName, setUserName] = useState("Antonio Felix");
	const [userAge, setAge] = useState(21);

	// Fazer uma renderização condicional

	return (
		<>
			{isLoggedIn ? (
				<AdminPanel username={userName} age={userAge} /> // Pegar o nome e idade do usu
			) : (
				<LoginForm
					setIsLoggedIn={setIsLoggedIn} // Modificar Quando usu enviar os dados
					setUserName={setUserName} // Modificar Quando usu enviar os dados
					setAge={setAge} // Modificar Quando usu enviar os dados
				/>
			)}
		</>
	);
}

export default App;
