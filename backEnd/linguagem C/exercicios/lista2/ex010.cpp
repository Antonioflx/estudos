#include <stdio.h>

/*
		ex010
		Triangulo 
*/

int main () {

	// Variaveis
	int valor, valor1, valor2; // valores
	
	// Codigo
	
	printf("\n\nDigite 3 valores inteiros para fazermos um triangulo: ");
	scanf("%d%d%d", &valor, &valor1, &valor2);
	
	// Verificar se o triangulo e valido
	
	if (valor + valor1 > valor2 && valor + valor2 > valor1 && valor1 + valor2 > valor) 
	{
		printf("\nTriangulo valido!\nTipo de triangulo: ");
		
		if (valor == valor1 && valor == valor2) // Estrutura para verificar se o triangulo e Equilatero, Isosceles, Escaleno
		{
			printf("\tTriangulo Equilatero");
		} else if((valor == valor1 && valor != valor2) || (valor == valor2 && valor != valor1) || (valor1 == valor2 && valor1 != valor))
		{
			printf("\tTriangulo Isosceles");
		} else 
		{
			printf("\tTriangulo Escaleno");
		}
	} else 
	{
		printf("\nTriangulo invalido!");
	}
	return 0;
}
