#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Aula 188: Vetor é sempre ponteiro?
		Sim, através do indíce (apontador -> endereço de memória)
		Podemos mudar o valor do elemento (dentro da funçao principal)
*/



void imprimir(int vet[], int tam) {
	
	int i;
	
	for(i = 0; i < tam; i++) 
		printf(" %d", vet[i]);
		
}

// dobrar.
void dobro(int vet[], int tam) {
	int i;
	
	for(i = 0; i < tam; i++)
		vet[i] *= 2;
}

int main() {
	
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int tam = sizeof(vet)/4;

	
	printf("\n\n\tPRIMEIRA IMPRESSÃO\n\n");
	imprimir(vet, tam);
	
	printf("\n\n\tSEGUNDA IMPRESSÃO\n\n");
	dobro(vet, tam);
	imprimir(vet, tam);
	
	return 0;
} 
