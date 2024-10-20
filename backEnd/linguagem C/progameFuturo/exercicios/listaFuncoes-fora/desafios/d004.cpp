#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


/*
	Desafio 4: Crie um programa em C que receba um número e imprima ele na ordem inversa.
	Ou seja, se recebeu o inteiro 123, deve imprimir o inteiro 321.
	
*/


void inversPrint(int n1, int n2, int n3) {
	
	printf("\nORDEM INVERSA: [%d] , [%d] , [%d]", n3, n2, n1);
}



int main() {	
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	int num1, num2, num3;
	
	printf("\nInforme 3 numeros inteiros: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	
	printf("\n\nORDEM NORMAL:  [%d] , [%d] , [%d]", num1, num2, num3);
	
	inversPrint(num1, num2, num3);
	
	return 0;
} 
