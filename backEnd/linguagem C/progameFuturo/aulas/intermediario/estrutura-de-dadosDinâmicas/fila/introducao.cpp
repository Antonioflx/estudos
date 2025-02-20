#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
	Estrutura de dados Dinâmica
	
		Introdução fila. -> FiFo -> First in , First out
		
		
	2 Operações:
		
		1. *Inserir* 
		-> Quando não existe ninguém na fila -> ponteiro aponta para NULL
		
		-> Quando inserir outro dado (dado 1) 
			- O dado1 fica no topo, e o ponteiro do dado 1 aponta para NULL 
		-> Quando insere outro dado (dado 2) 
			- o dado2 passa a fica no topo, e o ponteiro do dado2 aponta para o dado1
			
		2. Remover
		-> Sempre remover o primeiro nó
		
		1. Criar ponteiro apontar para o primeiro nó da fila
		2. O ponteiro fila precisa apontar para o 2 nó
		3. Liberar a memória -> free(remover)
		
		
		estrutura
		
		typedef struct no {
			int dado; // qualquer dado.
			struct no *proximo;
		} t_No;
		
*/

int main() {
	
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	

	return 0;
} 
