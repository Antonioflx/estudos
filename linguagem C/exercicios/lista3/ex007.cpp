#include <stdio.h>

/*
		ex007:
	Ler N e apresentar o quadradado de cada par de 1 até N;
*/

int main () {
	
	// Variaveis
	
	int valor, quadrado;
	
	// Codigo
	printf("\nDigite um valor inteiro: ");
	scanf("%d", &valor);
	printf("\n");
	
	for (int cont = 1; cont <= valor; cont++)
	{
		if (cont % 2 == 0)
		{
			quadrado = cont * cont;
			printf("%d ", quadrado);
		}
	}
	
	
	return 0;
}
