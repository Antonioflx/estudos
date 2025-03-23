#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
		Aula 262: Tabela Hash linear com Strings
			-> Precisa de um identificador para achar o dado
			-> Ex: CPF , id, etc.
			
			Nesse caso, ter� que fazer uma copia -> strcpy(destino, origem);
			Identificador ser� a "". String vazia.
			
		
		Nesse c�digo
			indice_funcaoHash -> Utiliza para colisao
			
			indice_funcaoHashString -> Utiliza para inserir e buscar dado.
*/

// estrutura pessoa
typedef struct {
	char nome[20];
} t_Pessoa;


// tamanho do vetor -> 2 * 15 = 30 (31)

// constante -> N�o � possivel modificar.
#define TAM 31 // sempre ter� o valor 31.

/*
	Toda vez que crio uma var
		-> Existe um espa�o de mem�ria associada a ela
		
	Constante
		-> N�o existe uma regi�o de mem�ria associada essa constante.
*/

// funcao para retornar pessoa
t_Pessoa lerDadosPessoa() {
	t_Pessoa pessoa;
	printf("\nInforme o nome: ");
	scanf("%19[^\n]", pessoa.nome);
	
	return pessoa;
}

// ------------- Fun��es e procedimento para a tabela hash -------

// procedimento para criar Tabela

void criandoTabela(t_Pessoa vetorTabela[]) {	

	// para informar que est� vazia od id ser� igual a 0
	for(int i = 0; i < TAM; i++) 
		strcpy(vetorTabela[i].nome, ""); // colocar a string vazia em cada posi��o
}

void imprimirDadosPessoa(t_Pessoa *pessoa) {
	printf("\tNome: %s\n", pessoa->nome); 
										
}

// s� imprimindo os dados da tabela
int imprimirTabela(t_Pessoa vetorTabela[]) {
	
	for(int i = 0; i < TAM; i++) {
		printf("[%d.] ", i + 1);
		if(strlen(vetorTabela[i].nome) > 0)
			imprimirDadosPessoa(&vetorTabela[i]);
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
	
	Multiplica A (1 caractere) pelo c�digo da tabela ASCII
	
	1 ( A ) * CODIGO ASCII
	2 ( M ) * CODIGO ASCII
	3 ( C ) * CODIGO ASCII
*/

int indice_funcaoHashString(char string[]) {
	unsigned int acumuladorHash = 0; // garantir que o numero seja sempre positivo.
	
	for (int i = 0; i < strlen(string); i++) {
		// pegando o codigo de cada caractere e multiplicando por cada posi��o da string
		acumuladorHash += string[i] * (i + 1); // se %c -> imprimir o caracter, se %d -> o codigo do caractere na tabela ASCII
	}
	
	return acumuladorHash % TAM; // pegando a chave para pgar o indice.
}

void inserirDadoTabela(t_Pessoa tabelaHash[]) {
	t_Pessoa pessoa = lerDadosPessoa();
	
	int indice = indice_funcaoHashString(pessoa.nome); // recebendo o indice
	
	// caso id seja igual em valores diferentes -> COLISAO
	
	// Fazer a 1 forma -> Que n�o ocorra a colisao.
	// verificar se tamanho do nome em X posi��o � maior que 0 vazia. 
	// strlen(tabelaHash[indice].nome)
	// se tiver "" ser� == 0
	
	while(strlen(tabelaHash[indice].nome) > 0) 
		indice++;
	
	// quando o while se tornar falso, ou seja, a posi��o onde ser� inserido est� vazio
	// a tabela recebe o valor.
	tabelaHash[indice] = pessoa;
		
}

// return ponteiro de Pessoa, pois caso n�o ache retorna NULL, caso ache devolve o endere�o 
t_Pessoa* buscarDadoTabela(t_Pessoa tabelaHash[], char chave[]) {
	
	int indice = indice_funcaoHashString(chave); // recebendo o indice
	
	// achar o valor
	while(strlen(tabelaHash[indice].nome) > 0) {
		if(strcmp(tabelaHash[indice].nome,chave) == 0) {
		 	// verificando se na posi��o � igual a chave
		 	// s -> retorna
		 	printf("\nNome: %s est� na posi��o [%d]\n", chave, indice + 1 );
			return &tabelaHash[indice];
		}
		// n -> acrescenta + 1 caso a verifica��o de cima seja falso
		indice++;
	}
	// se retornar 0 � pq n achou.
	printf("\nDado n�o foi encotrado");
	return NULL;
}

void menu(t_Pessoa tabelaHash[]) {
	int opcao;
	char nome[20];
	t_Pessoa *buscaDadoTabela; // para receber o dado  da Tabela. 
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
				buscaDadoTabela = buscarDadoTabela(tabelaHash, nome);
				if(buscaDadoTabela)
					imprimirDadosPessoa(buscaDadoTabela);
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
	t_Pessoa tabela[TAM];
	

	// para colocar que o vetor est� vazio pode ser 0 ou -1. Depende de como vai ser
	// Em um ponteiro -> Seria apenas percorrer o vetor e colocar NULL;
	
	// Nesse caso, iremos utilizar apenas valores > 0. Ent, pode usar 0
	
	criandoTabela(tabela);
	menu(tabela);
//	imprimindoTabela(tabela);
	return 0;
} 
