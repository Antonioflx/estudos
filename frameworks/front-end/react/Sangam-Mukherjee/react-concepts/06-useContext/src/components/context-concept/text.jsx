import { useContext } from "react";
import { GlobalContext } from "../../context";

export default function ContextTextComponent() {
	// pegar os valores.
	const { theme } = useContext(GlobalContext);
	return (
		<h1
			style={{
				color: theme,
				fontSize: theme === "lightblue" ? "50px" : "60px",
			}}
		>
			{" "}
			Antonio Felix{" "}
		</h1>
	);
}
