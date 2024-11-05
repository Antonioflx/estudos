#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
	4. Crie uma função em linguagem C que receba 2 números e retorne o maior valor.
*/


int maiorNum(int num1, int num2, int num3) {
	
	int maior = num1;
	
	if (num2 > maior)
		maior = num2;
	
	if(num3 > maior)
		maior = num3;
	return maior;
}



int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	int num1, num2, num3;
	
	printf("Digite tres numero: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	
	printf("\nValores: [%d] , [%d] , [%d] |" , num1, num2, num3);
	printf("\nMAIOR: %d", maiorNum(num1, num2, num3));

	return 0;
} 
