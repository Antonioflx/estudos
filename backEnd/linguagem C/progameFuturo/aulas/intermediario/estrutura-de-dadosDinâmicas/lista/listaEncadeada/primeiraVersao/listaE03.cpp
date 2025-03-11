#include 	<stdio.h>
#include	<stdlib.h>

/*
		Aula 245: Lista Simplesmente Encadeada
		Como inserir no Meio da lista?
		
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
		
		*lista = novo; // inicio da lista recebe o novo n�
		 
	} else 
		printf("\nError\n");
	
}

// procedimento para inserir no meio 
// parametros -> endere�o lista, valor (dado), ant (dado anterior).
void inserirMeio (t_No **lista, int valor, int ant) {
	
	t_No *novo = (t_No*)malloc(sizeof(t_No)); // alocando memoria para o ponteiro novo (receber os dados)
	t_No *aux = *lista; // var aux
	
	if(novo){
		novo->valor = valor; // dado
		
		// lista vazia?
		if(!*lista) { 
			novo->proximo = NULL; // o novo vai apontar para o final NULL
			*lista = novo;  // *lista  recebe o novo n�
		} else { // caso n�o esteja
			/*
				fazer 2 verifica��es
			 	1. aux->valor != ant ? Ex: 10 != 90 ? 
				 	Pois, precisamos saber onde est� o n� anterior para inserir o valor.
				 	Caso seja diferente, ent precisamos passar para o pr�ximo n�
			 	2. aux->proximo != NULL ?
			 		Caso sim, ainda possui proximo
			 		Caso seja falso, n�o possui o anterior e insere no final.
			*/
			while(aux->valor != ant && aux->proximo) 	
				aux = aux->proximo;
			
			// quando der falso autalizar os dados
			novo->proximo = aux->proximo;
			aux->proximo = novo;
		}
			
		
		
	} else
		printf("\nERROR ao alocar mem�ria\n");
	
}


// procedimento para inserir no final
void inserirFim (t_No **lista, int num) {
	t_No *aux = *lista;
	t_No *novo = (t_No*)malloc(sizeof(t_No));
	
	if(novo) {
		// dados
		novo->valor = num; // valor
		novo->proximo = NULL; // NULL -> pq � o ultimo n�
		
		// verificar se a lista est� vazia
		if(!*lista) 
			*lista = novo; // recebe o conteudo novo.
		else { // caso de facil, existe um n�. Mas, existe um pr�ximo n�?
			// fazer loop at� achar o n� final.
			while(aux->proximo) // aux->proximo != NULL
				aux = aux->proximo;
			// achou o no final == NULL
			aux->proximo = novo; // colocando o vlaor no final.
		} 		
	} else 
		printf("\nERRO ao alocar mem�ria\n");
	
}


// procedimento para imprimir.
void imprimirLista(t_No *lista) {
	t_No *aux = lista; // criando no auxiliar
	
	printf("\n-------I N I C I O - LISTA -------\n");
	while(aux) { // aux != NULL
		printf("%d ", aux->valor); // imprimir dado
		aux = aux->proximo; // autalizando o n�
	}
	printf("\n----------------------------------\n");
}

int main() {
	
	t_No *lista = NULL;
	
	inserirInicio(&lista, 10);
	inserirInicio(&lista, 20);
	inserirFim(&lista, 30);	
	inserirInicio(&lista, 90);
	inserirFim(&lista, 50);	
	inserirMeio (&lista, 0, 100);
	inserirMeio (&lista, 200, 30);
	
	imprimirLista(lista);
	return 0;
}
