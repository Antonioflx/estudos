#include <stdio.h>
#include <stdlib.h>

/*
		Aula 106: Como criar uma matriz?
*/
int main () {

	// Variaveis
	
	// Vetor -> int vet[10];
	
	// Matriz
	int mat1[2][2] = {1,2,3,4};
	
	int l, c;
	// Codigo
	
	for (l = 0; l < 2; l++)
	{
		for (c = 0; c <2; c++)
		{
			printf("%d", l);
			printf("\n");
			
		}
	}
	
	return 0;
}
