#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Aula 139: Lozalizando uma substring com a função strstr()
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
