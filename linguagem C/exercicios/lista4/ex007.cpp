#include <stdio.h>
#include <stdlib.h>

/*
		ex007:
		FAZER DPS
		7) Faça um programa para ordenar um vetor com 100 números inteiros. Imprima o vetor antes e
		após a ordenação.
*/
int main () {

	// Variaveis
	
	int tam = 100;
	int c, troca, vetor[tam], maior;
	
	// Codigo
	
	printf("Antes da ordenação: \n");
	for (c = 0; c < tam; c++)
	{
		vetor[c] = rand() % 100;
		printf("%3d ", vetor[c]);
		
	}
	
	
	printf("\n");
	do
	{
		troca = 0;
		for (c = 0; c < tam - 1; c++)
		{
			if(vetor[c] > vetor[c +1])
			{
				maior = vetor[c];
				vetor[c] = vetor[c +1];
				vetor[c + 1] = maior;
				troca = 1;
			} 
		}
	} while (troca);
	
	printf("Depois da ordenação: \n");
	for (c = 0; c < tam; c++)
	{
		printf("%3d ", vetor[c]);	
	}
	
	
	return 0;
}
