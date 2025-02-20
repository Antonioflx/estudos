#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

/*
	EXERCÍCIO
	
	3) Escreva um algoritmo para inverter a ordem das letras de cada palavra de uma string,
	preservando a ordem das palavras. Por exemplo, dado o texto:
	ABRA A PORTA MARIQUINHA a saida deve ser ARBA A ATROP AHNIUQIRAM.
	
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

// funcao para indentificar o caractere e empilhar ou desempilhar, de acordo com o caractere
void inverterPalavras (char x[]) {
	int i = 0;
	t_No *pilha = NULL, *remover;
	
	while(x[i] != '\0') {
		if(x[i] != ' ') 
			pilha = empilhar(pilha, x[i]);
		else  {
			while(pilha) {
				remover = desempilhar(&pilha);
				printf("%c", remover->caracter);
				free(remover);
			}
			printf(" ");
		}
		i++;
	}
	
	while(pilha) {
		remover = desempilhar(&pilha);
		printf("%c", remover->caracter);
		free(remover);
	}
	printf("\n");
}

int main() {
	
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	char texto[50] = {"ABRA A PORTA MARIQUINHA"};
	
	inverterPalavras(texto);
	
	
	return 0;
} 
