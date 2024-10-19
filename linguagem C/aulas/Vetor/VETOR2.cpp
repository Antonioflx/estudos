#include <stdio.h>

/*
	Aula 102: Como alterar o conteudo de um vetor?
*/
int main () {

	// Variaveis
	int i;
	int num2[10];
	
	// Codigo
	
	for (i = 0; i < 5; i++)
	{
		printf("Digite o elemento da posicao [%d]: ",i);
		scanf("%d", &num2[i]);
	}
	
	printf("\nValores lidos do Vetor: ");
	for (i = 0; i < 5; i++)
	{	
		printf("%d, ", num2[i]);
	}
	
	printf("\n\nIremos MULTIPLICAR por [2] cada valor que voce digitou.");
	
	for (i = 0; i < 5; i++)
	{
		num2[i] *= 2;
	}
	
	
	printf("\n\nValores MULTIPLICADOS do Vetor: ");
	for (i = 0; i < 5; i++)
	{	
		printf("%d, ", num2[i]);
	}
	
	return 0;
}
