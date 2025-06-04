import { createContext, useContext, useState } from "react";

// const ThemeContext = createContext(null);
const ColorContext = createContext(null);

export default function MyApp() {
	// Podemos utilizar state, para mudar de acordo com a interação do usu
	// const [theme, setTheme] = useState("black");
	const [color, setColor] = useState("black");

	/*
         Posso utilizar states, mas diminui o desempenho
        Seria melhor utilizar expressao regular com match.
        Ex: const rgbValues = color.match(/\d+/g); -> Na parte de button
        Mas, como eu n sei, n irei utilizar. Aprenderei, e dps utilizo
    */
	const [R, setR] = useState(0);
	const [G, setG] = useState(0);
	const [B, setB] = useState(0);

	// prettier-ignore
	// Podemos passar funcoes, variaveis, etc.
	return (
		<ColorContext.Provider value={{color, R, G, B}} >
			<Form />
			<label htmlFor="check-color">
				<input 
                    type="checkbox" 
                    name="check-color" 
                    id="check-color" 
                    // onChange={
                    //     (evt) => setTheme(evt.target.checked ? 'blue' : 'red')
                    // }
                    onChange={
                        (evt) => {
                            // criar as variaveis para cores
                            const newR = Math.floor(Math.random() * 256);
                            const newG = Math.floor(Math.random() * 256);
                            const newB = Math.floor(Math.random() * 256);

                            setColor(evt.target.checked 
                                ? `rgb(${newR}, ${newG}, ${newB})`
                                : `rgb(${newR}, ${newG}, ${newB})` 
                            );
                            // Autalizar as cores e valores do RGB
                            setR(newR);
                            setG(newG);
                            setB(newB);
                        }
                    }
                />
				Trocar a cor do <strong>botão</strong>
			</label>
		</ColorContext.Provider>
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
	// const theme = useContext(ThemeContext);
	return (
		<section>
			<h1>{title}</h1>
			{children}
		</section>
	);
}

function Button({ children }) {
	// const theme = useContext(ThemeContext);
	const { color, R, G, B } = useContext(ColorContext);

	/*
        Luminosidade= 0.299×R+0.587×G+0.114×B 
    
        Cores claras geralmente têm uma luminosidade acima de 128.
    
        Cores escuras têm uma luminosidade abaixo de 128
    */

	const luminosidade = R * 0.299 + G * 0.587 + B * 0.114;

	const textColor = luminosidade < 128 ? "white" : "black";

	// prettier-ignore
	return (
		<button
			style={
                { backgroundColor: color, 
                    margin: "10px", 
                    color: textColor 
                }}
		>
			{children}
		</button>
	);
}
