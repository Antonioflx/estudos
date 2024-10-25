#include <stdio.h>
#include <locale.h>

// Fazendo um triangulo retangulo com astericos para a esquerda.




int main () {
	
	setlocale(0, "Portuguese");
	
	int i, j;
	
	for(i = 0; i < 7; i++){
		for(j = 0; j < i; j++)
			printf("*");
		printf("\n\t");
	}
	for(i = 7; i > 0; i--){
		for(j = 0; j < i; j++)
			printf("*");
		printf("\n\t");
		
	}
	
	for(i = 0; i <  7; i++){
		for(j = 7 - i; j > 0; j--)
			printf(" ");
		for(j = 0; j < i ; j++){
			printf("*");
		}
		printf("\n");
		
	}
	for(i = 7; i > 0; i--){
		for(j = 7 - i; j > 0; j--)
			printf(" ");
		for(j = 0; j < i; j++)
			printf("*");
		printf("\n");
		
		
		
	}
	
	return 0;
}
