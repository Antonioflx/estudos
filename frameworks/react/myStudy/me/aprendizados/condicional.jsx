// Geralmente sempre vamos utilizar o teste de condição

// Operador ternário -> condicao ? true : false
// if
// && ||

// Além disso, utilizaremos map -> para selecionar o objeto que queremos
// filter tbm -> filtrar.

// Exemplo

// criar um objeto
const ALIMENTOS = [
	{ product: "Fruits", name: "Apple", id: 1 },
	{ product: "Drink", name: "Orange Juice", id: 2 },
];

function Condicional({ alimento }) {
	// criar um var para fazer o teste se o produto é uma fruta ou drink

	// prettier-ignore
	const produto =
		alimento.product === "Fruits"
	        ? <span style={{color: 'darkgreen'}}> <strong style={{color: "black"}}> Fruta: </strong> {alimento.name}</span>
	        : <span style={{color: 'darkorange'}}> <strong style={{color: "black"}}> Drink: </strong> {alimento.name} </span>;

	// Key -> é uma palavra reservada no React -> Para facilitar a renderização.
	return (
		<div>
			<ul>
				<li key={alimento.id}> {produto} </li>
			</ul>
		</div>
	);
}

export default function ShowCondicional() {
	// Preciso criar um map -> para selecionar os valores que desejo
	// Preciso pensar melhor, lembrar que já estou no avançado. Utilizar os methodos avançados.
	return (
		<div>
			<fieldset>
				{ALIMENTOS.map((alimento) => (
					<Condicional alimento={alimento} key={alimento.id} />
				))}
			</fieldset>
		</div>
	);
}
