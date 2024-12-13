#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
	Estrutura de dados mais conhecidas:
		Cada estrutura tem uma finalidade específica.
	
		1) Pilhas -> Inserir na pilha e remover da pilha (apenas no topo)
			A pilha será composta por vários nós.
				Toda chamada recursiva faz uma operação push.
			
			
			A parte da operação é feita no topo da pilha.
				O último a entrar é o primeiro a sair.
				(LIFO) -> Last - in - First - out
				
			Pode fazer duas operações:
				1) Push -> empilhar
					O início é nulo, pois não temos nada ali.
						NULL 
					
					1. Inserir 
						Dado1
						|
						Qualquer dado.
						|
						PONTEIRO1 -> aponta para o nó anterior
						(Nó) -> cada nó tem um campo de informação.
						|
						NULL
						
					2. Inserir outro
						
						Dado2
						|
						Qualquer Dado
						|
						Ponteiro2 (Nó) -:> Aponta para o nó anterior (dado 1, ponteiro 1)
						|
						Dado1
						|
						Qualquer Dado
						|
						Ponteiro1 (Nó)
						|
						NULL
					
					Assim por diante.		
				
				2) Pop -> desempilhar -> sempre acontece no topo.
					Possui três passos:
					
					1 passo) Criar um ponteiro auxiliar que vai apontar para o topo
					da pilha
					
					2 passo) O ponteiro topo precisa apontar para o ponteiro seguinte.
					
					3 passo) Utilizar o free() -> Liberar a memória.
					
				PS: NO computador, os nós podem estar espalhados na memória.
					
		
		Como criar 
		
		typedef struct no {
			int dado;
			struct no *proximo; (ponteiro -> para apontar para o nó anterior)
		} t_No;

*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	

	return 0;
} 
