#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
		Aula 262: Tabela Hash linear com struct
			-> Precisa de um identificador para achar o dado
			-> Ex: CPF , id, etc.
			
			Nesse caso, eu utilizei o id para identificar a pessoa
*/

// estrutura pessoa
typedef struct {
	int age;
	int id; // identificador da pessoa.
	char nome[20];
} t_Pessoa;


// tamanho do vetor -> 2 * 15 = 30 (31)

// constante -> Não é possivel modificar.
#define TAM 31 // sempre terá o valor 31.

/*
	Toda vez que crio uma var
		-> Existe um espaço de memória associada a ela
		
	Constante
		-> Não existe uma região de memória associada essa constante.
*/

// funcao para retornar pessoa
t_Pessoa lerDadosPessoa() {
	t_Pessoa pessoa;
	printf("\nInforme o nome: ");
	scanf("%19[^\n]", pessoa.nome);
	
	printf("Informe a idade: ");
	scanf("%d", &pessoa.age);
	fflush(stdin);
	
	printf("Informe o seu id: ");
	scanf("%d", &pessoa.id);
	fflush(stdin);
	
	return pessoa;
}

// ------------- Funções e procedimento para a tabela hash -------

// procedimento para criar Tabela

void criandoTabela(t_Pessoa vetorTabela[]) {	

	// para informar que está vazia od id será igual a 0
	for(int i = 0; i < TAM; i++) 
		vetorTabela[i].id = 0; // inicializando o id = 0 em cada posição do vetor.
}

// procedimento para imprimir os dados
void imprimirDadosPessoa(t_Pessoa *pessoa) {
	printf("Id: %d - Nome: %s\tIdade: %d\n", 
										pessoa->id , 
										pessoa->nome , 
										pessoa->age);
}

// só imprimindo os dados da tabela
int imprimirTabela(t_Pessoa vetorTabela[]) {
	
	// loop para imprimir os dados
	for(int i = 0; i < TAM; i++) {
		printf("[%d.] ", i + 1); // indice
		if(vetorTabela[i].id != 0) // verificar se o id é dif de 0
		// ou seja, tem dado. Imprimir os dados
			imprimirDadosPessoa(&vetorTabela[i]);
		// caso não seja, n aconteça nada para n imprimir lixo de memoria
		printf("\n-----------------------------------\n");
	}
		
		
	return 1;
}

// funcao para retornar o indice -> funcaoHash
// chave % Tamanho do vetor;
int indice_funcaoHash(int chave) {
	return chave % TAM; // chave % TAM -> Tamanho do vetor
}

void inserirDadoTabela(t_Pessoa tabelaHash[]) {
	t_Pessoa pessoa = lerDadosPessoa();
	
	int indice = indice_funcaoHash(pessoa.id); // recebendo o indice
	
	// caso id seja igual em valores diferentes -> COLISAO
	
	// Fazer a 1 forma -> Que não ocorra a colisao.
	while(tabelaHash[indice].id != 0) // verificar se o id é dif de 0
		indice++;
	
	// quando o while se tornar falso, ou seja, a posição onde será inserido está vazio
	// a tabela recebe pessoa.
	tabelaHash[indice] = pessoa;
		
}

// return ponteiro de Pessoa, pois caso não ache retorna NULL, caso ache devolve o endereço 
t_Pessoa* buscarDadoTabela(t_Pessoa tabelaHash[], int chave) {
	
	int indice = indice_funcaoHash(chave); // recebendo o indice
	
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
	
	
	// verifica se o id é dif de 0
	while(tabelaHash[indice].id != 0) {
		if(tabelaHash[indice].id == chave) { // e o id for igual a chave.
		 	// verificando se na posição é igual a chave
		 	// s -> retorna
		 	printf("\nDado [%d] está na posição [%d]\n", chave, indice + 1 );
			return &tabelaHash[indice];
		}
		// n -> acrescenta + 1
		indice++;
	}
	// se retornar 0 é pq n achou.
	printf("\nDado não foi encotrado");
	return NULL;
}

void menu(t_Pessoa tabelaHash[]) {
	int opcao, id;
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
				printf("\nInforme o ID: ");
				scanf("%d", &id);
				fflush(stdin);
				buscaDadoTabela = buscarDadoTabela(tabelaHash, id);
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
	

	// para colocar que o vetor está vazio pode ser 0 ou -1. Depende de como vai ser
	// Em um ponteiro -> Seria apenas percorrer o vetor e colocar NULL;
	
	// Nesse caso, iremos utilizar apenas valores > 0. Ent, pode usar 0
	
	criandoTabela(tabela);
	menu(tabela);
//	imprimindoTabela(tabela);
	return 0;
} 
