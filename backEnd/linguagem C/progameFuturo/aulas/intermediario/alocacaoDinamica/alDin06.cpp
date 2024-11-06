#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/*
		Aula 202: Como alocar uma matriz dinâmica?
		
	vetor de vetores -> int* -> 10	27	32
						int* ->	11	75	49
						int* ->	43	82	10
						int* -> 12	47	62
						
		VETOR = *vet;
		MATRIZ = **mat;
			
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	srand(time(NULL));
	
	int **mat, i, j;
	
	// alocar a matriz, 4 * 4 ponteiros para inteiro -> 8 bytes.
	mat = (int**)malloc(4 * sizeof(int*));
	
	// percorrer a matriz em cada coluna para alocar a memória
	
	for(i = 0; i < 4; i ++)
		mat[i] = (int*)malloc(3 * sizeof(int));
		
	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++)
			mat[i][j] = rand() % 10;
	}
	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++)
			printf("%2d ", mat[i][j]);
		printf("\n");
	}
	return 0;
} 
