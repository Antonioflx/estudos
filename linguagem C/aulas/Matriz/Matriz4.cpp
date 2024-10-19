#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
		Aula 110: Como gerar numeros aleatorios para preencher uma matriz?
*/
int main () {

	// Variaveis

	int l,c, cont, mat1[3][3];
	
	
	// Codigo
	
	srand(time(NULL));
	
	for (l = 0; l < 3; l++)
	{
		for (c = 0; c <3; c++)
		{
			mat1[l][c] = rand();
		}	
	}
	
	printf("\n");
	for (l = 0; l < 3; l++)
	{
		for (c = 0; c <3; c++)
		{
			printf("%5d ", mat1[l][c]);
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}
