// memo -> Obtém uma versão memorizada do Componente, essa versão memorizada geralmente não será renderizada novamente quando seu componente pai for renderizado novamente, desde que seus props não tenham mudado.

//  Mas o React ainda pode renderizá-lo novamente: a memorização é uma otimização de desempenho, não uma garantia.

/*
Ex:
-> const SomeComponent = memo(1. Parametro: Componente que queremos memorizar, 2. Opcional -> Uma função que aceite dois argumentos, os propps anteriores do componente e seus novos props. Retornará true se os Pantigo = Pnovo, false se não.)
*/

// o memo -> ignora a nova renderização quando os adereços não são alterados

// Ex1:

import { useState, memo } from "react";

// prettier-ignore
export default function ShowMemo() {
    const [name, setName] = useState('');
    const [adress, setAdress] = useState('');
    return (
        <fieldset style={{borderRadius: '10px'}}>
            <form>
                <div>
                    <label htmlFor="input-name"> Name: </label>
                    <input 
                        type="text" 
                        value={name}
                        name="input-name" 
                        id="input-name" 
                        onChange={(evt) => setName(evt.target.value)}
                    />
                </div>
                <div>
                    <label htmlFor="input-adress">Adress: </label>
                    <input 
                        type="text" 
                        value={adress}
                        name="input-adress" 
                        id="input-adress" 
                        onChange={(evt) => setAdress(evt.target.value)}
                    />
                </div>
                <Greetin name={name} adress={adress}/>

            </form>
        </fieldset>
    );
}

const Greetin = memo(function Greeting({ name, adress }) {
	const [greeting, setGreeting] = useState("Hello");
	return (
		<div>
			<h3 style={{ textAlign: "left" }}>
				{greeting}
				{name && ", "}
				{name}!
			</h3>
			<p>
				{adress && "Voce mora na Rua: "}
				<strong>{adress}</strong>
			</p>
			<GreetinSelector value={greeting} onChange={setGreeting} />
		</div>
	);
});

function GreetinSelector({ value, onChange }) {
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
