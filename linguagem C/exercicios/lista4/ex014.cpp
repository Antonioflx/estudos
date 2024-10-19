#include <stdio.h>
#include <stdlib.h>

/*
		ex014:
		14) Faça um programa que imprima na tela apenas os valores abaixo da diagonal principal de uma
		matriz 4 x 4.
*/
int main () {

	// Variaveis
	int tam = 4;
	int i, j, mat[tam][tam];
	
	// Codigo
	
	// Codigo
	printf("\n\n");
	for(i = 0; i < tam; i++)
	{
		for (j = 0; j < tam; j++)
		{
			mat[i][j] = rand() % 10;
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	for(i = 0; i < tam; i++)
	{
		for (j = 0; j < tam; j++)
		{
			if (i > j)
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

