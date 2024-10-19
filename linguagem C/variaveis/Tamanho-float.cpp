#include <stdio.h>


/* 
				Aula 20
	tamanho de um float na memória
			Máscara -> %f
*/


int main(){
	
	// Variaveis
	
	float x = 3.1415;
	
	// Codigo
	
	printf("Um float precisa de %d bytes de memoria. \n", sizeof x);
	
	return 0;
}
