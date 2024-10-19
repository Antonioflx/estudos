#include <stdio.h>

// 						Aula 67: Estrutura de repeticao do {} While

int main () {

	// Variaveis
	
	int valor, valor2;
	
	printf("\nDigite um valor inteiro positivo: ");
	scanf("%d", &valor);
	
	while (valor <=0) 
	{
		printf("Valor invalido! Digite um valor inteiro positivo: ");
		scanf("%d", &valor);	
	}
	
	printf("\nValor lido: %d\n\n", valor);
	
	do 
	{
		printf("Digite um valor maior que zero: ");
		scanf("%d", &valor2);	
	} while (valor2 <= 0);
	
	return 0;
}
