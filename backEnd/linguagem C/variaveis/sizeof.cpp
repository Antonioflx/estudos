#include <stdio.h>

/*
				Aula 16
			operador sizeof

		sizeof x ou sizeof(int)
*/


int main() {
	
	// Variaveis
	
	float x = 1.0;
	
	// Codigo
	
	printf("Tamanho de um float na memoria: %d btyes\n", sizeof x);
	printf("Tamanho em memoria de um int: %d bytes\n", sizeof(int));
	return 0;
}
