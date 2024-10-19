#include <stdio.h>

/* 
	ex008
*/


int main () {
	
	// Variaveis
	float real,dolar, cotacao = 5.30;
	
	// Codigo -> Converter Real para Dolar
	printf("\n---------------[C O N V E R S A O]------------------");
	printf("\nDigite aqui a quantidade de dinheiro em real que voce quer converter: ");
	scanf("%f", &real);
	printf("\nA cotacao esta de: %.2f", cotacao);
	
	dolar = real / cotacao;
	
	printf("\nFazendo a conversao de %.2f reais, ficou %.2f de dolares.", real, dolar);
	
	return 0;
}
