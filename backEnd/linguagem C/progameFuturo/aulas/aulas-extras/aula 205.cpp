#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
/*
		Duvida:
	Faça uma função que recebe um nome e devolve o nome invertido.

*/

void inverter(char vet[]) {
	int i, aux, fim, tam = strlen(vet);
	
	fim = tam - 1;
	
	for(i = 0; i < tam/2; i++){
		aux = vet[i];
		vet[i] = vet[fim];
		vet[fim] = aux;
		fim--;
	}
	
}

char* inverter2(char vet[]) {
	int i, fim, tam = strlen(vet);
	char *novo = (char*)malloc((tam + 1) * sizeof(char)); // tam + 1 -> para por para o caractere \0.
	
	fim = tam - 1;
	
	for(i = 0; i < tam; i++)
		*(novo + fim--) = *(vet + i);

	// quando retornar o ultimo caractere ser do \0
	novo[i] = '\0';
	
	return novo;
	
}

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");

	// codigo
	
	char palavra[] = {"Bom dia!"};
	char *p;
	
	printf("\n\n\tNORMAL: %s", palavra);
	
	// com o procedimento
	inverter(palavra);
	printf("\n\tINVERTIDO: %s", palavra);
	 
	// com ponteiro.
	p = inverter2(palavra);
	printf("\n\tINVERTIDO NOVAMENTE: %s", p);
	
	return 0;
} 
