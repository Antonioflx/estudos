#include 	<stdio.h>
#include	<stdlib.h>

/*
		Aula 243: Lista Simplesmente Encadeada
		Como inserir no início da lista?
		
*/

// estrutura para o no
typedef struct no {
	int valor; // dado
	struct no *proximo; // ponteiro para apontar para o proximo no
} t_No;

// procedimento para inserir no inicio
// parameto ponteiro para ponteiro, pois precisamos alterar o valor.
void inserirInicio(t_No **lista, int num) {
	t_No *novo = (t_No*)malloc(sizeof(t_No));
	
	if(novo) {
		novo->valor = num; // receber o dado
		novo->proximo = *lista; // novo->proximo aponta para o inicio da lista atual
		
		*lista = novo; // inicio da lista recebe o novo nó
		 
	} else {
		printf("\nError\n");
	}
}


// procedimento para imprimir.
void imprimirLista(t_No *lista) {
	t_No *aux = lista; // criando no auxiliar
	
	printf("\n-------I N I C I O - LISTA -------\n");
	while(aux) { // aux != NULL
		printf("%d ", aux->valor); // imprimir dado
		aux = aux->proximo; // autalizando o nó
	}
	printf("\n----------------------------------\n");
}

int main() {
	
	t_No *lista = NULL;
	
	inserirInicio(&lista, 10);
	inserirInicio(&lista, 20);
	
	imprimirLista(lista);
	return 0;
}
