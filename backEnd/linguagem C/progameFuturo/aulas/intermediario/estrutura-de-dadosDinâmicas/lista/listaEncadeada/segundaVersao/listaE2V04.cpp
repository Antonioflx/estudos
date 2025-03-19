#include 	<stdio.h>
#include	<stdlib.h>
#include 	<locale.h>
/*
		Aula 253: Lista Simplesmente Encadeada
		Busca COM a estrutura Lista?
		
*/

// estrutura para o no
typedef struct no {
	int valor; // dado
	struct no *proximo; // ponteiro para apontar para o proximo no
} t_No;

// agora temos a nossa struct pr�pria de lista

typedef struct {
	t_No *inicio; // ponteiro que aponta para o inicio.
	int tam; // tamanho	
} t_Lista;

// procedimento para incializar a lista

void criarLista (t_Lista *lista) {
	lista->inicio = NULL;
	lista->tam = 0;
}

// funcao para retornar o tamanho da lista, verificando  se est� vazia ou n.
int isVazia(t_Lista *lista) {
	return lista->tam;
}

// procedimento para inserir no inicio
// parameto ponteiro para ponteiro, pois precisamos alterar o valor.
void inserirInicio(t_Lista *lista, int num) {
	t_No *novo = (t_No*)malloc(sizeof(t_No));
	
	if(novo) {
		novo->valor = num; // receber o dado
		novo->proximo = lista->inicio; // novo->proximo aponta para o inicio da lista atual
		
		lista->inicio = novo; // inicio da lista recebe o novo n�
		lista->tam++; // acrescetando o tamanho.
		 
	} else 
		printf("\nError\n");
	
}

// procedimento para inserir no meio 
// parametros -> lista, valor (dado), ant (dado anterior).
void inserirMeio (t_Lista *lista, int valor, int ant) {
	
	t_No *novo = (t_No*)malloc(sizeof(t_No)); // alocando memoria para o ponteiro novo (receber os dados)
	t_No *aux = lista->inicio; // var aux
	
	if(novo){
		novo->valor = valor; // dado
		
		// lista vazia?
		if(!isVazia(lista)) { 
			novo->proximo = NULL; // o novo vai apontar para o final NULL
			lista->inicio = novo;  // *lista  recebe o novo n�
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
		lista->tam++; // incremetando o tamanho.
			
		
		
	} else
		printf("\nERROR ao alocar mem�ria\n");
	
}


// procedimento para inserir no final
void inserirFim (t_Lista *lista, int num) {
	t_No *aux = lista->inicio;
	t_No *novo = (t_No*)malloc(sizeof(t_No));
	
	if(novo) {
		// dados
		novo->valor = num; // valor
		novo->proximo = NULL; // NULL -> pq � o ultimo n�
		
		// verificar se a lista est� vazia
		if(!isVazia(lista)) 
			lista->inicio = novo; // recebe o conteudo novo.
		else { // caso de facil, existe um n�. Mas, existe um pr�ximo n�?
			// fazer loop at� achar o n� final.
			while(aux->proximo) // aux->proximo != NULL
				aux = aux->proximo;
			// achou o no final == NULL
			aux->proximo = novo; // colocando o vlaor no final.
		} 		
		lista->tam++; // incremetando
	} else 
		printf("\nERRO ao alocar mem�ria\n");
	
}

/*
void inserirOrdenado(t_Lista *lista, int num) {
	t_No *aux = lista->proximo, *novo = (t_No*)malloc(sizeof(t_No*));
	
	if(novo) {
		novo->valor = num;
		
		if(!isVazia(lista)) {
			novo->proximo = NULL;
			lista->inicio = novo;
			
		} else if(novo->valor < lista->inicio->valor) {
			novo->proximo = lista->proximo;
			lista->inicio = novo;
		} else {
			while(aux->proximo && novo->valor > aux->proximo->valor)
			aux = aux->proximo; // autalizando o n�
		
			// falhou o loop por uma das condi��ES	
			novo->proximo = aux->proximo;		
			aux->proximo = novo;
		}
		
		lista->tam++;
	} else
		printf("\nError ao alocar mem�ria\n");
}
*/


// professor utilizou void. Mas, achei utilizar int melhor, pois retorno nas condi��es.
int inserirOrdenado(t_Lista *lista, int valor) {
	// var aux recebe lista, novo ser� para receber os valores
	t_No *aux = lista->inicio, *novo = (t_No*)malloc(sizeof(t_No));
	
	if(novo) { // aloca��o deu certo
		novo->valor = valor; // atribuindo o valor.
		if(!isVazia(lista)) { // lista est� vazia? 
			// s
			novo->proximo = NULL; // o final � nulo
			lista->inicio = novo; // lista recebe o valor
			lista->tam++;
			return 1;
		}
		
		if(novo->valor < lista->inicio->valor) { // novo->valor (valor da var num) � menor que o num do primeiro No? lista->inicio->valor
			// s
			novo->proximo = lista->inicio; // o proximo n� aponta para lista
			lista->inicio = novo; // e lista recebe o novo n�
			lista->tam++;
			return 1;
		}
		
		/*
			loop para fazer 2 verifica��es
				1. aux->proximo -> existe um pr�ximo n�?
				2. novo->valor >  aux->proximo->valor // o valor do no criado atual � maior que o pr�ximo valor do pr�ximo n�?
				
				S -> percorre. at� uma das condi��es falhar
					1. N�o existe outro n�, ou seja, novo->valor � o maior n�
					2. Existe outro n�, mas o valor de novo->valor 	� menor que o valor do pr�ximo no aux->proximo->valor.
				
		*/
		
		
		while(aux->proximo && novo->valor > aux->proximo->valor)
			aux = aux->proximo; // autalizando o n�
		
		// falhou o loop por uma das condi��ES	
		novo->proximo = aux->proximo;		
		aux->proximo = novo;
		lista->tam++;
		return 1;
	}
	
	printf("\nErro ao alocar mem�ria");
	return 0;
}

/*
	 N�o tem indice, logo.
	Terei que remover o valor q o usu digita.
	
	fun��o para remover -> retorna um ponteiro tipo no.
*/

t_No *remove(t_Lista *lista, int valor) {
	t_No *remover = NULL, *aux = lista->inicio; // no para remover
	
	if(lista->inicio) { // lista est� preenchida?
		//s
		if(lista->inicio->valor == valor) { 
			// o 1 valor do 1 n� � igual ao valor que o usu digitou?
			remover = lista->inicio; // recebe o conteudo da lista
			lista->inicio = remover->proximo; // lista -> aponta para o proximo n�.	
			lista->tam--; // decrementa o tam
		}
		else {
			
			// 2 verifica��es aux->proximo != NULL e aux->proximo->valor dif do valor
			// aux->proximo->valor, utiliza assim, pois � depois do 1 n�.
			while(aux->proximo && aux->proximo->valor != valor)
				aux = aux->proximo;
				
			if(aux->proximo) { // loop falhou o valor do proximo � igual o valor que queremos remover, e aux->proximo existe.
				remover = lista->inicio; // ponteiro remover -> recebe o proximo no
				lista->inicio = remover->proximo; // aux->proximo -> aponta paro o proximo n� do remover.
				lista->tam; // decrementa o tam.
			}
		}
	}
	
	return remover;
}


// fun��o para buscar dado

t_No *buscar(t_Lista *lista, int valor) { 
	// var no serve para receber o n� onde o dado est�, caso exista. e aux para fazer o loop ate achar.
	t_No *no = NULL, *aux = lista->inicio; 
	
	// fazendo loop para verificar se aux -> existe && aux->valor != valor/ Se s, percorre para o proximo n�
	while(aux && aux->valor != valor) 
		aux = aux->proximo; // atribuindo o valor de aux para o proximo n� para percorrer a lista
	
	if(aux) // aux existe? dps do loop, se sim, ent o aux->valor ==  valor, achamos o n�
		no = aux; // atribuindo
	
	return no;
}


// procedimento para imprimir.
void imprimirLista(t_Lista lista) {
	t_No *no = lista.inicio;
	
	printf("\n-------I N I C I O - LISTA tam: %d-------\n", lista.tam);
	while(no) { // lista != NULL
		printf("%d ", no->valor); // imprimir dado
		no = no->proximo; // autalizando o n�
	}
	printf("\n----------------------------------\n");
}

void menu(t_Lista lista) {
	
	int opcao, dado, ant;
	t_No *remover;
	
	do {
		printf("\n\t[0.] - Sair\n\t[1.] - Inserir-Inicio\n\t[2.] - Inserir-Meio\n\t[3.] - Inserir-Fim\n\t[4.] - Inserir-Ordenado\n\t[5.] - Remover\n\t[6.] - Busca\n\t[7.] - Imprimir\n\nInforme: ");
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
				break;
				
			case 5 :
				printf("\nDigite um dado para ser removido: ");
				scanf("%d", &dado);
				remover = remove(&lista, dado);
				
				if(remover) {
					printf("\nNumero %d removido.\n", remover->valor);
					
					free(remover);
				} else
					printf("\nElemento n�o existe...");
				break;
				
			case 6 :
				printf("\nDigite o dado que quer buscar: ");
				scanf("%d", &dado);
				remover = buscar(&lista, dado);
				
				if(remover) 
					printf("\nElemento encotrado: %d\n", remover->valor);
				else
					printf("\nElemento %d nao existe na lista\n", dado);
				break;
				
			case 7 :
				imprimirLista(lista);
				break;
			default:
				printf("Saindo...");
				break;
		}
		
	} while(opcao);
	
}

int main() {
	
	setlocale(0, "Portuguese");
//	t_No *lista = NULL;
	t_Lista lista;
	
	criarLista(&lista);
	menu(lista);
	
	
	imprimirLista(lista);
	return 0;
}
