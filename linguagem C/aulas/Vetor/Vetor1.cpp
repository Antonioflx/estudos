#include <stdio.h>

/*
	Aula 101: Como preencher um vetor por meio do teclado?
*/
int main () {

	// Variaveis
	int i;
	int num2[10];
	
	// Codigo
	
	for (i = 0; i < 5; i++)
	{
		printf("Digite o elemnto da posicao [%d]: ",i);
		scanf("%d", &num2[i]);
	}
	
	printf("\n\nValores lidos do Vetor: ");
	for (i = 0; i < 5; i++)
	{	
		printf("%d, ", num2[i]);
	}
	
	return 0;
}
