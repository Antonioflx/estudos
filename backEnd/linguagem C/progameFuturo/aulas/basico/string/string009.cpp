#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Aula 136: Como compara duas Strings cokm a função strcmp()
		-1 - > a str1 for menor que a str2
		0 -> as string sao iguais
		1 -> as str1 for maior que a str2
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	char palavras1[50] = {"Oi."};
	char palavras2[50] = {" Bom dia, meu lindo."};
	
	// Codigo
	
		
	printf("\n\nResultado: %d\n\n", strcmp(palavras1, palavras2));
	
	
	return 0;
} 
