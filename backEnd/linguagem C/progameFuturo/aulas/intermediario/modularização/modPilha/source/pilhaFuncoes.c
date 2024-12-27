
#include "../header/pilha.h"

// procedimento para criar a pilha
void criarPilha(t_Pilha *p) {
	p->topo = NULL; // primerio nó = NULL
	p->tam = 0; // obviamente o tamanho é 0.
}

int lerNumero() {
	t_No dado;
	
	printf("Digite o numero: ");
	scanf("%d", &dado.numero);
	
	return dado.numero;
}

void empilhar(t_Pilha *p, int num) {
	
	t_No *novo = (t_No*)malloc(sizeof(t_No));
	if(novo) {
		
		novo->numero = num; // colocando o dado no nó
	
		novo->proximo = p->topo; // atribuindo que o ponteiro aponta para o nó anterior
		p->topo = novo; // ponterio novo é o novo topo da pilha.
		p->tam++; // acrescentando +1 na pilha.
			
			
	} else
		printf("\nVixeeee");
	
}

void imprimirPilha(t_Pilha *p) {
	t_No *aux = p->topo;
	
	while(aux) {
		printf("\t%d\n", aux->numero);// imprimir o num
		aux = aux->proximo; // atribuindo a estrutura aux o no que o ponteiro proximo aponta.
	}
}

// desempilhar , pega o topo * pelo ponteiro, assim vai.

t_No* desempilhar(t_Pilha *p) {
	
	if(p->topo) {
		t_No *remover = p->topo;
		
		p->topo = remover->proximo;
		p->tam--;
		
		return remover;
	} else
		printf("\nNão há pilha!\n");
	return NULL;
}

