// Verificar se tem bobesponja como pokemon (nao tem)

fetch("https://pokeapi.co/api/v2/pokemon/spongebob")
	// vai retornar a promessa normalmente . -> Mostrando o status false na propriedade ok.
	.then((response) => console.log(response))
	.then((data) => console.log(data))
	.catch((error) => console.error(error));
