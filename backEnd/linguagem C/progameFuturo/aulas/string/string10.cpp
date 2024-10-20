#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Aula 138: Procurando caracteres em uma String com as funções strchr e srtrchr
		strchr() -> Retorna a primeira ocorrencia
		strrchr() -> retorna a ultima ocorencia
		* antes da variavel armazena um ponteiro
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	char palavra[50] = {"abacate"};
	char *letra; // Armarzenar um ponteiro.
	// Codigo
	
	letra = strrchr(palavra, 'a');
	
	printf("\n%c\n", *letra);
	
	// Aritmetica de ponteiro
	printf("\n%c\n", *(letra + 1)); 
	printf("\n%c\n", *(letra + 2)); 
	return 0;
} 
