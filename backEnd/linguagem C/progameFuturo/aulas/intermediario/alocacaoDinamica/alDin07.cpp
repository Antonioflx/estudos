#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/*
		Aula 203: É possível percorrer uma matriz dinâmica sem colchetes?
				
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
	mat = (int**)malloc(5 * sizeof(int*));
	
	// percorrer a matriz em cada coluna para alocar a memória
	
	for(i = 0; i < 5; i ++)
		*(mat + i) = (int*)malloc(5 * sizeof(int));
		
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++)
			*(*(mat + i) + j) = rand() % 10 + 1;
//			mat[i][j] = rand() % 10;
	}
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++)
			printf("%2d ", *(*(mat + i) + j));
		printf("\n");
	}
	return 0;
} 
