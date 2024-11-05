#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*
	Aula 164: Faça um procedimento recursivo para converter 
	um número decimal [n] para sua forma binária	
*/

void numBinario(int n){
	
	if(n > 0){
		numBinario (n / 2);
		printf("%d", n % 2);
	}
	else
		printf("%d", n);
}


int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	
	int num;
	
	printf("\nDigite um valor decimal: ");
	scanf("%d", &num);
	
	printf("\n\nForma Decimal: %d\nForma Binária: ", num);
	numBinario(num);
	
	return 0;
} 
