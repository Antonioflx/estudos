#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
		Eu: Tabela Hash -> lista encadeada com Strings
			-> Precisa de um identificador para achar o dado
			-> Ex: CPF , id, etc.
			
			Nesse caso, terá que fazer uma copia -> strcpy(destino, origem);
			Identificador será a "". String vazia.
			
		
		Nesse código
			indice_funcaoHash -> Utiliza para colisao
			
			indice_funcaoHashString -> Utiliza para inserir e buscar dado.
*/

// estrutura pessoa
typedef struct {
	char nome[20];
} t_Pessoa;

// estrutura nó
typedef struct no {
	t_Pessoa pessoa; // dado pessoa
	struct no *proximo; // ponteiro q aponta para o proximo
} t_No;

// estrutura lista
typedef struct {
	t_No *inicio;
	int tamLista;
} t_Lista;


// ------------------ Funções e procedimentos para Lista -------------- //
// procedimento para criar lista
void criarLista(t_Lista *lista) {
	lista->inicio = NULL;
	lista->tamLista = 0;
}

// funcao para pegar os dados do usuario
t_Pessoa pegarDadosPessoa() {
	t_Pessoa pessoaDado;
	printf("\nInforme o seu nome: ");
	scanf("%19[^\n]", pessoaDado.nome);
	
	return pessoaDado;
	
}


// funcao para inserir o dado na lista (INICIO)
int inserirDadoLista(t_Lista *lista, t_Pessoa pessoa) {
	t_No *novo = (t_No*)malloc(sizeof(t_No));
	if(novo) {
		novo->pessoa = pessoa; // atribuindo os dados
		novo->proximo = lista->inicio; // fazendo que o no aponte para o inicio 
		lista->inicio = novo; // autalizando o inicio
		lista->tamLista++; // acrescentando o tamanhao.
		return 1;
	}
	
	printf("\n[ERROR] -> Problema na alocação de memória ");
	return 0;
	
}

// funcao para buscar dado na lista
char* buscarDadoLista(t_Lista *lista, char stringNome[]) {
	t_No *aux = lista->inicio;
	
	while(aux && (strcmp(aux->pessoa.nome, stringNome) != 0))
		aux = aux->proximo;
	
	// dado foi encontrado, pq aux ainda existe
	if(aux) {
		printf("\nNome [%s] foi encontrado.", aux->pessoa.nome);
		return aux->pessoa.nome;
	}
	
	// dado não foi encontrado
	printf("\nDado não foi encontrado...");
	return NULL; 
}

// procedimento para imprimir lista

void imprimirLista(t_Lista *lista) {
	t_No *aux = lista->inicio;
	printf(" Tam: %d: ", lista->tamLista);
	while(aux) {
		printf("%s -> ", aux->pessoa.nome);
		aux = aux->proximo;
	}
}


// ------------------ Funções e procedimentos para TabelaHash -------------- //

// tamanho do vetor -> 2 * 15 = 30 (31)

// constante -> Não é possivel modificar.
#define TAM 31 // sempre terá o valor 31.

/*
	Toda vez que crio uma var
		-> Existe um espaço de memória associada a ela
		
	Constante
		-> Não existe uma região de memória associada essa constante.
*/


// ------------- Funções e procedimento para a tabela hash -------

// procedimento para criar Tabela

void criandoTabela(t_Lista vetorTabela[]) {	

	// para informar que está vazia od id será igual a 0
	for(int i = 0; i < TAM; i++) 
		criarLista(&vetorTabela[i]); // colocar a string vazia em cada posição
}


// só imprimindo os dados da tabela
int imprimirTabela(t_Lista vetorTabela[]) {
	for(int i = 0; i < TAM; i++) {
		printf("[%2d.] ", i + 1);
		imprimirLista(&vetorTabela[i]);
		printf("\n-----------------------------------\n");
	}		
	return 1;
}

// funcao para retornar o indice -> funcaoHash
// chave % Tamanho do vetor;
int indice_funcaoHash(int chave) { 
	return chave % TAM; // chave % TAM -> Tamanho do vetor
}

// precisamos de um numero para a funcaoHash
// transformar os caracteres em numero
/*
	Tabela ASCII
	Amanda
	
	Multiplica A (1 caractere) pelo código da tabela ASCII
	
	1 ( A ) * CODIGO ASCII
	2 ( M ) * CODIGO ASCII
	3 ( C ) * CODIGO ASCII
*/

int indice_funcaoHashString(char string[]) {
	unsigned int acumuladorHash = 0; // garantir que o numero seja sempre positivo.
	
	for (int i = 0; i < strlen(string); i++) {
		// pegando o codigo de cada caractere e multiplicando por cada posição da string
		acumuladorHash += string[i] * (i + 1); // se %c -> imprimir o caracter, se %d -> o codigo do caractere na tabela ASCII
	}
	
	return acumuladorHash % TAM; // pegando a chave para pgar o indice.
}

void inserirDadoTabela(t_Lista tabelaHash[]) {
	t_Pessoa pessoa = pegarDadosPessoa();
	int indice = indice_funcaoHashString(pessoa.nome); // recebendo o indice
	
	// caso id seja igual em valores diferentes -> COLISAO	
	// fazer a 2 forma para tratar COLISAO -> lista encadeda
	inserirDadoLista(&tabelaHash[indice], pessoa);
		
}

// return ponteiro de Pessoa, pois caso não ache retorna NULL, caso ache devolve o endereço 
void buscarDadoTabela(t_Lista tabelaHash[], char stringNome[]) {
	int indice = indice_funcaoHashString(stringNome);
	printf("\nIndice gerado: *%d*\n", indice + 1);
	buscarDadoLista(&tabelaHash[indice], stringNome);
}

void menu(t_Lista tabelaHash[]) {
	int opcao;
	char nome[20];
	
	do {
		printf("\n ---------- M E N U ------------ \n|\t\t\t\t|\n");
		printf("|  [1.] - Inserir Dado\t\t|\n|  [2.] - Buscar Dado\t\t|\n|  [3.] - Imprimir Tabela\t|\n|\t\t\t\t|");
		printf("\n ------------------------------- \n\n");
		printf("Informe: ");
		scanf("%d", &opcao);
		fflush(stdin);
		
		switch(opcao) {
			
			case 1 :
				fflush(stdin);
				inserirDadoTabela(tabelaHash);
				break;
			
			case 2 :
				printf("\nInforme o Nome: ");
				scanf("%19[^\n]", nome);
				fflush(stdin);
				buscarDadoTabela(tabelaHash, nome);
				break;
				
			case 3: imprimirTabela(tabelaHash); break;
			
			default:
				printf("\nSaindo...\n");
				break;
		}
		
	} while(opcao);
	
}	

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Codigo
	t_Lista tabela[TAM];
	

	// para colocar que o vetor está vazio pode ser 0 ou -1. Depende de como vai ser
	// Em um ponteiro -> Seria apenas percorrer o vetor e colocar NULL;
	
	// Nesse caso, iremos utilizar apenas valores > 0. Ent, pode usar 0
	
	criandoTabela(tabela);
	menu(tabela);
//	imprimindoTabela(tabela);
	return 0;
} 
