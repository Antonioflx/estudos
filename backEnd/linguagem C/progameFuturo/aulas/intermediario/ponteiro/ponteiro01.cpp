#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*

	Aula 184: O que é e como criar um ponteiro?
	para imprimir o endereço de memória de uma variavel 
	utiliza a máscara %p
	
	Ponteiro: 
		é uma variavel que armazena um endereço de memória.
		declarando a var
		Ou seja, só armazena endereço de memoria.
	
	int *p; -> utilizando * antes da var.

*/
int main() {
	
	setlocale(0, "Portuguese");
	
	int num = 10, num2 = 20, num3 = 30;
	int *p, *p1;
	
	// teste com char
	
	char letra = 'f';
	char *pC;
	
	pC = &letra;
	
	printf("\n\nTESTE 1:");
	printf("\nValor de num: %d\n", num);
	
	// Imprimir o endereço utilizar -> %p e utilizar o & -> endereço onde está a vari
	printf("Endereço de num: %p\n", &num);
	
	
	p = &num2;
	printf("\n\nTESTE 2:");
	printf("\nValor de num2: %d\n", num2);
	printf("Endereço de num2: %p\n", p);
	
	
	// Como fazer para pegar o valor?
	
	// Atribuir o endereço
	
	p1 = &num3;
	printf("\n\nTESTE 3:");
	// Mostrando o valor de p1
	printf("\nValor de num3: %d", num3);
	printf("\nValor de p1: %p\n", p1);
	
	// ponteiro tbm é uma variavel, ou seja, ela tbm vai ter um endereço
	printf("Endereço de num3: %p\n", &num3);
	printf("Endereço de p1: %p\n", &p1);
	
	// Mostrando o valor que ele está apontando por ele.
	// tem que trocar a mascara para o tipo (nesse caso, int) e colocar * antes do p1
	printf("Valor apontado por p1: %d\n", *p1);
	
	
	printf("\n\nTESTE 4:");
	printf("\nValor de letra: %c", letra);
	printf("\nEndereço de letra: %p", &letra);
	printf("\nValor de pC: %p", pC);
	printf("\nEndereço de pC: %p", &pC);
	printf("\nValor apontado por pC: %c\n", *pC);
	
	return 0;
	
}
