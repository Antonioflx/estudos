#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
		ex009:
		NAO SEI
		9) Crie um programa que preencha uma matriz 5x10 com números inteiros. Em seguida faça:
		a) some cada uma das linhas armazenando o resultado em um vetor;
		b) some cada uma das colunas armazenando o resultado em um vetor;
		c) Imprima os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas.	
*/
int main () {

	// Variaveis
	int i, j,  mat[5][10], soma, somaLinha[5], somaColuna[10];
	
	// Codigo
	
	// Gerar n aleatorios
	srand(time(NULL));
	
	// Mostrar a matriz;
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 10; j++)
		{
			mat[i][j] = rand() % 15;
			printf("%2d ", mat[i][j]);
		}
		printf("\n");
	}
	
	// letra a
	for(i = 0; i < 5; i++)
	{
		soma = 0;
		for(j = 0; j < 10; j++)
		{
			soma += mat[i][j];
			
		}
		somaLinha[i] = soma;
	}
	
	// letra b
	for(j = 0; j < 10; j++)
	{
		soma = 0;
		for(i = 0; i < 5; i++)
		{
			soma += mat[i][j];
		}
		somaColuna[j] = soma;
	}
	
	
	
	// Vetor com a soma das Linhas.
	printf("\n\nVetor com a soma das linhas: \n");
	for(i = 0; i < 5; i++)
	{
		printf("Linha: %d:  %d\n", i, somaLinha[i]);
	}
	
	
	//Vetor com a soma das colunas.
	printf("\n\nVetor com a soma das colunas: \n");
	for(j = 0; j < 10; j++)
	{
		printf("Linha: %d:  %d\n", j, somaColuna[j]);
	}
	
}
