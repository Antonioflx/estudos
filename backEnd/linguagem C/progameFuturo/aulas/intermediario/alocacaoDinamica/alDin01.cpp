#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
			Aula 197: Alocação dinâmica de memória com a função malloc.
		Retorna um ponteiro para a região de memória alocada ou NULL.

	
		malloc -> m (Memory) + alloc (Alocação);
		
			Ela aloca blocos de memória em byte em byte.
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Codigo

	/*
			Forma estática:
		
		int x; -> Criação de variável de forma estática.
		
		
		
			Forma dinâmica:
		Criando uma variavel dinâmica -> Quando meu progama está em execução:
		
		int *x;
		x = (int*)malloc(sizeof(int));
	
	*/
	
	/*
		(int*) -> 
			Converter o ponteiro genérico do tipo void* retornado por malloc()
			para o ponteiro do tipo int
			
		malloc() -> função para alocar um bloco de memória no heap(área de memória dinâmica)
		
		sizeof() -> função para retornar o tamanho em bytes de alguma coisa.
	*/
	
	int *x;
	x = (int*)malloc(sizeof(int));
	
	if(x) {
		printf("Memoria alocada com sucesso!\n");
		printf("\nX: %d\n", *x);
		*x = 50;
		printf("\nX: %d\n", *x);
	}
	else
		printf("\nERRO\n");
	return 0;
} 
