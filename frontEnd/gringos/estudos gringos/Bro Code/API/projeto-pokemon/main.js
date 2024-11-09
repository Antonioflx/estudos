// evento para o botão
const btnFetch = document.querySelector("#btn-fetch");

async function fetchData() {
	const pokemonName = document
		.querySelector("#inp-name")
		.value.toLowerCase();

	const imagem = document.querySelector("#pokemonSprite");

	try {
		const response = await fetch(
			`https://pokeapi.co/api/v2/pokemon/${pokemonName}`
		);

		if (!response.ok) {
			throw new Error("Could not fetch resource");
		}

		// data.sprites.front_default
		const data = await response.json();
		const pokemonSprite = data.sprites.front_default;
		imagem.setAttribute("src", pokemonSprite);
		imagem.style.display = "block";
	} catch (error) {
		console.log(error);
	}
}

btnFetch.addEventListener("click", fetchData);
