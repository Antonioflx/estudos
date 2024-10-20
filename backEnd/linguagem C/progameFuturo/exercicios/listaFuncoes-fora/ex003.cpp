#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
	2. Crie uma função que receba três valores, 'a', 'b' e 'c', 
	que são os coeficientes de uma equação do segundo grau e 
	retorne o valor do delta, que é dado por 'b² - 4ac'
*/


int deltValue(int a, int b, int c) {
	
	int delta = b * b - 4 * a * c;
	
	return delta;
	
}



int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	int a, b, c;
	
	printf("Digite tres numero: ");
	scanf("%d%d%d", &a, &b, &c);
	
	printf("\nValor de Delta: %d", deltValue(a,b,c));
	
	// codigo
	return 0;
} 
