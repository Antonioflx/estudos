#include <stdio.h>
#include <stdlib.h>

/*
		ex005:
		5) Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um
		vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o
		mês por extenso: janeiro, fevereiro …). Desconsidere empates
*/
int main () {

	// Variaveis
	
	int c, maiorM, menorM; 
	float temp[12], maior, menor;
	
	// Codigo
	
	printf("\nInforme a temperatura Media: \n");

	
	
	for(c = 0; c < 12; c++)
	{
		printf("MES [%d]: ", c);
		scanf("%f", &temp[c]);
		
		// Descobrir o maior e menor
		if (c == 0)
		{
			maior = temp[c];
			menor = temp[c];
			maiorM = 0;
			menorM = 0;
		} 
		
		if (maior < temp[c])
		{
			maior = temp[c];
			maiorM = c;
		}
		
		if (menor > temp[c])
		{
			menor = temp[c];
			menorM = c;
		}	
	}
	
	// Maior mes
	switch (maiorM)
	{
		case 0 : printf("\nMES Janeiro "); break;
		case 1 : printf("\nMES Fevereiro "); break;
		case 2 : printf("\nMES Marco "); break;
		case 3 : printf("\nMES Abril "); break;
		case 4 : printf("\nMES Maio "); break;
		case 5 : printf("\nMES Junho "); break;
		case 6 : printf("\nMES Julho "); break;
		case 7 : printf("\nMES Agosto "); break;
		case 8 : printf("\nMES Setembro "); break;
		case 9 : printf("\nMES Outubro "); break;
		case 10 : printf("\nMES Novembro "); break;
		case 11 : printf("\nMES Dezembro "); break;
	}
	printf("possui a MAIOR temperatura media do ano: %.2f", maior);
	
	// Menor mes
	switch (menorM)
	{
		case 0 : printf("\nMES Janeiro "); break;
		case 1 : printf("\nMES Fevereiro "); break;
		case 2 : printf("\nMES Marco "); break;
		case 3 : printf("\nMES Abril "); break;
		case 4 : printf("\nMES Maio "); break;
		case 5 : printf("\nMES Junho "); break;
		case 6 : printf("\nMES Julho "); break;
		case 7 : printf("\nMES Agosto "); break;
		case 8 : printf("\nMES Setembro "); break;
		case 9 : printf("\nMES Outubro "); break;
		case 10 : printf("\nMES Novembro "); break;
		case 11 : printf("\nMES Dezembro "); break;
	}
	printf("possui a MENOR temperatura media do ano: %.2f", menor);
			
	
	return 0;
	
}

