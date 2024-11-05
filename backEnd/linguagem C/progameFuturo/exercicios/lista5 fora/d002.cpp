#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


/*
	Desafio 2: Programe um aplicativo em C 
	que recebe dois inteiros e retorna o MDC, máximo divisor comum.
	
	
	10 2 -> 10 / 2 -> 5
	
*/


int mmc(int n1, int n2) {
	
	int divisor;
	
	if(n1 > n2)
		divisor = n1/n2;
	else if(n2 > n1)
		divisor = n2/n1;
	else
		divisor = 1;
		
	return divisor;
	
}



int main() {	
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	int num1, num2;
	
	printf("\nInforme 2 numeros inteiros: ");
	scanf("%d%d", &num1, &num2);
	
	
	printf("\n\nO maior divisor entre o numero %d e o numero %d\n\tRESULTADO: %d", num1, num2, mmc(num1, num2));
	return 0;
} 
