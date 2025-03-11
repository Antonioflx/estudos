#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
	Aula 235: Inserção em uma FILA
	
	FiFo -> First-In, First-Out

*/

// estrutura de dados da fila
typedef struct no {
	int dado; // dado
	struct no *proximo; // o ponteiro apontar para o próximo nó
} t_No;


// função para inserir o Dado na fila.
void inserirDado_na_fila (t_No **fila, int valor){
	t_No *novo = (t_No*)malloc(sizeof(t_No));
	t_No *aux; // No auxiliar
	if(novo) {
		novo->dado = valor;
		
		// o valor do próximo é nulo, pq?
		// porque sempre iremos fazer uma inserção no final da fila
		novo->proximo = NULL; 
		
		// inserir na fila -> na primeira vez.
		if(!*fila) // fila está vazia
			*fila = novo;
		else { 
		// na segunda vez, sempre será falso
		// precisamos percorrer a fila até o final para inserir.
			aux = *fila; // aux está recebendo o ponteiro para o primeiro nó da fila.
			
			while(aux->proximo) // percorrer até encontrar o último nó -> que aponta para NULL
				aux = aux->proximo; // declarando
			// o while deu falso, oq indica que o ultimo nó é NULL
			aux->proximo = novo; // decleramos que o ultimo nó agora é o novo.
		}
		
	} else
		printf("\nDeu errado !");
}


int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	t_No *fila = NULL;
	
	int valor = 10;
	
	inserirDado_na_fila(&fila, valor);
	
	return 0;
} 
