#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
	1. Crie uma função que receba um valor e diga se é nulo ou não.
*/


void checkNum(int n) {
	
	if(n == 0)
		printf("\nO numero %d  é  nulo\n", n);
	else
		printf("\nO numero %d não é nulo \n", n);
}


int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	float num;
	
	printf("Digite um numero: ");
	scanf("%f", &num);
	
	checkNum(num);
	return 0;
} 
