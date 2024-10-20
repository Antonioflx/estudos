#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
	4. Crie uma função em linguagem C que receba 2 números e retorne o maior valor.
*/


int maiorNum(int num1, int num2) {
	
	int maior = num1;
	
	if (num2 > maior)
		maior = num2;
		
	return maior;
}



int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	int num1, num2;
	
	printf("Digite dois numero: ");
	scanf("%d%d", &num1, &num2);
	
	printf("\nValores: [%d] , [%d] |" , num1, num2);
	printf("\nMAIOR: %d", maiorNum(num1, num2));
	

	return 0;
} 
