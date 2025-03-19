#include 	<stdio.h>
#include	<stdlib.h>

/*
		Aula 248: Lista Simplesmente Encadeada
		Como inserir de forma ordenada SEM a estrutura Lista?
		
		
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
		 
	} else 
		printf("\nError\n");
	
}

// procedimento para inserir no meio 
// parametros -> endereço lista, valor (dado), ant (dado anterior).
void inserirMeio (t_No **lista, int valor, int ant) {
	
	t_No *novo = (t_No*)malloc(sizeof(t_No)); // alocando memoria para o ponteiro novo (receber os dados)
	t_No *aux = *lista; // var aux
	
	if(novo){
		novo->valor = valor; // dado
		
		// lista vazia?
		if(!*lista) { 
			novo->proximo = NULL; // o novo vai apontar para o final NULL
			*lista = novo;  // *lista  recebe o novo nó
		} else { // caso não esteja
			/*
				fazer 2 verificações
			 	1. aux->valor != ant ? Ex: 10 != 90 ? 
				 	Pois, precisamos saber onde está o nó anterior para inserir o valor.
				 	Caso seja diferente, ent precisamos passar para o próximo nó
			 	2. aux->proximo != NULL ?
			 		Caso sim, ainda possui proximo
			 		Caso seja falso, não possui o anterior e insere no final.
			*/
			while(aux->valor != ant && aux->proximo) 	
				aux = aux->proximo;
			
			// quando der falso autalizar os dados
			novo->proximo = aux->proximo;
			aux->proximo = novo;
		}
			
		
		
	} else
		printf("\nERROR ao alocar memória\n");
	
}


// procedimento para inserir no final
void inserirFim (t_No **lista, int num) {
	t_No *aux = *lista;
	t_No *novo = (t_No*)malloc(sizeof(t_No));
	
	if(novo) {
		// dados
		novo->valor = num; // valor
		novo->proximo = NULL; // NULL -> pq é o ultimo nó
		
		// verificar se a lista está vazia
		if(!*lista) 
			*lista = novo; // recebe o conteudo novo.
		else { // caso de facil, existe um nó. Mas, existe um próximo nó?
			// fazer loop até achar o nó final.
			while(aux->proximo) // aux->proximo != NULL
				aux = aux->proximo;
			// achou o no final == NULL
			aux->proximo = novo; // colocando o vlaor no final.
		} 		
	} else 
		printf("\nERRO ao alocar memória\n");
	
}


// procedimento para imprimir.
void imprimirLista(t_No *lista) {
	
	printf("\n-------I N I C I O - LISTA -------\n");
	while(lista) { // lista != NULL
		printf("%d ", lista->valor); // imprimir dado
		lista = lista->proximo; // autalizando o nó
	}
	printf("\n----------------------------------\n");
}

/*
void inserirOrdenado(t_No **lista, int num) {
	t_No *aux = *lista, *novo = (t_No*)malloc(sizeof(t_No*));
	
	if(novo) {
		novo->valor = num;
		
		if(!*lista) {
			novo->proximo = NULL;
			*lista = novo;
		} else if(novo->valor < (*lista)->valor) {
			novo->proximo = *lista;
			*lista = novo;
		} else {
			while(aux->proximo && novo->valor > aux->proximo->valor)
				aux = aux->proximo;
				
			novo->proximo = aux->proximo; // novo->proximo recebe o proximo no
			aux->proximo = novo;
		}
	} else
		printf("\nError ao alocar memória\n");
}
*/

// professor utilizou void. Mas, achei utilizar int melhor, pois retorno nas condições.
int inserirOrdenado(t_No **lista, int num) {
	
	// var aux recebe lista, novo será para receber os valores
	t_No *aux = *lista, *novo = (t_No*)malloc(sizeof(t_No*));
	
	if(novo) { // alocação deu certo
		novo->valor = num; // atribuindo o valor
		if(!*lista) { // lista está vazia? 
			// s
			novo->proximo = NULL; // o final é nulo
			*lista = novo; // lista recebe o valor
			return 1;
		}
		
		if(novo->valor < (*lista)->valor) { // novo->valor (valor da var num) é menor que o num do primeiro No? (*lista)->valor
			// s
			novo->proximo = *lista; // o proximo nó aponta para lista
			*lista = novo; // e lista recebe o novo nó
			return 1;
		}
		
		/*
			loop para fazer 2 verificações
				1. aux->proximo -> existe um próximo nó?
				2. novo->valor >  aux->proximo->valor // o valor do no criado atual é maior que o próximo valor do próximo nó?
				
				S -> percorre. até uma das condiçÕes falhar
					1. Não existe outro nó, ou seja, novo->valor é o maior nó
					2. Existe outro nó, mas o valor de novo->valor 	é menor que o valor do próximo no aux->proximo->valor.
				
		*/
		while(aux->proximo && novo->valor > aux->proximo->valor)
			aux = aux->proximo; // autalizando o nó
		
		// falhou o loop por uma das condiçõES
		novo->proximo = aux->proximo; // novo->proximo recebe o proximo no
		aux->proximo = novo; // e o nó recebe novo.
		return 1;	
	} 
	
	printf("\nError ao alocar memoria");
	return 0;
}

void menu(t_No *lista) {
	
	int opcao, dado, ant;
	
	do {
		printf("\n\t[0.] - Sair\n\t[1.] - Inserir-Inicio\n\t[2.] - Inserir-Meio\n\t[3.] - Inserir-Fim\n\t[4.] - Inserir-Ordenado\n\t[5.] - Imprimir\n\nInforme: ");
		scanf("%d", &opcao);
			
		switch(opcao) {
			
			case 1 :
				printf("\nDigite um dado: ");
				scanf("%d", &dado);
				inserirInicio(&lista, dado);
				break;
			
			case 2 :	
				printf("\nDigite um dado: ");
				scanf("%d", &dado);
				printf("\nQual o dado anterior?  ");
				scanf("%d", &ant);		
				inserirMeio(&lista, dado, ant);
				break;
				
			case 3 :
				printf("\nDigite um dado: ");
				scanf("%d", &dado);
				inserirFim(&lista, dado);
				break;
				
			case 4 :
				printf("\nDigite um dado: ");
				scanf("%d", &dado);
				inserirOrdenado(&lista, dado);
			
			case 5 :
				imprimirLista(lista);
				break;
			default:
				printf("Saindo...");
				break;
		}
		
	} while(opcao);
	
}

int main() {
	
	t_No *lista = NULL;
	
	menu(lista);
	
	
	imprimirLista(lista);
	return 0;
}
