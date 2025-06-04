// Pegando a parte do Memo2.jsx, mas otimizando com o createContext.

// Poderia utilizar o createContext para otimizar

// Visto que, Greetin2, está sendo rederizado ao trocar o tema.

import { useState, useContext, createContext, memo } from "react";

// criando o context

const ThemeColor = createContext(null);

// exportando

export default function ShowMemo3AndContext() {
	return (
		<ChangeBackColor>
			<ShowMemo3 />
		</ChangeBackColor>
	);
}

export function ChangeBackColor({ children }) {
	const [theme, setTheme] = useState("gray");

	/*
        No React, a prop chamada children -> Representa qualquer elemento JSX que é passado como filho para o componente, ou seja, nesse caso ShowMemo3, vai ser o filho do ThemeColor.
    */
	return (
		<ThemeColor.Provider value={{ theme, setTheme }}>
			{children}
		</ThemeColor.Provider>
	);
}

// prettier-ignore
function ShowMemo3() {
    const [name, setName] = useState('');
    const [adress, setAdress] = useState('');
    
    const {theme, setTheme} = useContext(ThemeColor);

    return (
        <fieldset 
            style={{
                borderRadius: '10px', 
                width: '500px', 
                height: '350px',
                backgroundColor: theme,
                color: theme === 'gray' ? 'white' : 'black'
            }}
        >
            <form>
                <h2>Interatividade </h2>
                <div style={{textAlign: 'left', padding: '4px'}}>
                    <label htmlFor="input-name"> Name: </label>
                    <input 
                        type="text" 
                        value={name}
                        name="input-name" 
                        id="input-name" 
                        onChange={(evt) => setName(evt.target.value)}
                        />
                </div>
                <div style={{textAlign: 'left', padding: '4px'}}>
                    <label htmlFor="input-adress">Adress: </label>
                    <input 
                        type="text" 
                        value={adress}
                        name="input-adress" 
                        id="input-adress" 
                        onChange={(evt) => setAdress(evt.target.value)}
                        />
                </div>
                <Greetin3 name={name} adress={adress}/>
            </form>
                <p>
                    <button onClick={() => 
                        setTheme(theme === 'gray' ? '#D2B48C' : 'gray')
                    }>
                        Switch theme
                    </button>
                </p>
        </fieldset>
    );
}

const Greetin3 = memo(function Greeting3({ name, adress }) {
	const [greeting, setGreeting] = useState("Hello");
	return (
		<div>
			<h3>
				{greeting}
				{name && ", "}
				{name}!
			</h3>
			<p>
				{adress && "Voce mora na Rua: "}
				<strong>{adress}</strong>
			</p>
			<GreetinSelector3 value={greeting} onChange={setGreeting} />
		</div>
	);
});

function GreetinSelector3({ value, onChange }) {
	return (
		<>
			<div style={{ textAlign: "left" }}>
				<label>
					<input
						type="radio"
						name="check-greeting"
						id="check-greeting"
						style={{ margin: "5px" }}
						checked={value === "Hello"}
						onChange={() => onChange("Hello")}
					/>
					Regular Greeting
				</label>
				<br></br>
				<label>
					<input
						type="radio"
						name="check-greeting"
						id="check-greeting"
						style={{ margin: "5px" }}
						checked={value === "Hello and welcome"}
						onChange={() => onChange("Hello and welcome")}
					/>
					Enthusiastic Greeting
				</label>
			</div>
		</>
	);
}
