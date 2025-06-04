#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
		Aula 265: Como inserir em uma �rvore Bin�ria de Busca?
		
		// Vers�o 1.
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

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Codigo
	// RAIZ
	t_NoArv *raiz = NULL; // inicio receber� NULL;
	raiz = inserirPrimeiraVersao(raiz, 50);

	return 0;
} 
