#include <stdio.h>


/*
			Aula 50:
		SWITCH CASE
*/


int main () {
	
	// Variaveis
	
	char valor;
	
	
	// Escolher um numero e usar Switch
	printf("\nFaca uma escolha\n");
	printf("----------------------------\n");
	
	printf("[a] - Cadastrar produto\n[b] - Vender produto\n[c] - buscar produto\n[d] - imprimir produto\n[e] - sair\n");
	printf("----------------------------\n");
	printf("Qual servico voce deseja? ");
	scanf("%c", &valor);
	
	switch (valor)
	{
		case 'a' :
			printf("\nNome do produto:");
		break;
		
		case 'b' :
			printf("\nQual e o valor do produto?");
		break;
		
		case 'c' :
			printf("\nAqui esta o seu produto.");
		break;
		
		case 'd' :
			printf("\nP R O D U T O ");
		break;
		
		case 'e' :
		break;
		
		default :
			printf("\n[ERRO] Opcao invalida");
	}
	
	
	return 0;
}
