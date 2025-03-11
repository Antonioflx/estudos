#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
	Aula 238: Estrutura FILA - Segunda Versão...
	
	FiFo -> First-In, First-Out

*/

// estrutura de dados da fila
typedef struct no {
	int dado; // dado
	struct no *proximo; // o ponteiro apontar para o próximo nó
} t_No;

/*
	estrutura de fila 
 	t_No *prim -> primeiro da fila
 	t_No *fim -> final da fila
 	int tam -> tamanho da estrutura
*/


typedef struct  {
	t_No *prim;
	t_No *fim;
	int tam;
} t_Fila;

// procedimento para criar a fila
void criar_fila (t_Fila *fila ) {
	
	// no inicio não possui nada.
	fila->prim = NULL;
	fila->fim = NULL;
	fila->tam = 0;
}


// procedimendo para inserir o Dado na fila. -> No final
void inserirDado_na_fila (t_Fila *fila, int valor){
	t_No *novo = (t_No*)malloc(sizeof(t_No));
	t_No *aux; // No auxiliar
	if(novo) {
		novo->dado = valor;
		
		// o valor do próximo é nulo, pq?
		// porque sempre iremos fazer uma inserção no final da fila
		novo->proximo = NULL; 
		
		// inserir na fila -> na primeira vez.
		if(!fila->prim) { // Se o primeiro nó da fila for == NULL. Fila está vazia
		// o fim e o inicio na 1 vez é igual
			fila->prim = novo;
			fila->fim = novo; 
		}
		else { 
		// na segunda vez, sempre será falso, pois a fila está preenchida pelo menos uma vez.
		// inserir no final da fila
		
			fila->fim->proximo = novo; // o final da fila vai apontar para o proximo nó
			fila->fim = novo; // e o final anterior vai apontar para o novo que acabei de criar.
		}
		fila->tam++;
	} else
		printf("\nDeu errado !");
}

// Função para remover da fila -> Remover o final
t_No *removerDaFila(t_Fila *fila) {
	// criar uma var para remover
	t_No *remover = NULL;
	
	// verificar se a fila está vazia ou n
	if(fila->prim) { // fila preenchida
		remover = fila->prim; // ponteiro remover -> recebe o conteúdo do primeiro elemento  da fila
		// autalizar a fila
		fila->prim = remover->proximo;
		fila->tam--;
	} else
		printf("\nFila está vazia!\n");
	
	return remover;
}

// procedimento para imprimir a fila
void imprimir(t_Fila *fila) {
	t_No *aux = fila->prim; // pegar o primeiro valor para imprimir. Sucessivamente no loop. Até chegar em NULL;
	
	printf("\n\t---------- FILA -----------\n\t");
	while(aux) { // fazer loop verificaindo se fila->prim != NULL
		printf("%d ", aux->dado); // imprimir o dado
		aux = aux->proximo; // fila->prim vai apontar para o proximo No. 
		// Isso precisa ser feito para n ficar em loop
	}
	printf("\n\t---------- FIM FILA -----------\n");
	
}


int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	t_No *remover;
	
	t_Fila fila;
	criar_fila(&fila);
	
	int opcao, valor;
	
	do {
		printf("\t0 - Sair\n\t1 - Inserir\n\t2 - Remover\n\t3 - Imprimir\nInforme: ");
		scanf("%d", &opcao);
		switch(opcao) {
			case 1:
				printf("\nDigite um valor: ");
				scanf("%d", &valor);
				inserirDado_na_fila(&fila, valor);
				break;
			case 2:
				remover = removerDaFila(&fila);
				if(remover) {
					printf("\nO num %d foi removido com sucesso\n\n", remover->dado);
					free(remover);
				} 
				break;
			case 3:
				imprimir(&fila);
				break;
			default: printf("\n\nSaindo...\n");
		}
	} while (opcao);
	
	return 0;
} 
