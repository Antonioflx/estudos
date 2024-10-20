#include <stdio.h>

/*
		ex006
	multiplos de 7 -> entre 1 e 9999
*/

int main () {
	
	// Variaveis
	
	int multiplos;
	
	// Codigo
	
	printf("\n{");
	for (int num = 7; num <= 9999; num += 7)
	{	
		
		printf("[%d] ", num);
	}
	printf("}");
	return 0;
}
