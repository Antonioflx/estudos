#include <stdio.h>

/* 
		ex009
	somar o valor de A até N
*/


int main () {

	// Variaveis 
	
	int num, a, somaA;
	
	// Codigo
	
	printf("\nDigite um numero inteiro maior que [0]: ");
	scanf("%d", &num);
	
	for (a = 1; a <= num; a++)
	{	
		while (num <= 0)
		{
			printf("\nValor INVALIDO");
			printf("\nDigite um numero inteiro maior que 0: ");
			scanf("%d", &num);	
		}
		somaA += a;
	}
	
	printf("\n\n%d", somaA);

	return 0;
}
