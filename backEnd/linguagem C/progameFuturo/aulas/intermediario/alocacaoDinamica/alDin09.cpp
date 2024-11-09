#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/*
		Aula 205: Curiosidade entre as funções malloc e calloc
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	int i, *vet1, *vet2;
	
	vet1 = (int*)malloc(10 * sizeof(int));
	vet2 = (int*)calloc(10, sizeof(int));
	
	
	printf("\nCom malloc:\n"); // Pode existir lixo de memória.
	for(i = 0; i < 10; i++)
		printf("%d ", *(vet1 + i));
		
	printf("\n\nCom calloc:\n"); // Limpa as regiões de memória com 0.
	for(i = 0; i < 10; i++)
		printf("%d ", *(vet2 + i));
	return 0;
} 
