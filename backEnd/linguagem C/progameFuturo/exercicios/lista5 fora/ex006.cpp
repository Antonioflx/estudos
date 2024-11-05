#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
	5. Crie uma função em linguagem C que receba 2 números e retorne o menor valor.
*/


int menorNum(int num1, int num2) {
	
	int menor = num1;
	
	if (num2 < menor)
		menor = num2;
		
	return menor;
}



int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	int num1, num2;
	
	printf("Digite dois numero: ");
	scanf("%d%d", &num1, &num2);
	
	printf("\nValores: [%d] , [%d] |" , num1, num2);
	printf("\nMENOR: %d", menorNum(num1, num2));
	

	return 0;
} 
