// Forma 1 de fazer.

/* 
fetch("https://pokeapi.co/api/v2/pokemon/spongebob")  // vai dar erro

fetch("https://pokeapi.co/api/v2/pokemon/pikachu")
	.then((response) => {
		if (!response.ok) {
			// throw -> lançar um erro de maneira explícita.
			// Ele vai interromper a execução do código no ponto em que é chamado e lança um erro.
			throw new Error("Could not fetch resource");
		}

		return response.json();
	})
	.then((data) => console.log(data.name))
	.catch((error) => console.error(error));
*/

// Forma 2 de fazer.

/*
    async -> define uma função assíncrona, o qual retorna uma Promise.


    async function minhaFuncao() {
        return "Hello, Mundo";
    }

    // chamar a função para retornar o valor

    minhaFuncao().then(valor => console.log(valor));
*/

/*
    try -> Usado para envolver a execução da requisição da Promise e outras operações que podem lançar erros.

    Se tudo funcionar corretamente, o código dentro de try será executado

    catch -> Executado somente se ocorrer um erro durante a execução de uma operação no try.

    Isso permite capturar e tratar o erro de maneira organizada.


    await -> Obter o valor diretamente da Promise.

    Usado para pausar a execução até que a Promise resolva, permitindo o acesso direto ao valor.
*/
fetchData();

async function fetchData() {
	try {
		const response = await fetch(
			"https://pokeapi.co/api/v2/pokemon/typhlosion"
		);

		// fazer a checkagem se a resposta está correta

		if (!response.ok) {
			throw new Error("Could not fetch resource");
		}
		const data = await response.json();
		console.log(data);
	} catch (error) {
		console.error(error);
	}
}
