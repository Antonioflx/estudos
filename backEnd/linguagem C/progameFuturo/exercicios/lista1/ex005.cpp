#include <stdio.h>
#include <math.h>
/* 
		ex005--> Trocar as variaveis sem usar nenhuma var auxiliar
		PS:Não consegui.
*/



int main () {
	
	// Variaveis
	
	 int a, b;

	// Codigo
	 
	// B = 10 , a = 55.
	
 	printf("\nDigite dois valores: ");
 	scanf("%d %d", &a, &b);
 	
 	printf("\na: %d\tb: %d\n", a, b);
 	
	
	a = a + b;   
	 											
 	b = a - b;  
 	
 	a = a - b;  
 	
 	printf("\na: %d\tb: %d\n", a, b);
 	/*  Ex:  


	a = a + b --> a == 55 + 10 == 65
	 
	b = a - b --> b == 65 - 10 == 55
 	
	a = a - b --> a == 65 - 55 == 10
	
	
 	*/
	return 0;
}
