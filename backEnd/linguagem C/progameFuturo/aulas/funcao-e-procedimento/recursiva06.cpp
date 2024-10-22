#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*
	Aula 161: Faça uma função recursiva para calcular a soma
	de todos os valores de um vetor de inteiros.
		  0  1  2  3	
	vetor[1, 2, 3, 4]
	
*/

int soma(int vet[], int tam) {
	
	if(tam > 0)
		return vet[tam - 1] + soma(vet, tam - 1);
	else
		return 0;
}



int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Atribuir valores aleatórios.
//	srand(time(NULL));
	
	
	int num[10], i;
	
	printf("\nVAMOS SOMAR um VETOR:\n\n");
	
	for(i = 0; i < 10; i++)
		num[i] = rand() % 10;

	
	printf("VETOR: ");
	for(i = 0; i < 10; i++)
		printf(" [%d] ,", num[i]);
		
	
	printf("\nResultado: %d", soma(num, 10));
	
	return 0;
} 
