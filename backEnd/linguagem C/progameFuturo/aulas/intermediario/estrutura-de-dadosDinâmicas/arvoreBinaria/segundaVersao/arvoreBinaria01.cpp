#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
		Aula 267: Como Inserir em uma Árvore Binária de Busca?
			SEGUNDA VERSAO
			
		// Versão 2.
			No começo a raiz é NULL
			
			raiz 50
			
		Dados < 50			Dados > 50
		
		Inserir na E		Inserir na D	
		
*/

// estrutura de no para arvore
typedef struct no {
	int valor; // dado
	// ponteiros para apontar para a subArvore a esquerda e subArvore a direita
	struct no *esquerda, *direita; 
} t_NoArv;

// funcao para inserir um dado -> Param ( raiz, e dado )
t_NoArv* inserirPrimeiraVersao(t_NoArv *raiz, int dado) {
	// saber onde tem que inserir na arvore
	if(!raiz) { // raiz é nula, ou seja, é o 1 nó
		t_NoArv *aux = (t_NoArv*)malloc(sizeof(t_NoArv)); // alocando memoria
		if(aux) {
			aux->valor = dado; // valor -> recebe dado
			aux->esquerda = NULL; // esquerda será NULL
			aux->direita = NULL; // direita será NULL
			return aux; // retornara o nó.
		}
		
		// alocação deu erro
		printf("\n[ERROR] -> Alocação de memória\n");
		return NULL; // retornara NULL.
	}
	
	// agora, raiz não estará null
	// verificar se vai para a esquerda ou direita
	if(dado < raiz->valor) // esquerda dado < valor do nó.
		raiz->esquerda = inserirPrimeiraVersao(raiz->esquerda, dado);
	
	if(dado > raiz->valor) // direita dado < valor do nó.
		raiz->direita = inserirPrimeiraVersao(raiz->direita, dado);
		
	return raiz;
}

// segunda versão -> ponteiro para ponteiro
// ou seja, alteraremos o conteudo do nó
void inserirSegundaVersao(t_NoArv **raiz, int dado) {
	if(!(*raiz)) 
	{ // raiz é nula, ou seja, é o 1 nó
		// o endereço de memoria alocada será salva no conteudo da raiz. Ou seja, alteramos a variavel Raiz do menu
		*raiz = (t_NoArv*)malloc(sizeof(t_NoArv)); 
		// alterando os dados da raiz.
		(*raiz)->valor= dado;
		(*raiz)->esquerda = NULL;
		(*raiz)->direita = NULL;
	}
	else 
	{
		// agora, raiz não estará null
	// verificar se vai para a esquerda ou direita
	if(dado < (*raiz)->valor) // esquerda dado < valor do nó.
		inserirSegundaVersao(&((*raiz)->esquerda), dado);
	else // direita dado < valor do nó.
		inserirSegundaVersao(&((*raiz)->direita), dado);
	}	
	
}


/*
			
			  50
			
		25			53
				
	10	  30	51	   60
	
		Forma mais facil
			50, 25, 10, 30, 53, 51, 60
			
		Imprimir Ordenada
			1. Esquerda
			2. Raiz
			3. Direita
			
		Tem filho a esquerda? Tem, vou para a raiz. Até encontrar NULL e imprimir a raiz.
		
		
		10, 25, 30, 50, 51, 53, 60
	*/

// imprimir sem ser ordenada.
void imprimirArvore_primeiraVersao(t_NoArv *raiz) {
	if(raiz) { // ou seja raiz existe; imprime o dado
 		printf("%d ", raiz->valor); // imprime o dado
		imprimirArvore_primeiraVersao(raiz->esquerda); // chamada recursiva empilhando os nós das esquerdas e imprimindo
		imprimirArvore_primeiraVersao(raiz->direita); // chamada recursiva empilhando os nós das direitas e imprimindo
	}
}


// imprimir sendo ordenada.
void imprimirArvore_segundaVersao(t_NoArv *raiz) {
	
	if(raiz) { // ou seja raiz existe; imprime o dado
		// chamada recursiva empilhando os nós esquerdos dps que encontrar null
		imprimirArvore_segundaVersao(raiz->esquerda); // encontrou nu, vai retornar os nós das esquerdas e vai imprimir todos
		printf("%d ", raiz->valor); // imprime o dado esquedo, após isso imprime o direito.
		imprimirArvore_segundaVersao(raiz->direita); // chamada recursiva empilhando os nós das direitas e imprimindo o dado
	}
	
}

void menu(t_NoArv *raiz ) {
	
	int opcao,dado;
	
	do {
		printf("\n -----------M-E-N-U-------- \n");
		printf("|\t\t\t   |\n|  [0.] - Sair\t\t   |\n|  [1.] - Inserir\t   |\n|  [2.] - Imprimir\t   |\n|\t\t\t   |");
		printf("\n -------------------------- \n");
		printf("\nInforme: ");
		scanf("%d", &opcao);
		
		switch(opcao) {
			
			case 0 : printf("\nSaindo..."); break;
			
			case 1 : 
				printf("\nDigite o dado: ");
				scanf("%d", &dado);
				//raiz = inserirPrimeiraVersao(raiz, dado);
				inserirSegundaVersao(&raiz, dado);
				break;
				
			case 2 : 
				printf("\n\n-------------- Primeira Versao ---------------\n");
				imprimirArvore_primeiraVersao(raiz);
				printf("\n\n-------------- Segunda Versao ---------------\n");
				imprimirArvore_segundaVersao(raiz);
				break;
				
			default: printf("\nInforme um valor válido..."); break;
		}
		
	} while (opcao != 0);
	
}

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Codigo
	// RAIZ
	t_NoArv *raiz = NULL; // inicio receberá NULL;
	menu(raiz);
	

	return 0;
} 
