import { StrictMode } from "react";
import { createRoot } from "react-dom/client";
import "./index.css";
import App from "./App.tsx";
import { Theme, ThemePanel } from "@radix-ui/themes";
import "@radix-ui/themes/styles.css";

createRoot(document.getElementById("root")!).render(
	<StrictMode>
		<Theme>
			<App />
			<ThemePanel />
		</Theme>
	</StrictMode>
);
