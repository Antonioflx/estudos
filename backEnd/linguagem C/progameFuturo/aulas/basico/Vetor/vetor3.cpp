#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
	Aula 103: Gerar numeros aleatorios para preencher o vetor;
	FUNCAO: rand e srand
*/
int main () {

	// Variaveis
	int i;
	int num2[10];
	
	// Codigo
	
	srand(time(NULL)); // colocar a sementinha;
	
	for (i = 0; i < 5; i++)
	{
		num2[i] = 1 + rand() % 99; // rand -> gerar numeros aleatorios; % --> Resto da divisao, sera gerado entre 1 e 99 numeros aleatorios
	}
	
	printf("\nValores aleatorios do Vetor: ");
	for (i = 0; i < 5; i++)
	{	
		printf("%d, ", num2[i]);
	}
	
	
	return 0;
}
