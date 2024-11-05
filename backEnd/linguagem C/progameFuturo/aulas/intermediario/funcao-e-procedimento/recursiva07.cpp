#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*
	Aula 162: Desenvolva uma função recursiva que encontre e retorne
	o maior elemento de um vetor de inteiro de tamanho N
	
	if(vet[0] < vet[1])
		return
	
*/


// Descobrir o maior numero do vet.
int maior(int vet[], int tam) {
	
// Descobrir o maior numero do vetor.
	if(tam > 0) {
		
		if(vet[tam - 1] > maior(vet, tam - 1))
			return vet[tam - 1];
		else
			return maior(vet, tam -1);
	}
	else
		return vet[0];
	
// Descobrir o menor numero do vetor.	
//	if(tam > 0) {
//		
//		if(vet[tam - 1] < maior(vet, tam - 1))
//			return vet[tam - 1];
//		else
//			return maior(vet, tam -1);
//	}
//	else
//		return vet[0];

}



int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Atribuir valores aleatórios.
	srand(time(NULL));
	
	
	int num[10], i;
	
	for(i = 0; i < 10; i++)
		num[i] = rand() % 30;

	
	printf("\n\nVETOR:\n");
	for(i = 0; i < 10; i++)
		printf(" [%d] ,", num[i]);
		
	
	printf("\n\nMAIOR: %d", maior(num, 10));

	return 0;
} 
