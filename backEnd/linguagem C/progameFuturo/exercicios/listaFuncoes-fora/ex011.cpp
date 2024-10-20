#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
/*
	9. Use a função da questão passado e lance o dado 1 milhão de vezes. Conte quantas vezes cada número saiu.
	A probabilidade deu certo? Ou seja, a porcentagem dos números foi parecida?
*/


void dado(int num) {
	
	srand(time(NULL));
	
	int i;
//	int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0, cont6 = 0;
	int contador[] = {0, 0, 0, 0, 0, 0};
	
	
	for(i = 0; i < 3; i++) {
		
		num = rand() % 5 + 1;
		switch(num) {
			
			case 1 : contador[0]++; break;
		
			case 2 : contador[1]++; break;
		
			case 3 : contador[2]++; break;
		
			case 4 : contador[3]++; break;
		
			case 5 : contador[4]++; break;
		
			case 6 : contador[5]++; break;
		}
		printf("%d RESULTADO: %d\n", i, num);
		
	}
	printf("\n");
	for(i = 0; i < 6; i++)
		printf("Quantidades de vezes que o num [%d + 1] apareceu: %d\n", i, contador[i]);

}



int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	int num1, i;
	
	printf("Vamos jogar o DADO [1-6]. ");
	printf("PS: Valor 0 = 1. Valor 2 = 1, ...\n\n");
	printf("\nDado foi jogado...\n");
	
	
	for(i = 0; i < 2; i++){
		printf("\n%d PARTE:\n", i);
		dado(num1);
	}
	return 0;
}
	
	

