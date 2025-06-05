// Fazer a verificação se a promessa.ok é verdadeira ou não.
/*
    throw -> lançar um erro de maneira explícita.
    // Ele vai interromper a execução do código no ponto em que é chamado e lança um erro.
*/

// retornar o nome normalmente.
fetch("https://pokeapi.co/api/v2/pokemon/pikachu")
	.then((response) => {
		if (!response.ok) {
			throw new Error("Could not fetch resource");
		}

		return response.json();
	})
	.then((data) => console.log(data.name))
	.catch((error) => console.error(error));

// Vai dar erro
fetch("https://pokeapi.co/api/v2/pokemon/spongebob")
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
