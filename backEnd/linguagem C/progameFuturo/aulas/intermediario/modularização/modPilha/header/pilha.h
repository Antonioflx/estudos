// aqui que cria a parte de modulos.
#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

// bibliotecas.
#include <stdio.h>
#include <stdlib.h>

// arquivos de cabeçalho
typedef struct no {
	int numero;
	struct no *proximo;
}t_No;

typedef struct {
	t_No *topo;
	int tam;
} t_Pilha;

// procedimento para criar a pilha
void criarPilha(t_Pilha *p);

// procedimento para empilhar a pilha
void empilhar(t_Pilha *p, int num);

// desempilhar , pega o topo * pelo ponteiro, assim vai.

t_No* desempilhar(t_Pilha *p);


// imprimir a pilha
void imprimirPilha(t_Pilha *p);


#endif // PILHA_H_INCLUDED


/*
	Definição da estrutura
	#ifndef PILHA_H_INCLUDED
		if (se) not (nao) def (define) com o nome...
	#define PIlha_H_INCLUDED
		criar assinaturas de funções
		
	#endif // PILHA_H_INCLUDED
		finalizar.

*/
