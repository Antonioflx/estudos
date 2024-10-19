#include <stdio.h>

/*
		16) Faça um programa para encontrar o menor número inteiro que seja divisível por todos os
		números inteiros entre 1 e 10.

*/

int main () {
	
	// Variaveis
	
	int cont, res;
	
	for (cont = 1; cont <= 10000; cont++)
	{
		if (cont % 2 == 0 && cont % 3 == 0 && cont % 4 == 0 && cont % 5 == 0 
		&& cont % 6 == 0 && cont % 7 == 0 && cont % 8 == 0 && cont % 9 == 0 
		&& cont % 10 == 0) 
		{
			printf("VALOR: %d", cont);
			break;
		}
	}
	
	return 0;
}
