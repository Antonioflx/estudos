/*
    fetch() = uma funçao usada para requisitar HTPPS para buscar recursos
        (JSON style data, images, files);

        Ele simplifica a busca assíncrona de dados e usa para interagir com 
        APIs para recuperar e enviar dados de forma assíncrona pela web.

        Ele tem 2 parametros:
            1) Uma URL
            2) Objeto -> {options}
                Ex: 
                    1) {method: "GET"} -> [Padrão] -> pegar recursos
                    2) {method: "POST"} ->  Enviar alguns dados
                    3) {method: "PUT"} -> Substituir alguns dados 
                    4) {method: "DELETE"} -> Deletar alguns dados 


        Promise:
            É uma estrutura usada para lidar com operações assíncronas,
            como requisições a uma API, leitura de arquivos, ou operações 
            que demoram para serem concluídas. 
            
            Essa estrutura pode estar disponível agora, no futuro ou nunca.

        Methodos:

        1) then() -> É chamado quando a Promise é resolvida com sucesso.

        2) catch() -> É usado para tratar erros caso a Promise seja rejeitada.
*/

/*
    HTTP response status code -> Pesquisar mais.

    1. Informational responses (100 - 199)
    2. Sucessful responses (200 - 299)
    3. Redirection messages (300 - 399)
    2. Client error responses (400 - 499)
    2. Server error responses (500 - 99)

*/

fetch("https://pokeapi.co/api/v2/pokemon/pikachu")
	.then((response) => response.json()) // converter para json
	// .then((data) => console.log(data)) pegar todos os dados
	.then((data) => console.log(data.name)) // pegar apenas o nome.
	.catch((error) => console.error(error));
