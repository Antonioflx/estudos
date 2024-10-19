#include <stdio.h>
#include <stdlib.h>

/*
		Aula 108: Como inserir um valor em uma matriz?
*/
int main () {

	// Variaveis

	int l,c, cont, mat1[3][3], mat2[3][3], mat[3][3];
	
	
	// Codigo
	
	for (l = 0; l < 3; l++)
	{
		for (c = 0; c <3; c++)
		{
			printf("Digite o valor %d , %d: ", l,c);
			scanf("%d", &mat1[l][c]);
		}	
	}
	
	printf("\n");
	for (l = 0; l < 3; l++)
	{
		for (c = 0; c <3; c++)
		{
			printf("%d ", mat1[l][c]);
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}
