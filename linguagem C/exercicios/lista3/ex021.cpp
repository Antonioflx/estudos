#include <stdio.h>

/*
	21) Escreva um programa que gere a saída abaixo (10 linhas, 20 * por linha).
	Restrições:
	 A instrução “printf” pode ser utilizada no máximo 2 vezes;
	 O \n para saltar linha pode ser utilizado no máximo 1 vez.
*/
int main () {
	
	
	// Variaveis
	
	
	int cont;
	
	// Codigo
	printf("\n");
	for (cont = 1; cont <= 200; cont++)
	{
		printf("*");
		if (cont % 20 == 0) 
		{
			printf("\n");
		}
	
	}
	return 0;
}
