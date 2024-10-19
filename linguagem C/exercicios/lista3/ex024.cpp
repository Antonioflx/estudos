#include <stdio.h>

/*
		24) Você deve fazer um programa que apresente a sequência conforme o exemplo abaixo.
		I=1 J=7
		I=1 J=6
		I=1 J=5
		I=3 J=9
		I=3 J=8
		I=3 J=7
		I=5 J=11
		I=5 J=10
		I=5 J=9
		...
		I=9 J=15
		I=9 J=14
		I=9 J=13
*/
int main () {

	// Variaveis
	int i,j;
	
	// Codigo
	
	// J - I = 6 (INICIAL);
	// J - I = 4 (FINAL)
	
	for (i = 1; i <=9; i+= 2)
	{
		for(j = i + 6; j >= i + 4 ; j--)
		{
			printf("\nI=%d", i);
			printf("  J=%d", j);
		}
	}
	
	return 0;
}
