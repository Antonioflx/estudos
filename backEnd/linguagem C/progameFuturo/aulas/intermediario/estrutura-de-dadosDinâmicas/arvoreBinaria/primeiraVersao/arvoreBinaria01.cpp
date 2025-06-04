#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
		Aula 265: Como inserir em uma Árvore Binária de Busca?
		
		// Versão 1.
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

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Codigo
	// RAIZ
	t_NoArv *raiz = NULL; // inicio receberá NULL;
	raiz = inserirPrimeiraVersao(raiz, 50);

	return 0;
} 
