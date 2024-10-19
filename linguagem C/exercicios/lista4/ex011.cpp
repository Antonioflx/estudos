#include <stdio.h>
#include <stdlib.h>

/*
		ex011:
		11) Faça um programa que imprima na tela a diagonal principal de uma matriz 5 x 5.
*/
int main () {

	// Variaveis
	
	int i, j, mat[5][5];
	
	// Codigo
	printf("\n\n");
	for(i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			mat[i][j] = rand() % 10;
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	for(i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (i == j)
			{
				printf("%d ", mat[i][j]);
			} 
			else 
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}

