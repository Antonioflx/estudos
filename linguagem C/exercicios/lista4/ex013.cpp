#include <stdio.h>
#include <stdlib.h>

/*
		ex013:
		13) Faça um programa para calcular a transposta de uma matriz 5 x 4. Imprima as duas matrizes na
		tela.
*/
int main () {

	// Variaveis
	
	int i, j, mat[5][4];
	// Codigo
	
	
	printf("\n\n");
	for(i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			mat[i][j] = rand() % 10;
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	
	printf("\n\n");
	for(i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			//mat[i][j] = rand() % 10;
			printf("%d ", mat[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}
