import "./App.css";
import ContextButtonComponent from "./components/context-concept/button";
import ContextTextComponent from "./components/context-concept/text";
import Users from "./components/users";

function App() {
	return (
		<div>
			<h1>React Js Concepts 2024.</h1>

			{/* <Users /> */}
			<ContextTextComponent />
			<ContextButtonComponent />
		</div>
	);
}

export default App;
