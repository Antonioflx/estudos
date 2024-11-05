#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Ex002:
		2) Escreva um procedimento que troca os valores dos parâmetros recebidos. Sua assinatura deve
		ser: void troca(float *a, float *b);
*/


void troca(float *a, float*b) {
	
	float aux = *a;
	
	*a = *b;
	*b = aux;
}

int main() {
	
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	float a = 10;
	float b = 20;
	
	
	printf("\n\n\t[ANTES DO PROCEDIMENTO]\n\n");
	printf("Valor de a: %.1f\nValor de b: %.1f", a, b);
	
	printf("\n\n\t[DEPOIS DO PROCEDIMENTO]\n\n");
	troca(&a, &b);
	printf("Valor de a: %.1f\nValor de b: %.1f", a, b);
	return 0;
} 
