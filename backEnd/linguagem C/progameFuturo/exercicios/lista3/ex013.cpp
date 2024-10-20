#include <stdio.h>

/*
			ex:013
		Numero primo
*/

int main () {
	
	// Variaveis
	
	int valor,cont, primo;
	
	
	// Codigo
	
	// Ler o numero
	printf("\n\nDigite um numero inteiro maior que 2: ");
	scanf("%d", &valor);
	
	// Caso o usuario digite um valor INVALIDO.
	while (valor <= 2)
	{
		printf("\nValor INVALIDO!");
		printf("\n\nDigite um numero inteiro maior que 2: ");
		scanf("%d", &valor);
		
	}	
	
	for (cont = 0; cont <= valor; cont++)
	{
		primo = 
	}
	
	if (valor % cont == 2)
		{
			printf("O numero digitado: %d -> Nao e PRIMO", valor);
		} 
		else 
		{
			printf("O numero digitado: %d --> e PRIMO", valor);
		}
	
	//Fazer a condicao do n primo
	
	
	return 0;
}
