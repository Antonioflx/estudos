import { useContext } from "react";
import { GlobalContext } from "../../context";

function ContextButtonComponent() {
	// pegar os valores
	const { theme, handleChangeTheme } = useContext(GlobalContext);

	return (
		<button
			onClick={handleChangeTheme}
			style={{
				backgroundColor:
					theme === "lightblue" ? "lightsalmon" : "lightblue",
			}}
		>
			{" "}
			Change Theme{" "}
		</button>
	);
}

export default ContextButtonComponent;
