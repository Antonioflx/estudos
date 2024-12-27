#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

typedef struct no{
	int data; // dado.
	struct no *proximo; // vai ser o responsavel para receber os ponteiros dos nós.	
} t_No;

int lerPessoa() {
	
	int idade;
	printf("\nAge: ");
	scanf("%d", &idade);
	fflush(stdin);
	
	return idade;
}


// ponteiro pq retorna um endereço de memoria
t_No* empilhar (t_No *topo) {
	
	t_No *novo = (t_No*)malloc(sizeof(t_No)); // criar uma estrutura.
	
	if(novo) {
		novo->data = lerPessoa();
		novo->proximo = topo;
		return novo;
	}
	else
		printf("Vish");
	
	return NULL;
}

void imprimirPessoa(int data) {
	static int id = 0;
	printf("[%d.] -> Age: %d\n", ++id, data);
}


void imprimirPilha(t_No *topo) {
	int id = 1;
	printf("\n----------------------- PILHA -------------------------\n");
		while(topo) {
			
			imprimirPessoa(topo->data);
			topo = topo->proximo;
		}
	printf("\n----------------------- FIM PILHA -------------------------\n");
}

t_No* desempilhar(t_No **topo) {
	if(*topo) {
		
		t_No *remover = *topo;
		
		*topo = remover->proximo;
		
		return remover;
	}
	else
		printf("Cheia meu fi");
	return NULL;
}

int main() {
	
	// temos que atribuir o inicio da pilha = NULL
	t_No *remover, *topo = NULL;
	char resposta, resposta2;
	// processo de empilhar
	// precisamos atribuir ao topo = o próximo topo.
	// NO INICIO é NULL
	// dps de empilharmos será o novo topo.
	
	do {
		system("cls");
		topo = empilhar(topo);
		imprimirPilha(topo);	
		
		printf("\nDesempilhar? s/n\nInforme: ");
		scanf("%c", &resposta2);
		fflush(stdin);		
			
		if(resposta2 == 's' || resposta2 == 'S') {
			remover = desempilhar(&topo);
			imprimirPilha(topo);
		}
		
		printf("\nCONTINUAR? s/n\nInforme: ");
		scanf("%c", &resposta);
		fflush(stdin);
	} while(resposta == 's' || resposta == 'S');
	
}
