#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Ex004:
		4) Considere a seguinte declaração: int A, *B, **C, ***D
		Escreva um programa que leia a variável A e calcule e exiba o dobro, o triplo e o quádruplo desse
		valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C
		o triplo e D o quádruplo.
*/


int dobro(int *B) {
	return *B * 2;
}

int triplo(int **C) {
	return **C * 3;
}

int quadruplo(int ***D) {
	return ***D * 4;
}


int main() {
	
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	int A, *B, **C, ***D;
	
	B = &A;
	C = &B;
	D = &C;
	
	printf("\nDigite um valor inteiro: ");
	scanf("%d", &A);
	
	printf("\n\n\tValor [ORIGINAL]: %d\n\tValor [DOBRO]: %d\n\tValor [TRIPLO]: %d\n\tValor [QUADRUPLO]: %d\n", 
										A, 
										dobro(B), 
										triplo(C), 
										quadruplo(D)
	);

	return 0;
} 
