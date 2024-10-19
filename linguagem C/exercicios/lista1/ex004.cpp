#include <stdio.h>

/* 
			Ex004
*/


int main () {
	
	// Variaveis
	
	int a, b, c;
	
	// Codigo
	
	printf("\n-----------T E S T E ----------------\n");
	
	// preciso que teste = teste1 (20) and teste1 = teste (10)
	
	
	printf("\nDigite um valor inteiro: ");
	scanf("%d", &a);
	
	printf("\nDigite outro valor inteiro: ");
	scanf("%d", &b);
	
	c = a;
	
	a = b;
	
	b = c;
	
	printf("\nTrocando os valores fica: %d, %d\n", a, b);
	
	
	return 0;
}
