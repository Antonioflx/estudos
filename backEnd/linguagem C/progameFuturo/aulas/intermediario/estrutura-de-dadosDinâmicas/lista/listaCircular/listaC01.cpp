#include 	<stdio.h>

/*
	Lista encadeada:
		-> Sequencia de elementos encadeados, um ap�s o outro.
		
	Caracter�sticas:
		1. Precisa fazer inser��es e n�o sabe quantos elementos ser�o inseridos	
		2. Gen�rica, n possui muitas restri��es

	Opera��es:
		1. Inserir
			-> Inicio / Meio / Fim
			-> Ordenado
		2. Remo��o
			-> Inicio / Meio / Fim
		3. Busca
		
		1) Inserir
			-> Criar um ponteiro auxiliar
			-> Pegar o novo N� (dados)
			-> Linkar para o aux->proximo
			-> aux->proximo - aponta para o novo n�
		
		2) Remo��o
			-> Criar um ponteiro auxiliar
			-> Identificar o n� anterior do n� que ir� ser removido
			-> Criar um ponteiro *remover -> para receber o conteudo
			-> aux->proximo = remover->proximo (pois o ponteiro remover aponta para o pr�ximo n�)
			
					
		3) Imprimir 
			-> Criar um ponteiro auxiliar
			-> Para n�o modificar os dados
			-> Fazer um loop e imprimir
*/


/*
			[ V A R I A � � O]
	
	Lista Circular:
		->	O �ltimo n� o ponteiro proximo aponta para o primeiro n�
		-> 	Sabemos que chegamos no final quando o ultimo n� aponta para o inicio
		
	Estrutura:
		estrutura (
			inicio (ponteiro) -> aponta para o primeiro n�
			tam : 2 (tamanho da lista )
		)
		
		inicio -> 1N� (
			valor: 56 (dado)
			pr�ximo: (ponteiro) -> aponta para o proximo n�
		)
		
		1N�->proximo -> 2N� *ultimo n�* (
			valor: 78
			pr�ximo: -> aponta para o pr�ximo 1N�
		)
		
*/

int main() {
	
	
	return 0;
}
