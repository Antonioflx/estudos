#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
		Aula 261: Tabela Hash com lista encadeada

*/

// criar a estrutura do no
typedef struct no {
	int chave; // dado
	struct no *proximo; // ponteiro para nó seguinte
} t_No;

// estrutura da lista
typedef struct {
	t_No *inicio; // ponteiro que aponta para o inicio
	int tamLista; // tamanho da lista
} t_Lista;

// tamanho do vetor -> 2 * 15 = 30 (31)
// constante -> Não é possivel modificar.
#define TAM 31 // sempre terá o valor 31.

/*
	Toda vez que crio uma var
		-> Existe um espaço de memória associada a ela
		
	Constante
		-> Não existe uma região de memória associada essa constante.
*/

// criar a lista
void criarLista(t_Lista *lista) {
	lista->inicio = NULL;
	lista->tamLista = 0;
}

// procedimento para inserir na lista
int inserirDadoLista(t_Lista *lista, int valor) {
	t_No *novo = (t_No*)malloc(sizeof(t_No));
	
	// inserção no inicio.
	if(novo) {
		novo->chave = valor;
		novo->proximo = lista->inicio;
		lista->inicio = novo;
		lista->tamLista++;
		return 1;
	}
	
	
	printf("\nERROR ao alocar memória");
	return 0;
}

// buscar elemento da lista
int buscarDadoLista(t_Lista *lista, int valor) {
	// percorrer a lista para buscar o valor
	t_No *aux = lista->inicio;
	
	while(aux && aux->chave != valor)
		aux = aux->proximo;
		
	// valor encontrado
	if(aux)  {
		printf("\nDado [%d] foi encontrado!", aux->chave);
		return aux->chave;
	}
		
	// dado não foi encontrado
	printf("\nDado não foi encontrado...");
	return -1;		
}

// procedimento para imprimir lista

void imprimirLista(t_Lista *lista) {
	t_No *aux = lista->inicio;
	printf(" Tam: %d: ", lista->tamLista);
	while(aux) {
		printf("%d -> ", aux->chave);
		aux = aux->proximo;
	}
}

// procedimento para criar Tabela

void criandoTabela(t_Lista vetorTabela[]) {	

	// nesse código valores da tabelaHash > 0
	// logo para informar que está vazia será igual a 0
	for(int i = 0; i < TAM; i++) 
		criarLista(&vetorTabela[i]); // professor colocou criarLista(&vetorTabela[i]);
}

// só imprimindo os dados da tabela
int imprimirTabela(t_Lista vetorTabela[]) {
	
	for(int i = 0; i < TAM; i++) {
		printf("%2d = ", i + 1);
		imprimirLista(&vetorTabela[i]);
		printf("\n");
	}
		
		
	return 1;
}

// funcao para retornar o indice -> funcaoHash
// chave % Tamanho do vetor;
int indice_funcaoHash(int chave) {
	return chave % TAM; // chave % TAM -> Tamanho do vetor
}

void inserirDadoTabela(t_Lista tabelaHash[], int valor) {
	int id = indice_funcaoHash(valor); // recebendo o indice
	printf("\nIndice gerado: *%d*\n", id);
	// caso id seja igual em valores diferentes -> COLISAO
	
	// fazer a 2 forma para tratar COLISAO -> lista encadeda
	inserirDadoLista(&tabelaHash[id], valor);
		
}

// return int -> valor, return 0 -> vazio.
int buscarDadoTabela(t_Lista tabelaHash[], int chave) {
	int id = indice_funcaoHash(chave); // recebendo o indice
	printf("\nIndice gerado: *%d*\n", id);
	return buscarDadoLista(&tabelaHash[id], chave);
}

void menu(t_Lista tabelaHash[]) {
	int opcao, valor;
	
	do {
		printf("\n ---------- M E N U ------------ \n|\t\t\t\t|\n");
		printf("|  [0.] - Sair\t\t\t| \n|  [1.] - Inserir Dado\t\t|\n|  [2.] - Buscar Dado\t\t|\n|  [3.] - Imprimir Tabela\t|\n|\t\t\t\t|");
		printf("\n ------------------------------- \n\n");
		printf("Informe: ");
		scanf("%d", &opcao);
		fflush(stdin);
		
		switch(opcao) {
			
			case 1 :
				printf("\nInforme o dado: ");
				scanf("%d", &valor);
				fflush(stdin);
				inserirDadoTabela(tabelaHash, valor);
				break;
			
			case 2 :
				printf("\nInforme o dado: ");
				scanf("%d", &valor);
				fflush(stdin);
				buscarDadoTabela(tabelaHash, valor);
				break;
				
			case 3: imprimirTabela(tabelaHash); break;
			
			case 0 : printf("Saindo..."); break;
			default:
				printf("\nDigite um valor válido...\n");
				break;
		}
		
	} while(opcao);
	
}	

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Codigo
	t_Lista tabela[TAM];
	criandoTabela(tabela);
	
	menu(tabela);

	return 0;
} 
