#include <stdio.h>
#include <stdlib.h>

/*
		ex010:
		10) Dadas duas matrizes A e B 3 x 3, faça um programa para calcular a soma das matrizes e salvar
		em uma matriz C. Imprima as três matrizes.
*/
int main () {

	// Variaveis
	
	int i,j, matA[3][3], matB[3][3], matSoma[3][3];
	
	// Codigo
	
	// Matriz A
	printf("\nMatriz A: \n");
	for(i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			matA[i][j] = rand() % 25;
			printf("%d ", matA[i][j]);
		}
		printf("\n");
	}
	
	// Matriz B
	printf("\nMatriz B: \n");
	for(i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			matB[i][j] = rand() % 10;
			printf("%d ", matB[i][j]);
		}
		printf("\n");
	}
	
	printf("\nSOMA matA + matB:\n\n");
	for(i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			matSoma[i][j] = matA[i][j] + matB[i][j];
			printf("%d ", matSoma[i][j]);
		}
		printf("\n");
	}
	return 0;
}
