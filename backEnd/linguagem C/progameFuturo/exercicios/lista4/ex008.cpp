#include <stdio.h>
#include <stdlib.h>

/*
		ex008:
		8) Faça um programa que calcule e imprima a soma de todos os elementos de uma matriz 5 x 7
*/
int main () {

	// Variaveis
	
	int l, c, mat[5][7], matSoma;
	
	// Codigo
	
	printf("\n\n");
	for (l = 0; l < 5; l++)
	{
		for (c = 0; c < 7; c++)
		{
			mat[l][c] = rand() % 50;
			printf("%2d ", mat[l][c]);
		}		

		printf("\n");
	}
	
	printf("\n\nSOMA da matriz: ");
	
	for(l = 0; l < 5; l++)
	{
		for (c = 0; c < 7; c++)
		{
			matSoma += mat[l][c];
			
		}
	}

	printf("%d", matSoma);
	return 0;
}
