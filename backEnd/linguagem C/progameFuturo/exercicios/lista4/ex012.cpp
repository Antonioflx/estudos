#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
			ex012:
			12) Faça um programa que imprima na tela a diagonal secundária de uma matriz 7 x 7.
*/
int main () {

	// Variaveis
	
	int tam = 7;
	int i, j, mat[tam][tam];
	
	// Codigo
	
	srand(time(NULL));
	// Ler os numeros e imprimir na tela
	printf("\n\n");
	for(i = 0; i < tam; i++)
	{
		for (j = 0; j < tam; j++)
		{
			mat[i][j] = rand() % 20;
			printf("%2d ", mat[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	// Diagonal Principal
	for(i = 0; i < tam; i++)
	{
		printf("%d ", mat[i][i]);
	}
	
	printf("\n\n");
	
	// Diagonal Secundaria
	for(i = 0; i < tam; i++)
	{
		printf("%d ", mat[i][tam - 1 - i]);
	}
	return 0;
}
