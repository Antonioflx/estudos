#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*
	Aula 163: Dado um vetor de inteiros e o seu numero de elementos,
	inverta a posição dos seus elementos usando recursão.
	
	vet[0] -> vet[9]  
	vet[1] -> vet[8] 1) +1 ; 2) -1
	vet[2] -> vet[7] 1) +2 ; 2) -2;
	vet[3] -> vet[6] 1) +3 ; 2) -3;
	vet[4] -> vet[5] 1) +4 ; 2) -4;
		return
	
*/

void vetInvertido(int vet[], int ini, int fim){
	
	int aux;
	if(ini < fim) {
		aux = vet[ini];
		vet[ini] = vet[fim];
		vet[fim] = aux;
		vetInvertido(vet, ini + 1, fim - 1);
	}
}

void imprimir(int vet[], int tam) {
	
	if(tam > 1) {
		imprimir(vet, tam - 1);
		printf(" [%d] ,", vet[tam - 1]);
	} 
	else
		printf(" [%d] ,", vet[tam - 1]);
		
	
}



int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Atribuir valores aleatórios.
	srand(time(NULL));
	
	
	int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	

	printf("\nVETOR: \n");
	imprimir(num, 10);
		
	
	printf("\n\nVETOR MODIFICADO:\n");
	vetInvertido(num, 0, 9);
	imprimir(num, 10);
	return 0;
} 
