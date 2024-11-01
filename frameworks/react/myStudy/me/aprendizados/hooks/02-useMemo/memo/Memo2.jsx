//Mesmo quando um componente é memoizado, ele ainda será renderizado novamente quando um contexto que ele está usando mudar. Memoização só tem a ver com props que são passados ​​para o componente de seu pai.

import { useState, memo } from "react";

// prettier-ignore
export default function ShowMemo2() {
    const [name, setName] = useState('');
    const [adress, setAdress] = useState('');
    const [theme, setTheme] = useState('gray')

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
                <Greetin2 name={name} adress={adress}/>
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

const Greetin2 = memo(function Greeting2({ name, adress }) {
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
			<GreetinSelector2 value={greeting} onChange={setGreeting} />
		</div>
	);
});

function GreetinSelector2({ value, onChange }) {
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
