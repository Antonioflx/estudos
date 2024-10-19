#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Aula 135: Concatenando duas Strings com a função strcat()
		strcat(passar 2 strings)
		strcat(str1) Receber a concatenação, str2) A string que vai concantenar)
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	char palavras1[50] = {"Oi."};
	char palavras2[50] = {" Bom dia, meu lindo."};
	
	// Codigo
	strcat(palavras1, palavras2);
	
		
	printf("\n\t%s\n", palavras1);
	
	
	return 0;
} 
