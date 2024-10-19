#include <stdio.h>

// Estrutura de Condiçao simples - If

int main () {

// Variaveis

	int a;
	
	printf("\nDigite um valor qualquer: ");
	scanf("%d", &a);
	
	printf("\nResultado logico: %d\n", a < 0);
	
	if (a < 0) 
	{
		printf("\n\tValor negativo!\n");
	} else if( a == 0) {
		printf("\n\tValor neutro!\n");	
	} else 

	printf("\n\tValor positivo!:\n");
	

	return 0;
}
