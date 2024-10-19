#include <stdio.h>
#include <stdlib.h>

/*
		ex003:
		3) Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque
		o 1º elemento com o último, o 2ª com o penúltimo, ... até o 10ª com o 11º. Imprima o vetor N
		modificado. 
		
*/
int main () {

	// Variaveis
	
	int c, fim = 19, copia, vet[20];
	
	// Codigo
	
	// Imprimir o vetor[20]
	
	for (c = 0; c < 20; c++)
	{
		printf("Digite um valor: ");
		scanf("%d", &vet[c]);
	}
	
	printf("\nVetor original : \n");
	for (c = 0; c < 20; c++)
	{
		printf("%2d ", vet[c]);
	}
	
	
	for(c = 0; c < 10; c++)
	{
		copia = vet[c];
		vet[c] = vet[fim];
		vet[fim] = copia;
		fim--;
	}
	
	printf("\nVetor Modificado: : \n");
	for (c = 0; c < 20; c++)
	{
		printf("%2d ", vet[c]);
	}
	
	return 0;
} 
