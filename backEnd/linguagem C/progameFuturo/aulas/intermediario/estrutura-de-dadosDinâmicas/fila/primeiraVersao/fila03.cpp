#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
	Aula 237: Imprimindo e Testando nossa FILA
	
	FiFo -> First-In, First-Out

*/

// estrutura de dados da fila
typedef struct no {
	int dado; // dado
	struct no *proximo; // o ponteiro apontar para o pr�ximo n�
} t_No;


// procedimendo para inserir o Dado na fila. -> No final
void inserirDado_na_fila (t_No **fila, int valor){
	t_No *novo = (t_No*)malloc(sizeof(t_No));
	t_No *aux; // No auxiliar
	if(novo) {
		novo->dado = valor;
		
		// o valor do pr�ximo � nulo, pq?
		// porque sempre iremos fazer uma inser��o no final da fila
		novo->proximo = NULL; 
		
		// inserir na fila -> na primeira vez.
		if(!*fila) // fila est� vazia
			*fila = novo;
		else { 
		// na segunda vez, sempre ser� falso
		// precisamos percorrer a fila at� o final para inserir.
			aux = *fila; // aux est� recebendo o ponteiro para o primeiro n� da fila.
			
			while(aux->proximo) // percorrer at� encontrar o �ltimo n� -> que aponta para NULL
				aux = aux->proximo; // declarando
			// o while deu falso, oq indica que o ultimo n� � NULL
			aux->proximo = novo; // decleramos que o ultimo n� agora � o novo.
		}
		
	} else
		printf("\nDeu errado !");
}

// Fun��o para remover da fila -> Remover o final
t_No *removerDaFila(t_No **fila) {
	// criar uma var para remover
	t_No *remover = NULL;
	
	// verificar se a fila est� vazia ou n
	if(*fila) { // fila preenchida
		remover = *fila; // ponteiro remover -> recebe o conte�do do primeiro elemento  da fila
		// autalizar a fila
		*fila = remover->proximo;
	} else
		printf("\nFila est� vazia!\n");
	
	return remover;
}

// procedimento para imprimir a fila
void imprimir(t_No *fila) {
	printf("\n\t---------- FILA -----------\n\t");
	while(fila) { // fazer loop verificaindo se fila != NULL
		printf("%d ", fila->dado); // imprimir o dado
		fila = fila->proximo; // fila vai apontar para o proximo No. 
		// Isso precisa ser feito para n ficar em loop
	}
	printf("\n\t---------- FIM FILA -----------\n");
	
}


int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	t_No *remover, *fila = NULL;
	
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
				imprimir(fila);
				break;
			default: printf("\n\nSaindo...\n");
		}
	} while (opcao);
	
	return 0;
} 
