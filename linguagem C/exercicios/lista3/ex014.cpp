#include <stdio.h>

/*
		ex014:
	Calcular a média de salário de uma empresa.
	E dizer o Maior salario e Menor
*/


int main () {

	// Variaveis
	
	int func, cont, oi;
	
	float salario, soma, media, maior, menor, teste1, teste2;

	// Codigo
	
	// Pedir o N de funcionarios da empresa.
	
	printf("\nInforme o numero de FUNCIONARIO na empresa: ");
	scanf("%d", &func);
	
	// Descobrir o salario de cada um e dizer a media
	printf("\nDigite o valor do salario de cada FUNCIONARIO\n");
	for (cont = 1; cont <= func; cont++)
	{
		printf("\tFUNCIONARIO [%d]: ", cont);
		scanf("%f", &salario);
		soma += salario;
		media = soma/func;
		
		
		//Descobrir qual salario e maior ou menor
		
		if(cont == 1)
		{
			menor = salario;
			maior = salario;
		} 
		
		if (maior < salario)
		{
			maior = salario;
		}
		
		if (menor > salario)
		{
			menor = salario;
		} 
		
			
	}
	
	
	printf("\n\nA media do salario e de: %.2f", media);
	printf("\nMAIOR salario: %.2f", maior);
	printf("\nMENOR salario: %.2f", menor);
	return 0;
}
