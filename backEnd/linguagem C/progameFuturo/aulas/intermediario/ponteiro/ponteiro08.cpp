#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Aula 191: O que é ponteiro para ponteiro?
		Ponteiro para ponteiro, utilizar  dois **
*/

int main() {
	
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	int A = 100, *B, **C;
	
	B = &A;
	C = &B;
	
	
	printf("\nEndereço de A: %p\tConteúdo de A: %d\n", &A, A);
	printf("Endereço de B: %p\tConteúdo de B: %p\n", &B, B);
	printf("Conteudo apontado por B: %d\n", *B);
	printf("Endereço de C: %p\tConteúdo de C: %p\n", &C, C);
	printf("Conteudo apontado por C: %d\n", **C);
	

	return 0;
} 
