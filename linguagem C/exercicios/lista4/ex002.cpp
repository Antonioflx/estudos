#include <stdio.h>
#include <stdlib.h>

/*
		ex002:
		2) Faça um programa que some o conteúdo de dois vetores de tamanho 25 e armazene o resultado
		em um terceiro vetor. Imprima os três vetores na tela.
*/
int main () {

	// Variaveis
	
	int cont, vet1[25], vet2[25], vetSoma[25];
	
	// Codigo
	
	printf("\n\nValores do PRIMEIRO vetor: \n");
	for (cont = 0; cont < 25; cont++)
	{
		vet1[cont] = rand() % 50;
		printf("%2d ", vet1[cont]);
		if (cont != 0 && cont % 5 == 0 )
		{
			printf("\n");
		}
	}
	
	printf("\n\nValores do SEGUNDO vetor: \n");
	for (cont = 0; cont < 25; cont++)
	{
		vet2[cont] = rand() % 25;
		printf("%2d ", vet2[cont]);
		if (cont != 0 && cont % 5 == 0 )
		{
			printf("\n");
		}
	}
	
	printf("\n\nSoma dos VETORES: \n");
	for (cont = 0; cont < 25; cont++)
	{
		vetSoma[cont] = vet1[cont] + vet2[cont];
		printf("%2d ", vetSoma[cont]);
		if (cont != 0 && cont % 5 == 0 )
		{
			printf("\n");
		}
	}
	
	return 0;
}
