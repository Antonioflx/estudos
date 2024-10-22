#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
	Aula 159: Implemente uma função recursiva que, dados dois números inteiros
	x e n, calcula e retorne o valor de x elevado n.
	
	n elevado a 0 = 1;
	n elevado a 1 = n;
	n elevado a 2 = 2n; -> n * (1 + 1)
	n elevado a 3 = 3n; -> n (1 + 1 + 1)
*/

int potencia(int base, int expoente) {
	
//	if(expoente == 0)
//		return 1;
//	else {
//		return base * potencia(base, expoente - 1); 	
//	}
//	

	if(expoente > 0) {
			return base * potencia(base, expoente - 1);
	} else
		return 1;
	
}

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	int base, expoente;
	
	printf("Digite a base e o expoente: ");
	scanf("%d%d", &base, &expoente);

	
	printf("\nNumero: %d elevado a %d = %d", base, expoente, potencia(base, expoente));
	
	return 0;
} 
