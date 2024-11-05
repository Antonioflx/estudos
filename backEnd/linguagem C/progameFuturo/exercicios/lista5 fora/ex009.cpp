#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
	7. Crie uma função em linguagem C que receba 3 números e retorne o menor valor, use a função da questão 5.
*/


int menorNum(int num1, int num2, int num3) {
	
	int menor = num1;
	
	if (num2 < menor)
		menor = num2;
	
	if(num3 < menor)
		menor = num3;
	return menor;
}



int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	int num1, num2, num3;
	
	printf("Digite tres numero: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	
	printf("\nValores: [%d] , [%d] , [%d] |" , num1, num2, num3);
	printf("\nMENOR: %d", menorNum(num1, num2, num3));
	
	
	return 0;
} 
