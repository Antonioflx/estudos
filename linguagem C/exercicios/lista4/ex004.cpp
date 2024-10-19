#include <stdio.h>
#include <stdlib.h>

/*
		ex004:
		4) Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos
		diferentes. O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas
		vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade
		vendida de cada objeto deve ficar em outro vetor, mas na mesma posição. Crie um programa que
		receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois,
		determine e mostre:
		
		a) A quantidade vendida, valor unitário e valor total de cada objeto. Ao final, deverão ser mostrados
		o valor total das vendas e o valor da comissão que será paga ao vendedor.
		
		b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos
		empatados)
*/
int main () {

	// Variaveis
	
	
	int c,quant;
	float sal = 1100, acre = 5, valor_objeto[10], valorTotal;
	
	// Codigo
	
	printf("\n");
	for (c = 0; c < 10; c++)
	{
		printf("Valor do objeto %d: ", c);
		scanf("%f", &valor_objeto[c]);
	}
	
	printf("\n\nQuantos produtos foram vendidos?");
	printf("\nINFORME: ");
	scanf("%d", &quant);
	
	printf("\nQUANTIDADE: %d", quant);
	for (c = 0; c < quant; c++)
	{
		printf("\nValores: %.2f", valor_objeto[c]); 
		valorTotal += valor_objeto[c];
	}
	sal = sal + acre/100 * valorTotal;
	printf("\nValor TOTAL: %.2f", valorTotal);
	
	printf("\n\nCOMISSAO: %.2f", sal);
	return 0;
}
