#include <stdio.h>


/* 
					Aula 17
		operador short para o tipo int
		intervalo: -32.768 até 32.767	
		%hi ou %d
*/

int main(){
	
	// Variaveis
		
	int y = 0;	
	// short int x = 32767; -> Diminuir o tamanho da var.
	
	long long int x = 2147483647; // Esse número é o limite -> long int -> aumenta o tamanho da var
	
	// Codigo
	
	
	printf("Tamanho de x em bytes: %d\n", sizeof x);
	
	printf("Valor de x: %lld\n", x);
	x++;
	printf("Valor de x: %lld\n ", x);
}
