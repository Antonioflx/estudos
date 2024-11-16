import { useContext } from "react";
import { GlobalContext } from "../../context";

export default function ContextTextComponent() {
	// pegar os valores.
	const { theme } = useContext(GlobalContext);
	return (
		<h1
			style={{
				color: theme,
				fontSize: theme === "lightblue" ? "30px" : "50px",
			}}
		>
			{" "}
			Antonio Felix{" "}
		</h1>
	);
}
