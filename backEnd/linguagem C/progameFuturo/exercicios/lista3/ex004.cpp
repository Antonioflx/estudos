#include <stdio.h>

/* 
			ex004:
		somar os numeros impares --> 1 até 1000
*/

int main () {

	// Variaveis
	
	int somaImpar;
	
	// Codigo
	
	for(int c = 1; c<= 1000; c += 2)
	{
		if(c % 2 !=0)
		{
			somaImpar += c;
		}
	}
	
	printf("\nSoma dos valores Impares: %d", somaImpar);
	return 0;
}
