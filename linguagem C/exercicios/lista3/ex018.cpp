#include <stdio.h>

/*
		18) Foi feita uma pesquisa entre os habitantes de uma região e foram coletados os dados de idade,
		sexo (M/F) e salário de X pessoas (x deve ser informado pelo usuário). Faça um algoritmo que
		informe:
		a) a média de salário do grupo;
		b) a maior e a menor idade do grupo;
		c) a quantidade de mulheres com salário até R$2000,00.
*/
int main () {
	
	
	// Variaveis
	
	char sexo;
	int habitantes, idade, cont, mul_salario_2000 = 0, maior= 0, menor= 0;
	float salario, somaSal, mediaSal;
	
	// Codigo
	
	// Descobrir o Numero de Habitantes
	
	printf("\nInforme o NUMERO de Habitantes: ");
	scanf("%d", &habitantes);
	
	// Descobrir as informs de cada habitante
	for (cont = 1; cont <= habitantes; cont++)
	{
		printf("\n\nHABITANTE [%d]", cont);
		printf("\nSEXO -> [M] ou [F]: ");
		scanf(" %c", &sexo);
		
		printf("SALARIO: ");
		scanf("%f", &salario);
		somaSal += salario;
		
		mediaSal = somaSal / habitantes;
		
		// descobrir quantas mulheres possuem o salario ate 2000;
		if (sexo == 'F' || sexo =='f' && salario <= 2000)
		{
			mul_salario_2000 ++;
		}
		
		printf("IDADE: ");
		scanf("%d", &idade);
		
		// descobrir a maior idade e menor idade do grupo.
		
		if (cont == 1)
		{
			maior = idade;
			menor = idade;
		}
		else if (idade > maior) 
		{
			maior = idade;
		} 
		else 
		{
			menor = idade; 
		} 
			
			
	}
	
	printf("\n\nHABITANTES: %d", habitantes);
	printf("\nMEDIA salarial: %.2f", mediaSal);
	printf("\nMULHERES que possuem salario ate 2000: %d", mul_salario_2000);
	printf("\nMAIOR idade: %d", maior);
	printf("\nMENOR idade: %d", menor);
	return 0;
}
