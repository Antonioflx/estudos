#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
		Aula 129: Lendo uma string com a função scanf()
		sacanf("%80[^\n]", str);

*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	char palavras[30];
	int i;
	
	
	
	
	// Codigo
	
	printf("\nDigite o seu nome completo: ");
	scanf("%30[^\n]", palavras);
	
	
	
	printf("%s", palavras);
	
	return 0;
} 
