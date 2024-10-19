#include <stdio.h>
#include <stdlib.h>

/*
			ex001:
			1) Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário.
			Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
			fim, imprima os dois vetores.
*/
int main () {

	// Variaveis
	
	int cont, vet[10];
	
	// Codigo
	
	// pedir os valores ao usuario;
	
	printf("\n");
	for (cont = 0; cont < 10; cont++)
	{
		printf("Digite o valor %d: ", cont);
		scanf("%d", &vet[cont]);	
	}
	
	// Mostrar os valores.
	printf("\nValores Impressos: ");
	printf("\n");
	for (cont = 0; cont < 10; cont++)
	{
		printf("%d ", vet[cont]);
	}
	
	// Quadrado do vetor
	
	printf("\n\nO quadrado dos valores impressos: ");
	printf("\n");
	for (cont = 0; cont < 10; cont++)
	{
		printf("%d ", vet[cont] * vet[cont]);
	}
	
	return 0;
}

