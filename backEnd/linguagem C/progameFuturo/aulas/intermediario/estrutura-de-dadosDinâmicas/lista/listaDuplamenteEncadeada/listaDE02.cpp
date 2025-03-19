#include 	<stdio.h>
#include	<stdlib.h>
#include	<locale.h>
/*
		Aula 257: Lista Duplamente Encadeada		
*/

// estrutura para o no
typedef struct no {
	int valor; // dado
	struct no *proximo; // ponteiro para apontar para o proximo no
	struct no *anterior; // ponteiro para o n� anterior.
} t_No;

// procedimento para inserir no inicio
// parameto ponteiro para ponteiro, pois precisamos alterar o valor.
void inserirInicio(t_No **lista, int num) {
	t_No *novo = (t_No*)malloc(sizeof(t_No));
	
	if(novo) {
		novo->valor = num; // receber o dado
		novo->proximo = *lista; // novo->proximo aponta para o inicio da lista atual
		novo->anterior = NULL; // o anterior seria NULL, pois � o 1 da lista.
		
        /*
            lista = NULL;
                Insiro o 1N�
                    dado = 1;
                    struct no *proximo = *lista
                    struct no *anterior = NULL
            *lista = novo;
            
            Na segunda vez possui um dado na lista
                1NO
                    dado = 1
                    *proximo = *lista (NULL)
                    *anterior = (NULL;)

                Insiro o 2 n� inicio.
                    dado = 2
                    *proximo = *1n�

                *lista->anterior = novo;
            
        */

        // a lista est� preenchida?
        if(*lista)  // s
            // pq no 2 caso *lista = possui o 1 no. e o 1no->anterior = NULL; 
            // Mas, como inserimos um novo dado *lista->anterior (1no) = novo (2 no inserido);
            (*lista)->anterior = novo; 

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
            novo->anterior = NULL;
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
            if(aux->proximo)
                aux->proximo->anterior = novo;
            novo->anterior = aux;
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
		if(!*lista) {
            novo->anterior = NULL; // se estiver vazia n tem nenhum anterior
			*lista = novo; // recebe o conteudo novo.
        }
		else { // caso de facil, existe um n�. Mas, existe um pr�ximo n�?
			// fazer loop at� achar o n� final.
			while(aux->proximo) // aux->proximo != NULL
				aux = aux->proximo;
			// achou o no final == NULL
            novo->anterior = aux; // quando der falso ser� aux o anterior.
			aux->proximo = novo; // colocando o vlaor no final.
		} 		
	} else 
		printf("\nERRO ao alocar mem�ria\n");
	
}




// procedimento para imprimir.
void imprimirLista(t_No *lista) {
	
	printf("\n-------I N I C I O - LISTA -------\n");
	while(lista) { // lista != NULL
		printf("%d ", lista->valor); // imprimir dado
		lista = lista->proximo; // autalizando o n�
	}
	printf("\n----------------------------------\n");
}

t_No* ultimoNoDaLista(t_No **lista) {
	t_No *aux = *lista;
	while(aux->proximo)  
		aux = aux->proximo; // autalizando o n�
    return aux;
}

// procedimento para imprimir.
void imprimirLista_Contrario(t_No *lista) {
	
	printf("\n-------------F I M-- LISTA -------\n");
	while(lista) { // lista != NULL
		printf("%d ", lista->valor); // imprimir dado
		lista = lista->anterior; // autalizando o n�
	}
	printf("\n----------------------------------\n");
}

// funcao para buscar.
t_No *buscar(t_No **lista, int valor) {
	t_No *no = NULL; // endere�o de memoria onde salvaremos o n� caso o valor exista.
	t_No *aux = *lista; // var auxiliar para o loop.
	
	// fazendo loop para verificar se aux -> existe && aux->valor != valor/ Se s, percorre para o proximo n�
	while(aux && aux->valor != valor)
		aux = aux->proximo; // atribuindo o valor de aux para o proximo n� para percorrer a lista
	
	if(aux) // aux existe? dps do loop, se sim, ent o aux->valor ==  valor, achamos o n�
		no = aux; // atribuindo
	
	return no;
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
		printf("\nError ao alocar mem�ria\n");
}
*/

// professor utilizou void. Mas, achei utilizar int melhor, pois retorno nas condi��es.
int inserirOrdenado(t_No **lista, int num) {
	
	// var aux recebe lista, novo ser� para receber os valores
	t_No *aux = *lista, *novo = (t_No*)malloc(sizeof(t_No*));
	
	if(novo) { // aloca��o deu certo
		novo->valor = num; // atribuindo o valor
		if(!*lista) { // lista est� vazia? 
			// s
            novo->anterior = NULL;
			novo->proximo = NULL; // o final � nulo
			*lista = novo; // lista recebe o valor
			return 1;
		}
		
		if(novo->valor < (*lista)->valor) { // novo->valor (valor da var num) � menor que o num do primeiro No? (*lista)->valor
			// s
			novo->proximo = *lista; // o proximo n� aponta para lista
            (*lista)->anterior = novo;
			*lista = novo; // e lista recebe o novo n�
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
		novo->proximo = aux->proximo; // novo->proximo recebe o proximo no
		if(aux->proximo)	
       	 	aux->proximo->anterior = novo;
        novo->anterior = aux;
		aux->proximo = novo; // e o n� recebe novo.
		return 1;	
	} 
	
	printf("\nError ao alocar memoria");
	return 0;
}

/*
	 N�o tem indice, logo.
	Terei que remover o valor q o usu digita.
	
	fun��o para remover -> retorna um ponteiro tipo no.
*/

t_No *remover(t_No **lista, int valor) {
	t_No *remover = NULL, *aux = *lista;
	
	// lista � diferente de NULL -> lista n�o est� vazia.
	if(*lista) {
		
		if((*lista)->valor == valor) { // 1 valor � igual ao valor que quer ser removido?
			remover = *lista; // recebe o conteudo da lista
			*lista= remover->proximo; // lista -> aponta para o proximo n�.

            if(*lista) // se ainda tiver ainda um n�
                (*lista)->anterior = NULL; // se existir o N� vai receber null.
            
		} else {
			
			// 2 verifica��es aux->proximo != NULL e aux->proximo->valor dif do valor
			// aux->proximo->valor, utiliza assim, pois � depois do 1 n�.
			while(aux->proximo && aux->proximo->valor != valor)
				aux = aux->proximo; // autalizando
				
			// loop falhou o valor do proximo � igual o valor que queremos remover, e aux->proximo existe.
			if(aux->proximo) {
				remover = aux->proximo; // ponteiro remover -> recebe o proximo no
				aux->proximo = remover->proximo; // aux->proximo -> aponta paro o proximo n� do remover.

                // se remover->proximo for NULL -> o aux->proximo = NULL.
                if(aux->proximo) // se n�o for NULL
                    aux->proximo->anterior = aux; // autaliza o anterior.
			}
		}
		
	} else
		printf("\n Lista vazia...");
	
	return remover;
}

void menu(t_No *lista) {
	
	int opcao, dado, ant;
	t_No *remove;
	
	do {
		printf("\n\t[0.] - Sair\n\t[1.] - Inserir-Inicio\n\t[2.] - Inserir-Meio\n\t[3.] - Inserir-Fim\n\t[4.] - Inserir-Ordenado\n\t[5.] - Remover\n\t[6.] - Buscar\n\t[7.] - Imprimir\n\t[8.] - ImprimirContr�rio\n\nInforme: ");
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
				remove = remover(&lista, dado);
				if(remove) {
					printf("Elemento a ser removido: %d\n", remove->valor);
					free(remove); // liberar a memoria.
				} else
					printf("\nElemento n�o existe!\n");
				
				break;
				
			case 6 :
				printf("\nDigite o dado que quer buscar: ");
				scanf("%d", &dado);
				remove = buscar(&lista, dado);
				
				if(remove) 
					printf("\nElemento encotrado: %d\n", remove->valor);
				else
					printf("\nElemento %d nao existe na lista\n", dado);
				break;
				
			case 7 : imprimirLista(lista); break;

            case 8 : imprimirLista_Contrario(ultimoNoDaLista(&lista)); break;
            
			default:
				
				printf("Saindo...");
				break;
		}
		
	} while(opcao);
	
}

int main() {
	
	setlocale(0, "Portuguese");
	t_No *lista = NULL;
	
	menu(lista);
	
	
	imprimirLista(lista);
	return 0;
}
