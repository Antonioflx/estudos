#include <stdio.h>

// 						Aula 67: Estrutura de repeticao While

int main () {

	// Variaveis
	
	int valor;
	
	printf("\nDigite um valor inteiro positivo: ");
	scanf("%d", &valor);
	
	while (valor <=0) 
	{
		printf("Valor invalido! Digite um valor inteiro positivo: ");
		scanf("%d", &valor);	
	}
	
	printf("\nValor lido: %d\n\n", valor);
}
