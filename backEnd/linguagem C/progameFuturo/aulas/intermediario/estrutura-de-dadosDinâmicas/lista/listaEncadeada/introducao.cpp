#include 	<stdio.h>

/*
	Lista encadeada:
		-> Sequencia de elementos encadeados, um após o outro.
		
	Características:
		1. Precisa fazer inserções e não sabe quantos elementos serão inseridos	
		2. Genérica, n possui muitas restrições
		
	Diferença entre Lista e Fila:
		1.
		2.
		3.
		
	Estrutura:
		estrutura (
			inicio (ponteiro) -> aponta para o primeiro nó
			tam : 2 (tamanho da lista )
		)
		
		inicio ( 
			valor: 56 (dado)
			proximo: (ponteiro que aponta para o próximo nó)
		)
		
		inicio->proximo - Aponta para o Segundo 
			1Nó (
				valor: 78 (dado)
				proximo: (aponta para o outro nó)
			)
		Assim vai.
		
	Operações:
		1. Inserir
			-> Inicio / Meio / Fim
			-> Ordenado
		2. Remoção
			-> Inicio / Meio / Fim
		3. Busca
		
		1) Inserir
			-> Criar um ponteiro auxiliar
			-> Pegar o novo Nó (dados)
			-> Linkar para o aux->proximo
			-> aux->proximo - aponta para o novo nó
		
		2) Remoção
			-> Criar um ponteiro auxiliar
			-> Identificar o nó anterior do nó que irá ser removido
			-> Criar um ponteiro *remover -> para receber o conteudo
			-> aux->proximo = remover->proximo (pois o ponteiro remover aponta para o próximo nó)
			
					
		3) Imprimir 
			-> Criar um ponteiro auxiliar
			-> Para não modificar os dados
			-> Fazer um loop e imprimir
			
					
		
*/

int main() {
	
	
	return 0;
}
