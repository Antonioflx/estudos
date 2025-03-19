#include 	<stdio.h>
#include	<stdlib.h>

/*
		Aula 255: Lista Simplesmente Encadeada
		Dividir uma Lista L nas listas Par e Impar.
		
		
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

// funcao para buscar.
t_No *buscar(t_No **lista, int valor) {
	t_No *no = NULL; // endereço de memoria onde salvaremos o nó caso o valor exista.
	t_No *aux = *lista; // var auxiliar para o loop.
	
	// fazendo loop para verificar se aux -> existe && aux->valor != valor/ Se s, percorre para o proximo nó
	while(aux && aux->valor != valor)
		aux = aux->proximo; // atribuindo o valor de aux para o proximo nó para percorrer a lista
	
	if(aux) // aux existe? dps do loop, se sim, ent o aux->valor ==  valor, achamos o nó
		no = aux; // atribuindo
	
	return no;
}

// procedimento para inserir ordenado
void inserirOrdenado(t_No **lista, int num) {
	t_No *aux = *lista, *novo = (t_No*)malloc(sizeof(t_No*)); // var aux e novo nó
	
	if(novo) {
		novo->valor = num; // novo nó recebe o valor num
		
		// lista está vazia?
		if(!*lista) {
			
			// s -> proximo nó é null
			novo->proximo = NULL;
			*lista = novo; // lisa recebe o conteudo
		} else if(novo->valor < (*lista)->valor) {
			// lista não está vazia, o primeiro valor do 1 nó é > que o novo->valor?
			// s
			novo->proximo = *lista; // proximo será a lista
			*lista = novo; // lista recebe novo.
		} else {
			
			/*
				loop para fazer 2 verificações
					1. aux->proximo -> existe um próximo nó?
					2. novo->valor >  aux->proximo->valor // o valor do no criado atual é maior que o próximo valor do próximo nó?
					
					S -> percorre. até uma das condiçÕes falhar
						1. Não existe outro nó, ou seja, novo->valor é o maior nó
						2. Existe outro nó, mas o valor de novo->valor 	é menor que o valor do próximo no aux->proximo->valor.
			*/
			while(aux->proximo && novo->valor > aux->proximo->valor)
				aux = aux->proximo;
				
			// falhou o loop por uma das condiçõES
			novo->proximo = aux->proximo; // novo->proximo recebe o proximo no
			aux->proximo = novo; // proximo nó será o nov.
		}
	} else
		printf("\nError ao alocar memória\n");
}


// professor utilizou void. Mas, achei utilizar int melhor, pois retorno nas condições.
//int inserirOrdenado(t_No **lista, int num) {
//	
//	// var aux recebe lista, novo será para receber os valores
//	t_No *aux = *lista, *novo = (t_No*)malloc(sizeof(t_No*));
//	
//	if(novo) { // alocação deu certo
//		novo->valor = num; // atribuindo o valor
//		if(!*lista) { // lista está vazia? 
//			// s
//			novo->proximo = NULL; // o final é nulo
//			*lista = novo; // lista recebe o valor
//			return 1;
//		}
//		
//		if(novo->valor < (*lista)->valor) { // novo->valor (valor da var num) é menor que o num do primeiro No? (*lista)->valor
//			// s
//			novo->proximo = *lista; // o proximo nó aponta para lista
//			*lista = novo; // e lista recebe o novo nó
//			return 1;
//		}
//		
//		/*
//			loop para fazer 2 verificações
//				1. aux->proximo -> existe um próximo nó?
//				2. novo->valor >  aux->proximo->valor // o valor do no criado atual é maior que o próximo valor do próximo nó?
//				
//				S -> percorre. até uma das condiçÕes falhar
//					1. Não existe outro nó, ou seja, novo->valor é o maior nó
//					2. Existe outro nó, mas o valor de novo->valor 	é menor que o valor do próximo no aux->proximo->valor.
//				
//		*/
//		while(aux->proximo && novo->valor > aux->proximo->valor)
//			aux = aux->proximo; // autalizando o nó
//		
//		// falhou o loop por uma das condiçõES
//		novo->proximo = aux->proximo; // novo->proximo recebe o proximo no
//		aux->proximo = novo; // e o nó recebe novo.
//		return 1;	
//	} 
//	
//	printf("\nError ao alocar memoria");
//	return 0;
//}

/*
	 Não tem indice, logo.
	Terei que remover o valor q o usu digita.
	
	função para remover -> retorna um ponteiro tipo no.
*/

t_No *remover(t_No **lista, int valor) {
	t_No *remover = NULL, *aux = *lista;
	
	// lista é diferente de NULL -> lista não está vazia.
	if(*lista) {
		
		if((*lista)->valor == valor) { // 1 valor é igual ao valor que quer ser removido?
			remover = *lista; // recebe o conteudo da lista
			*lista= remover->proximo; // lista -> aponta para o proximo nó.		
		} else {
			
			// 2 verificações aux->proximo != NULL e aux->proximo->valor dif do valor
			// aux->proximo->valor, utiliza assim, pois é depois do 1 nó.
			while(aux->proximo && aux->proximo->valor != valor)
				aux = aux->proximo; // autalizando
				
			// loop falhou o valor do proximo é igual o valor que queremos remover, e aux->proximo existe.
			if(aux->proximo) {
				remover = aux->proximo; // ponteiro remover -> recebe o proximo no
				aux->proximo = remover->proximo; // aux->proximo -> aponta paro o proximo nó do remover.
			}
		}
		
	} else
		printf("\n Lista vazia...");
	
	return remover;
}

/*
	Procedimento que recebe uma função como parametro
	
	tipo nomeFuncaoPrincipal(tipo (*nomeFuncaoParametro)(parametros, ex: t_No **, int), parametros da funçãoPrincipal, ex: t_No **lista, int valor) 
	{
		BLOCO
		
		Ex:
		nomeFuncaoParametro(listaPar, valor);
	}
*/
void inserir_AcordoComAFuncao(void (*operacao)(t_No **, int), t_No **listaPar, t_No **listaImpar, int valor) {
	if(valor % 2 == 0)
		operacao(listaPar, valor);
	else
		operacao(listaImpar, valor);
}

// Professor fez um loop...

void menu(t_No *lista) {
	
	int opcao, dado, ant;
	t_No *remove, *listaPar, *listaImpar;
	listaPar = listaImpar = NULL;
	
	do {
		printf("\n\t[0.] - Sair\n\t[1.] - Inserir-Inicio\n\t[2.] - Inserir-Meio\n\t[3.] - Inserir-Fim\n\t[4.] - Inserir-Ordenado\n\t[5.] - Remover\n\t[6.] - Buscar\n\t[7.] - Imprimir\n\nInforme: ");
		scanf("%d", &opcao);
		
		switch(opcao) {
			
			case 1 :
				printf("\nDigite um dado: ");
				scanf("%d", &dado);
				
				inserir_AcordoComAFuncao(inserirInicio, &listaPar, &listaImpar, dado);
				break;
			
			case 2 :	
				printf("\nDigite um dado: ");
				scanf("%d", &dado);
				printf("\nQual o dado anterior?  ");
				scanf("%d", &ant);	
				if(dado % 2 == 0)
					inserirMeio(&listaPar, dado, ant);
				else
					inserirMeio(&listaPar, dado, ant);
			
				break;
				
			case 3 :
				printf("\nDigite um dado: ");
				scanf("%d", &dado);
				
				inserir_AcordoComAFuncao(inserirFim, &listaPar, &listaImpar, dado);
				
				break;
				
			case 4 :
				printf("\nDigite um dado: ");
				scanf("%d", &dado);
				
				inserir_AcordoComAFuncao(inserirOrdenado, &listaPar, &listaImpar, dado);
			
			case 5 :
				printf("\nDigite um dado para ser removido: ");
				scanf("%d", &dado);
				remove = remover(&listaPar, dado);
				if(remove) {
					printf("Elemento a ser removido: %d\n", remove->valor);
					free(remove); // liberar a memoria.
				} else
					printf("\nElemento não existe!\n");
				
				break;
				
			case 6 :
				printf("\nDigite o dado que quer buscar: ");
				scanf("%d", &dado);
				remove = buscar(&listaImpar, dado);
				
				if(remove) 
					printf("\nElemento encotrado: %d\n", remove->valor);
				else
					printf("\nElemento %d nao existe na lista\n", dado);
				break;
				
			case 7 :
				printf("\nLista Par: \n");
				imprimirLista(listaPar);
				
				printf("\nLista Impar: \n");
				imprimirLista(listaImpar);
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
