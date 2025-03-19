#include 	<stdio.h>
#include	<stdlib.h>
#include 	<locale.h>
/*
		Aula 258: Lista Circular
		
*/

// estrutura para o no
typedef struct no {
	int valor; // dado
	struct no *proximo; // ponteiro para apontar para o proximo no
} t_No;

// agora temos a nossa struct própria de lista

typedef struct {
	t_No *inicio; // ponteiro que aponta para o inicio.
	t_No *fim; // indicação para o final da lista.
	int tam; // tamanho	
} t_Lista;

// procedimento para incializar a lista

void criarLista (t_Lista *lista) {
	lista->inicio = NULL;
	lista->fim = NULL;
	lista->tam = 0;
}

// funcao para retornar o tamanho da lista, verificando  se está vazia ou n.
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
		
		lista->inicio = novo; // inicio da lista recebe o novo nó
		
		// verificar se é o 1 dado que está sendo inserido na lista
		if(!lista->fim)
			lista->fim = novo; // se for, o fim aponta para o novo nó
		
		lista->fim->proximo = lista->inicio; // a lista que está no fim, o seu próximo apontará para lista->inicio (inicio)
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
			lista->inicio = novo;  // *lista  recebe o novo nó
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
		lista->tam++; // incremetando o tamanho.
			
		
		
	} else
		printf("\nERROR ao alocar memória\n");
	
}


// procedimento para inserir no final
void inserirFim (t_Lista *lista, int num) {
	t_No *aux = lista->inicio;
	t_No *novo = (t_No*)malloc(sizeof(t_No));
	
	if(novo) {
		// dados
		novo->valor = num; // valor
		
		// verificar se a lista está vazia
		if(!isVazia(lista))  {
			lista->inicio = novo; // recebe o conteudo novo.
			lista->fim = novo; // tbm aponta para o novo nó
			lista->fim->proximo = lista->inicio; // o proximo nó (fim) aponta para o inicio.
		}
		else { // lista está preenchida.
			// n precisamos fazer um loop até o final, pq eu sei quem é o final. lista->fim.
			lista->fim->proximo = novo; // o fim->proximo recebe o novo nó inserido no final.
			lista->fim = novo; // o fim recebe o novo nó tbm
			// autalizando o nó fim -> proximo
			// lista->fim->proximo = lista->inicio
			novo->proximo = lista->inicio;
			
		} 		
		lista->tam++; // incremetando
	} else 
		printf("\nERRO ao alocar memória\n");
	
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
			aux = aux->proximo; // autalizando o nó
		
			// falhou o loop por uma das condiçõES	
			novo->proximo = aux->proximo;		
			aux->proximo = novo;
		}
		
		lista->tam++;
	} else
		printf("\nError ao alocar memória\n");
}
*/


// professor utilizou void. Mas, achei utilizar int melhor, pois retorno nas condições.
int inserirOrdenado(t_Lista *lista, int valor) {
	// var aux recebe lista, novo será para receber os valores
	t_No *aux = lista->inicio, *novo = (t_No*)malloc(sizeof(t_No));
	
	if(novo) { // alocação deu certo
		novo->valor = valor; // atribuindo o valor.
		/* 
				lista está vazia
			ou
		 		novo->valor (valor da var num) é menor que o num do primeiro No? lista->inicio->valor
		*/
		if(!isVazia(lista) || novo->valor < lista->inicio->valor) { // lista está vazia? 
			// s
			inserirInicio(lista, valor); // insere no inicio
			return 1;
		}
		
		/*
			loop para fazer 2 verificaçõe
				1. aux->proximo != lista->inicio // pois é circular, caso seja verdadeiro, então chegamos no final.
				2. novo->valor >  aux->proximo->valor // o valor do no criado atual é maior que o próximo valor do próximo nó?
				
				S -> percorre. até uma das condiçÕes falhar
					1. Não existe outro nó, ou seja, novo->valor é o maior nó
					2. Existe outro nó, mas o valor de novo->valor 	é menor que o valor do próximo no aux->proximo->valor.
				
		*/
		
		while(aux->proximo != lista->inicio && novo->valor > aux->proximo->valor)
			aux = aux->proximo; // autalizando o nó
		
		// falhou o loop por uma das condiçõES	
		
		// caso o valor que foi inserido seja o maior de todos da lista. o aux->proximo será igual a lista->inicio (ou seja, o fim)
		if(aux->proximo == lista->inicio) {
			inserirFim(lista, valor); // insere no fim
			return 1;
		}
		
		/*
			aux->proximo != lista->inicio, ent falhou por novo->valor > aux->proximo->valor
			
			ent
				novo->valor > que o valor que está no NÓ, logo o anterior seria o aux
				
				inserirMeio(lista, valor, aux->valor); No meio, n faz alterações, visto que não é o ultimo.
				lista->tam++;
		*/
		//	forma antiga
		//	novo->proximo = aux->proximo;		
		//	aux->proximo = novo;
		//	lista->tam++;
		
		// utilizando a funcao.
		inserirMeio(lista, valor, aux->valor);
		return 1;
	}
	
	printf("\nErro ao alocar memória");
	return 0;
}

/*
	 Não tem indice, logo.
	Terei que remover o valor q o usu digita.
	
	função para remover -> retorna um ponteiro tipo no.
*/

t_No *remove(t_Lista *lista, int valor) {
	t_No *remover = NULL, *aux = lista->inicio; // no para remover
	
	if(lista->inicio) { // lista está preenchida?
	
		// verificar se possui apenas 1 elemento para ser removido
		if(lista->inicio == lista->fim && lista->inicio->valor == valor) {
			remover = lista->inicio;
			criarLista(lista);
			/*
				criarLista 
					-> lista->inicio = NULL;
					-> lista->fim = NULL;
					-> lista->tam = 0;
			*/
			
			return remover;
		}
		//s
		// Possuirá + de 1 nó. 
		if(lista->inicio->valor == valor) { 
			// o 1 valor do 1 nó é igual ao valor que o usu digitou?
			remover = lista->inicio; // recebe o conteudo da lista
			lista->inicio = remover->proximo; // lista -> aponta para o proximo nó.	
			// precisa alterar o fim
			lista->fim->proximo = lista->inicio;
			lista->tam--; // decrementa o tam
			
			return remover;
		}
		
			
		// 2 verificações aux->proximo != NULL e aux->proximo->valor dif do valor
		// aux->proximo->valor, utiliza assim, pois é depois do 1 nó.
		while(aux->proximo != lista->inicio && aux->proximo->valor != valor)
			aux = aux->proximo;
				
		
		if(aux->proximo->valor == valor) { // aux->proximo->valor == valor
		// s -> ent, encontramos o nó, o qual queremos remover.
			// Existe 2 possibilidades -> O nó está no meio ou no fim
			if(lista->fim == lista->inicio) { // está no fim.
				remover = aux->proximo; // o nó remover vai receber aux->proximo (elemento que queremos resolver)
				// aux->proximo aponta para o inicio (pois ele é o final)
				aux->proximo = remover->proximo; // aux->proximo vai apontar para remover->proximo (aux->proximo->proximo);
				// precisamos autalizar o fim da lista
				lista->fim = aux;
				lista->tam--;	
				return remover;
				
			}
			// pode ser que o nó não esteja no fim
			remover = aux->proximo; // remover vai receber aux->proximo
			aux->proximo = remover->proximo; // aux->proximo vai apontar para remover->proximo (aux->proximo->proximo)
			// n precisa alterar nada no fim.
			lista->tam--;	
			return remover;
		}
		
		
	}
	
	return remover;
}


// função para buscar dado
	
t_No *buscar(t_Lista *lista, int valor) { 
	// var no serve para receber o nó onde o dado está, caso exista. e aux para fazer o loop ate achar.
	t_No *aux = lista->inicio; 
	
	if(!aux) // lista está vazia? S, retorna NULL;
		return NULL;
	
	// A lista possui no
	do { // fazer loop do while para buscar o num
	/*
		Pq do while?
			Faça
				Verifica aux->valor == valor
					S -> return o NÓ
					
					N -> autaliza a lista (aux = aux->proximo)
				
				Enquanto aux != lista->inicio.		
	*/
		if(aux->valor == valor) // verificar se o valor que está dentro do nó é igual ao valor que estamos buscando
			// s
			return aux;
		
		// autalizando a lista, caso não encontre o valor em um nó
		aux = aux->proximo;
	} while(aux != lista->inicio); // enquanto aux for diferente lista->inicio
	
	
	return NULL;
}


// procedimento para imprimir.
void imprimirLista(t_Lista lista) {
	t_No *no = lista.inicio;
	
	printf("\n-------I N I C I O - LISTA tam: %d-------\n", lista.tam);
	if(no) {
		do {
			printf("%d ", no->valor);
			no = no->proximo;
		} while(no != lista.inicio);
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
					printf("\nElemento não existe...");
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
		
	} while(opcao && opcao < 8);
	
}

int main() {
	
	setlocale(0, "Portuguese");
//	t_No *lista = NULL;
	t_Lista lista;
	
	criarLista(&lista);
	menu(lista);
	
	return 0;
}
