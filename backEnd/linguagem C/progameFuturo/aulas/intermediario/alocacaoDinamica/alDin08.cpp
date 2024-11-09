#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/*
		Aula 204: Como liberar a memória de uma matriz dinâmica?
		
		// com vetor.
		free(nome_da_variavel); // com o vetor.
		
		// com matriz
		
		// 1) liberar cada posição do vetor que apontar para outro vetor (linha vetor) da matriz
		// 2) para dps liberar o primeiro vetor que possue o ponteiro para os outros ponteiros 
		free(nome_da_variavel);
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
	
	for(i = 0; i < 5; i++)
		free(*(mat + i));
	free(mat); 
	return 0;
} 
