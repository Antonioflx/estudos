#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Aula 137: Copiando uma String com a função strcpy()
		strcpy(1 parametro: Onde eu quero salvar a copia da string (destino)
				2 parametro: A string que eu quero copiar (origem)
		
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	char palavras1[50] = {"bola"};
	char palavras2[50] = {"abacate"};
	
	// Codigo
	printf("\nAntes de copiar:\nPalavra 1: %s\nPalavra 2: %s\n", palavras1, palavras2);
	
	strcpy(palavras2, palavras1);
	
	printf("\nDepois de copiar:\nPalavra 1: %s\nPalavra 2: %s\n", palavras1, palavras2);
	
	
	return 0;
} 
