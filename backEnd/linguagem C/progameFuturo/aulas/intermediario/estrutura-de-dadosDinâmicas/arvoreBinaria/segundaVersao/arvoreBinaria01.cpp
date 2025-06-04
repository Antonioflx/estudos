#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
		Aula 267: Como Inserir em uma �rvore Bin�ria de Busca?
			SEGUNDA VERSAO
			
		// Vers�o 2.
			No come�o a raiz � NULL
			
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
	if(!raiz) { // raiz � nula, ou seja, � o 1 n�
		t_NoArv *aux = (t_NoArv*)malloc(sizeof(t_NoArv)); // alocando memoria
		if(aux) {
			aux->valor = dado; // valor -> recebe dado
			aux->esquerda = NULL; // esquerda ser� NULL
			aux->direita = NULL; // direita ser� NULL
			return aux; // retornara o n�.
		}
		
		// aloca��o deu erro
		printf("\n[ERROR] -> Aloca��o de mem�ria\n");
		return NULL; // retornara NULL.
	}
	
	// agora, raiz n�o estar� null
	// verificar se vai para a esquerda ou direita
	if(dado < raiz->valor) // esquerda dado < valor do n�.
		raiz->esquerda = inserirPrimeiraVersao(raiz->esquerda, dado);
	
	if(dado > raiz->valor) // direita dado < valor do n�.
		raiz->direita = inserirPrimeiraVersao(raiz->direita, dado);
		
	return raiz;
}

// segunda vers�o -> ponteiro para ponteiro
// ou seja, alteraremos o conteudo do n�
void inserirSegundaVersao(t_NoArv **raiz, int dado) {
	if(!(*raiz)) 
	{ // raiz � nula, ou seja, � o 1 n�
		// o endere�o de memoria alocada ser� salva no conteudo da raiz. Ou seja, alteramos a variavel Raiz do menu
		*raiz = (t_NoArv*)malloc(sizeof(t_NoArv)); 
		// alterando os dados da raiz.
		(*raiz)->valor= dado;
		(*raiz)->esquerda = NULL;
		(*raiz)->direita = NULL;
	}
	else 
	{
		// agora, raiz n�o estar� null
	// verificar se vai para a esquerda ou direita
	if(dado < (*raiz)->valor) // esquerda dado < valor do n�.
		inserirSegundaVersao(&((*raiz)->esquerda), dado);
	else // direita dado < valor do n�.
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
			
		Tem filho a esquerda? Tem, vou para a raiz. At� encontrar NULL e imprimir a raiz.
		
		
		10, 25, 30, 50, 51, 53, 60
	*/

// imprimir sem ser ordenada.
void imprimirArvore_primeiraVersao(t_NoArv *raiz) {
	if(raiz) { // ou seja raiz existe; imprime o dado
 		printf("%d ", raiz->valor); // imprime o dado
		imprimirArvore_primeiraVersao(raiz->esquerda); // chamada recursiva empilhando os n�s das esquerdas e imprimindo
		imprimirArvore_primeiraVersao(raiz->direita); // chamada recursiva empilhando os n�s das direitas e imprimindo
	}
}


// imprimir sendo ordenada.
void imprimirArvore_segundaVersao(t_NoArv *raiz) {
	
	if(raiz) { // ou seja raiz existe; imprime o dado
		// chamada recursiva empilhando os n�s esquerdos dps que encontrar null
		imprimirArvore_segundaVersao(raiz->esquerda); // encontrou nu, vai retornar os n�s das esquerdas e vai imprimir todos
		printf("%d ", raiz->valor); // imprime o dado esquedo, ap�s isso imprime o direito.
		imprimirArvore_segundaVersao(raiz->direita); // chamada recursiva empilhando os n�s das direitas e imprimindo o dado
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
				
			default: printf("\nInforme um valor v�lido..."); break;
		}
		
	} while (opcao != 0);
	
}

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Codigo
	// RAIZ
	t_NoArv *raiz = NULL; // inicio receber� NULL;
	menu(raiz);
	

	return 0;
} 
