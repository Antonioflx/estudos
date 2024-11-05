#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
			Aula 198: Alocação dinâmica de memória com a função calloc.
			
			calloc() -> Ela aloca memória igual malloc.
			
			Diferença -> Quantidade de parâmetros
			
			malloc() -> 1 parâmetro: A quantidade de bytes que eu quero alocar.
			
			calloc() -> 
				2 parâmetros: 
					1) A quantidade de elementos que eu quero alocar
					2) A quantidade de memória da quantidade de elementos que passei no 1 param
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	
	/*
		(int*) -> 
			Converter o ponteiro genérico do tipo void* retornado por malloc()
			para o ponteiro do tipo int
			
		malloc() -> função para alocar um bloco de memória no heap(área de memória dinâmica)
		
		sizeof() -> função para retornar o tamanho em bytes de alguma coisa.
	*/
	
	char *x;
//	x = (int*)malloc(sizeof(int));
	
	x = (char*)calloc(1, sizeof(char));

	
	if(x) {
		printf("Memoria alocada com sucesso!\n");
		printf("\nX: %c\n", *x);
		*x = 'A';
		printf("X: %c\n", *x);
	}
	else
		printf("\nERRO\n");
	return 0;
} 
