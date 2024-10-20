#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
	0. Crie uma função que receba um valor e informe se ele é positivo ou não;
*/


void verifNum(int n) {
	
	if(n < 0)
		printf("\nO numero %d  é negativo\n", n);
	else
		printf("\nO numero %d  é positivo\n", n);
}



int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	float num;
	
	printf("Digite um numero: ");
	scanf("%f", &num);
	
	verifNum(num);
	
	
	return 0;
} 
