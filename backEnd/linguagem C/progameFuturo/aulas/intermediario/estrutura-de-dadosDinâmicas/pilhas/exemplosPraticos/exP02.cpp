#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

/*
		Aula 231: Como descobrir se uma expressão matemática está mal formada?
		
		3 * [(5 - 2) / 5 ]
		3 * [(5 - 2) / 5

*/

typedef struct no {
	char caracter;
	struct no *proximo;
} t_No;

// empilhar
t_No* empilhar(t_No *pilha, char valor) {
	t_No *novo = (t_No*)malloc(sizeof(t_No));
	
	if(novo) {
		novo->caracter = valor;
		novo->proximo = pilha;
		
		return novo;
	} else
		printf("\nVixeee!");
	return NULL;
		
	
}

// desempilhar
t_No* desempilhar(t_No **pilha) {
	t_No* remover = NULL;
	
	if(*pilha) {
		remover = *pilha;
		*pilha = remover->proximo;
		
	} else
		printf("\nPilha vazia!\n");
	return remover;
}

// imprimir

void imprimir(t_No *pilha) {
	printf("\tPILHA\n");
	while(pilha) {
		printf("\t%c\n", pilha->caracter);
		pilha = pilha->proximo; 
	}
	printf("\tFIM PILHA\n");
}
// funcao para verificar se () [] {} formam par.
// irrelevante (professor fez). Solução do desafio.
int formaPar (char fechamento, char desempilhar) {
	switch(fechamento) {
		
		// 1 bem formada ; 0 mal formada.
		case ')' :
			desempilhar == '(' ? 1 : 0;
			break;
			
		case ']' :
			desempilhar == '[' ? 1 : 0; 
			break;
			
		case '}' :
			desempilhar == '{' ? 1 : 0;
			break;
	}
}

// funcao para indentificar o caractere e empilhar ou desempilhar, de acordo com o caractere
int identificaForm (char x[]) {
	int i = 0;
	t_No *pilha = NULL, *remover;
	while(x[i] != '\0') {
		if(x[i] == '(' || x[i] == '{' || x[i] == '[') 
			pilha = empilhar(pilha, x[i]);
		else if(x[i] == ')' || x[i] == '}' || x[i] == ']') {
			
			// caso exista um caractere de fechamento sem um de abertura, é uma expressão inválida.
			// fazendo verificação se a pilha é NULL, se for e tiver o caractere ), dará expressão mal formada.
			if(!pilha) { 
				printf("\nExpressao mal formada!\n");
				return 1;
			}
			imprimir(pilha);
			remover = desempilhar(&pilha);
			free(remover);
		}
		i++;
	}
	if(pilha) {
		printf("\nEXPRESSAO MAL FORMADA!\n");
		return 1;
	} 
	printf("\nExpressão bem formada!\n");
	return 0;
}

int main() {
	
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	char expressao[50];
	printf("\nDigite a expressão: ");
	scanf("%49[^\n]", expressao);
	printf("\nExpressão: %s\nRetorno: %d\n", expressao, identificaForm(expressao));
	
	return 0;
} 
