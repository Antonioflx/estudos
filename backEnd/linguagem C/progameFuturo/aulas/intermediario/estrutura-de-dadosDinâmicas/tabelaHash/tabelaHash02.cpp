#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
		Aula 260: Tabela Hash linear com vetor

*/

// tamanho do vetor -> 2 * 15 = 30 (31)

// constante -> N�o � possivel modificar.
#define TAM 31 // sempre ter� o valor 31.

/*
	Toda vez que crio uma var
		-> Existe um espa�o de mem�ria associada a ela
		
	Constante
		-> N�o existe uma regi�o de mem�ria associada essa constante.
*/

// procedimento para criar Tabela

void criandoTabela(int vetorTabela[]) {	

	// nesse c�digo valores da tabelaHash > 0
	// logo para informar que est� vazia ser� igual a 0
	for(int i = 0; i < TAM; i++) 
		vetorTabela[i] = 0;
}

// s� imprimindo os dados da tabela
int imprimirTabela(int vetorTabela[]) {
	
	for(int i = 0; i < TAM; i++)
		printf("[%d] - %d\n", i + 1, vetorTabela[i]);
		
	return 1;
}

// funcao para retornar o indice -> funcaoHash
// chave % Tamanho do vetor;
int indice_funcaoHash(int chave) {
	return chave % TAM; // chave % TAM -> Tamanho do vetor
}

void inserirDadoTabela(int tabelaHash[], int valor) {
	int id = indice_funcaoHash(valor); // recebendo o indice
	
	// caso id seja igual em valores diferentes -> COLISAO
	
	// Fazer a 1 forma -> Que n�o ocorra a colisao.
	while(tabelaHash[id] != 0) 
		// precisamos acrescentar o indice
		// professor fez
		// id = indice_funcaoHash(id + 1);
		// N�o � s� acrescentar +1 no id mesmo n?
		id++;
	
	// quando o while se tornar falso, ou seja, a posi��o onde ser� inserido est� vazio
	// a tabela recebe o valor.
	tabelaHash[id] = valor;
		
}

// return int -> valor, return 0 -> vazio.
int buscarDadoTabela(int tabelaHash[], int chave) {
	int id = indice_funcaoHash(chave); // recebendo o indice
	
	// achar o valor
	/*
		Professor fez assim
		while(tabelaHash[id] != 0) {
			if(tabelaHash[id] == chave)
				return tabelaHash[id];
			else
				id++;
	*/
	
	// como pensei
//	while(tabelaHash[id] != 0 && tabelaHash[id] != chave)
//		id++;
//	
//	return tabelaHash[id] == 0 ? 0 : tabelaHash[id];
	
	
	// faz sentido utilizar tabelaHash[id] != 0, 
	// pq vai percorrer do indice at� achar o valor, caso chegue em uma parte onde contenha 0 no indice, significa que n�o tem o valor 
	// com isso quebra o loop logo em vez de percorrer at� achar.
	while(tabelaHash[id] != 0) {
		if(tabelaHash[id] == chave) {
		 	// verificando se na posi��o � igual a chave
		 	// s -> retorna
		 	printf("\nDado [%d] est� na posi��o [%d]\n", chave, id + 1 );
			return tabelaHash[id];
		}
		// n -> acrescenta + 1
		id++;
	}
	// se retornar 0 � pq n achou.
	printf("\nDado [%d] n�o foi encotrado", chave);
	return 0;
}

void menu(int tabelaHash[]) {
	int opcao, valor;
	
	do {
		printf("\n ---------- M E N U ------------ \n|\t\t\t\t|\n");
		printf("|  [1.] - Inserir Dado\t\t|\n|  [2.] - Buscar Dado\t\t|\n|  [3.] - Imprimir Tabela\t|\n|\t\t\t\t|");
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
	int tabela[TAM];
	

	// para colocar que o vetor est� vazio pode ser 0 ou -1. Depende de como vai ser
	// Em um ponteiro -> Seria apenas percorrer o vetor e colocar NULL;
	
	// Nesse caso, iremos utilizar apenas valores > 0. Ent, pode usar 0
	
	criandoTabela(tabela);
	menu(tabela);
//	imprimindoTabela(tabela);
	return 0;
} 
