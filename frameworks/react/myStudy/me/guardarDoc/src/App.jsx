import { useState } from "react";
import "./App.css";

/*  Estudos */

// Precisa ajustar o caminho
// import ShowTheComponent from "../../aprendizados/components";
// import DeclaringPropriedade from "../../aprendizados/propriedades";
// import ShowCounter from "../../aprendizados/State";
// import ShowCondicional from "../../aprendizados/condicional";

// Aprendendos hooks:

// Context
// import Context from "../../aprendizados/hooks/03-useContext/Context";
// import Context2 from "../../aprendizados/hooks/04-useContext/Context2";

// Memo
// import ShowMemo from "../../aprendizados/hooks/02-useMemo/Memo";
// import ShowMemo2 from "../../aprendizados/hooks/02-useMemo/Memo2";
import ShowMemo3AndContext from "../../aprendizados/hooks/02-useMemo//memo/Memo3";

function App() {
	return (
		<>
			{/* Estudo 1 <ShowTheComponent />{" "} */}
			{/* Estudo 2 <DeclaringPropriedade /> */}
			{/* Estudo 3 <ShowCounter /> */}
			{/* Estudo 4 <ShowCondicional /> */}
			{/* Estudo Hooks 2 <ShowMemo /> */}
			{/* Estudo Hooks 2.1 <ShowMemo2 /> */}
			<ShowMemo3AndContext />
			{/* Estudo Hooks 4 <Context /> */}
			{/* Estudo Hooks 4.1 <Context2 /> */}
		</>
	);
}

export default App;
