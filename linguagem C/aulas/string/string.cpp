#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
		Aula 128: O que é uma string?

*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	char palavras[] = {"Oi. Vamos aprender a progamar com a linguagem C?"};
	
	// Codigo
	
	printf("%s", palavras);
	return 0;
} 
