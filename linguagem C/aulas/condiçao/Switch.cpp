#include <stdio.h>


/*
			Aula 50:
		SWITCH CASE
*/


int main () {
	
	// Variaveis
	
	int valor;
	
	
	// Escolher um numero e usar Switch
	printf("\nFaca uma escolha\n");
	printf("----------------------------\n");
	
	printf("[1] - Cadastrar produto\n[2] - Vender produto\n[3] - buscar produto\n[4] - imprimir produto\n[5] - sair\n");
	printf("----------------------------\n");
	printf("Qual servico voce deseja? ");
	scanf("%d", &valor);
	
	switch (valor)
	{
		case 1 :
			printf("\nNome do produto:");
		break;
		
		case 2 :
			printf("\nQual e o valor do produto?");
		break;
		
		case 3 :
			printf("\nAqui esta o seu produto.");
		break;
		
		case 4 :
			printf("\nP R O D U T O ");
		break;
		
		case 5 :
		break;
		
		default :
			printf("\n[ERRO] Opcao invalida");
	}
	
	
	return 0;
}
