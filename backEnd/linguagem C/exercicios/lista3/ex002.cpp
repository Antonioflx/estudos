#include <stdio.h>
#include <stdlib.h>
/*
		ex002:
	senhinha
*/

int main () {

	// Variaveis 
	int senha,senhaCorreta = 123456;
	
	// Codigo
	
	printf("\nSenha apenas com Numeros inteiros:\n");
	printf("Digite uma senha: ");
	scanf("%d", &senha);
	
	while (senha != senhaCorreta)
	{
		printf("\nSenha Invalida!");
		printf("\nDigite uma senha: ");
		scanf("%d", &senha);
	}
	printf("\nSenha Valida");
	return 0;
}
