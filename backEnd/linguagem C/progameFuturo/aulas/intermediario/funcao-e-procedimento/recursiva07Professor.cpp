#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*
	Aula 162: Desenvolva uma função recursiva que encontre o maior
	elemento de um vetor de inteiro de tamanho N
	
	if(vet[0] < vet[1])
		return
	
*/

int maior(int vet[], int tam, int indice) {
	
	// Descobrir o maior numero.
	if(tam > 0) {
		if(vet[tam - 1] > vet[indice])
			return maior(vet, tam - 1, tam - 1);
		else
			return maior(vet, tam - 1, indice);
	}
	else
		return vet[indice];

	// Descobrir o menor numero
//	if(tam > 0) {
//		if(vet[tam - 1] < vet[indice])
//			return maior(vet, tam - 1, tam - 1);
//		else
//			return maior(vet, tam - 1, indice);
//	}
//	else
//		return vet[indice];
}




int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Atribuir valores aleatórios.
	srand(time(NULL));
	
	
	int num[10], i;
	
	for(i = 0; i < 10; i++)
		num[i] = rand() % 30 + 1;

	
	printf("\n\nVETOR:\n");
	for(i = 0; i < 10; i++)
		printf(" [%d] ,", num[i]);
		
	
	printf("\n\nMaior: %d", maior(num, 10, 0));
	return 0;
} 
