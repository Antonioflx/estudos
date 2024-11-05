#include <stdio.h>


/*
				Aula 29
			operador unsigned --> %u (numero tipo inteiro sem sinal)
			trocar o %d por %u
			limite para o tipo int: 2.147.483.647
			short int -> %d ou %hi
			unsigned short int -> %hu ou %d
			unsigned long int -> %lu
*/


int main() {
	
	
	// unsigned -> (Não recebe números negativos, apenas inteiros)
	
	unsigned int x = 2147483647; // 0 ... 4.294.967.295 (dobra o limite) 
	
	unsigned short int y = 55000;
	
	// Utiliza a máscara %u;
	printf("\n\tO valor e: %u\n\n ", ++x);
	
	printf("\n\tO valor e: %d\n\n ", y);
	return 0;
}
