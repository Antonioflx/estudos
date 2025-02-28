/*


	const [state, dispatch] = useReducer(recuder, initialArg, init?)

	geralmente utilizar apenas o reducer (funcao), initialArg(objeto de argumentos)



*/

// objeto
const initialState = {
	showTextFlag: false,
	changeTextStylesFlag: false,
};

// função reducer -> 2 parametros, state, action

// cria em um arquivo separado
const HIDE_TEXT = "HIDE_TEXT";
const SHOW_TEXT = "SHOW_TEXT";
const CHANGE_TEXT_STYLE = "CHANGE_TEXT_STYLE";

function reducer(state, action) {
	// const handleTheState = {
	// 	// precisa utilizar [] -> o js permite criar uma chave dinâmica
	// 	HIDE_TEXT: () => {
	// 		return {
	// 			// o ... spread copoia todas a propriedades do estado a tual e permite modificar apenas o necessário.
	// 			...state,
	// 			showTextFlag: false,
	// 		};
	// 	},
	// 	SHOW_TEXT: () => {
	// 		return {
	// 			...state,
	// 			showTextFlag: true,
	// 		};
	// 	},
	// 	CHANGE_TEXT_STYLE: () => {
	// 		return {
	// 			...state,
	// 			// pq a gente vai ficar mudando toda hora
	// 			changeTextStylesFlag: !state.changeTextStylesFlag,
	// 		};
	// 	},
	// };
	// precisa retornar.
	// return handleTheState[action.type]
	// 	? handleTheState[action.type]()
	// 	: state;

	// ele utiliza switch -> action.type -> uma ação temos esse tipo. De acordo com o tipo ele executa uma ação
	switch (action.type) {
		case HIDE_TEXT:
			return { ...state, showTextFlag: false };

		case SHOW_TEXT:
			return { ...state, showTextFlag: true };
		case CHANGE_TEXT_STYLE:
			return {
				...state,
				changeTextStylesFlag: !state.changeTextStylesFlag,
			};
		default:
			return state;
	}
}

import { useReducer } from "react";

export default function UseReducerExample() {
	const [state, dispatch] = useReducer(reducer, initialState);
	console.log(state);
	return (
		<div>
			{state?.showTextFlag ? (
				<h3
					style={{
						backgroundColor: state?.changeTextStylesFlag
							? "gray"
							: "white",
					}}
				>
					Use Reducer Hook Example
				</h3>
			) : null}
			<button
				onClick={() => dispatch({ type: HIDE_TEXT })}
				style={{ marginLeft: "10px", backgroundColor: "lightcyan" }}
			>
				Hide Text
			</button>
			<button
				onClick={() => dispatch({ type: SHOW_TEXT })}
				style={{ marginLeft: "10px", backgroundColor: "lightcyan" }}
			>
				Show Text
			</button>
			<button
				onClick={() => dispatch({ type: CHANGE_TEXT_STYLE })}
				style={{ marginLeft: "10px", backgroundColor: "lightcyan" }}
			>
				Toggle Text Styles{" "}
			</button>
		</div>
	);
}
