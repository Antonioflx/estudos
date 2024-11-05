#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Ex003:
		3) Crie um programa que contenha um array de inteiros com 10 elementos. Imprima o elemento e o
		endereço de cada posição do array.
*/

void imprimir(int vet[], int tam) {
	
	int i;
	
	for(i = 0; i < tam; i++) {
		printf("\n\t%2d Elemento : %d\t\tEndereço: %p", i + 1, *(vet + i), vet + i);
	}
}


int main() {
	
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	int vet[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int tamanho = sizeof(vet)/4;
	
	imprimir(vet, tamanho);
	return 0;
} 
