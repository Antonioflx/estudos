#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
	Aula 236: Remo��o em uma FILA
	
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
		
		free(novo);
	} else
		printf("\nDeu errado !");
}

// Fun��o para remover da fila -> Remover o final
t_No *removerDaFila(t_No **fila) {
	// criar uma var para remover
	t_No *remover = NULL;
	
	// verificar se a fila est� vazia ou n
	if(*fila) { // fila preenchida
		remover = *fila; // ponteiro remover -> recebe o conte�do (ultimo) da fila
		// autalizar a fila
		*fila = remover->proximo;
	} else
		printf("\nFila est� vazia!\n");
	
	return remover;
}

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	t_No *fila = NULL;
	
	int valor = 10;
	
	inserirDado_na_fila(&fila, valor);
	
	return 0;
} 
