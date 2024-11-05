#include <stdio.h>
#include <stdlib.h>

/*
		Aula 108: Como imprimir uma matriz?
*/
int main () {

	// Variaveis

	int l,c, mat1[2][2] = {1,2,3,4};
	char mat5[2][3] = {'a', 'b', 'c', 'd', 'e', 'f'};
	
	// Codigo
	
	for (l = 0; l < 2; l++)
	{
		for (c = 0; c <2; c++)
		{
			printf("%d ", mat1[l][c]);
		}
		printf("\n");
	}
	printf("\n");
	
	for (l = 0; l < 2; l++)
	{
		for (c = 0; c <3; c++)
		{
			printf("%c ", mat5[l][c]);
		}
		printf("\n");
	}
	return 0;
}
