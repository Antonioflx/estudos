#include <stdio.h>
#include <stdlib.h>

/*
		Aula 109: Como alterar o conteudo de uma matriz?
*/
int main () {

	// Variaveis

	int l,c, cont, mat1[3][3], mat2[3][3], matS[3][3];
	
	
	// Codigo
	
	// Matriz 1
	printf("\n\nPrimeira Matriz: \n\n");
	for (l = 0; l < 3; l++)
	{
		for (c = 0; c <3; c++)
		{
			printf("Digite o valor %d , %d: ", l,c);
			scanf("%d", &mat1[l][c]);
		}	
	}
	
	
	// Matriz 2
	
	printf("\n\nSegunda Matriz: \n\n");
	for (l = 0; l < 3; l++)
	{
		for (c = 0; c <3; c++)
		{
			printf("Digite o valor %d , %d: ", l,c);
			scanf("%d", &mat2[l][c]);
		}	
	}
	
	// Matriz 3
	
	for (l = 0; l < 3; l++)
	{
		for (c = 0; c <3; c++)
		{
			matS[l][c] = mat1[l][c] + mat2[l][c];
		}	
	}
	
	
	printf("\n\nSoma das Matrizes: ");
	printf("\n");
	for (l = 0; l < 3; l++)
	{
		for (c = 0; c <3; c++)
		{
			printf("%2d ", matS[l][c]);
		}
		printf("\n");
	}
	printf("\n");

	
	return 0;
}
