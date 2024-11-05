#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/*
	8. Crie uma função em linguagem C chamado Dado() que retorna, através de sorteio, um número de 1 até 6.
*/


int dado(int num) {
	
	srand(time(NULL));
	
	num = rand() % 5 + 1;
	
	return num;

}



int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	int num1;
	
	printf("Vamos jogar o DADO [1-6]. ");
	printf("\nDado foi jogado...\n");
	printf("RESULTADO: %d", dado(num1));
	
	
	return 0;
} 
