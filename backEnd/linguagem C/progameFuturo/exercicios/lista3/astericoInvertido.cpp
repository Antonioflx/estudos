#include <stdio.h>
#include <locale.h>
// Fazendo um triangulo retangulo com astericos para a esquerda.



/*
	Vou imprimir da esquerda para direita
	
	0 1 2 3 4 5 6 7
	
0	*
1	**
2	***
3	****
4	*****
5	******
6	*******
7	********
	Dps direita para esquerda
	
	
	0 1 2 3 4 5 6 7
	
					*	0
				   **	1
				  ***	2
				 ****	3
				*****	4
			  *******	5
             ********	6					
		    *********	7							
*/


int main () {
	
	setlocale(0, "Portuguese");
	
	int i, j;
	
	printf("\nDireção do * --->\n\n");
	for(i = 0; i < 7; i++){
		for(j = 0; j < i; j++)
			printf(" *");
		printf("\n");
	}
	
	printf("\nDireção do * --->\n\n");
	for(i = 7; i > 0; i--){
		for(j = 0; j < i; j++)
			printf(" *");
		printf("\n");
		
	}
	
	printf("\nDireção do * <---\n\n\t\t");
	for(i = 0; i <  7; i++){
		for(j = 7 - i; j > 0; j--)
			printf(" ");
		for(j = 0; j < i ; j++){
			printf("*");
		}
		printf("\n\t\t");
		
	}
	
	printf("\nDireção do * --->\n\n");
	for(i = 7; i > 0; i--){
		for(j = 7 - i; j > 0; j--)
			printf(" ");
		for(j = 0; j < i; j++)
			printf("*");
		printf("\n");
		
	}
	
	return 0;
}
