#include <stdio.h>



/*
				Aula 24
			Operador Aritméticos.
*/

int main() {
 
 	// Variáveis
 	
 	int a = 10, b = 20;
 	
 	
 	// Código
	printf("\nSoma: %d\n", a + b);
	printf("\nSubtracao: %d\n", a -b);
	printf("\nMultiplicacao: %d\n", a * b);
	
	// --> Nesse caso, a linguagem C > Se o dividendo for Inteiro a divisão será Inteira. Caso, o dividendo seja Real a divisão será Real. 
	printf("\nDivisao: %.1f\n", (float)a / b); // --> Solução. Coloca o ponto dps do 10 -> 10.0 ou (float) a / b;
 
 	// Utilizando o operadore % -> Resto da Divisão.
 	
 	printf("\nResto da divisao inteira: %d\n", 20 % 3);
 	
 	
}
