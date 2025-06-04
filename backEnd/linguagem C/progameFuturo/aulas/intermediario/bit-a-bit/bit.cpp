#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
	Otimização de Código
		-> Bit a Bit - são extramemente rápidas, pois são executas diretamente no processador sem conversões extras.
		
		x = 5
		x << 1 -> multiplica por 2 -> 5 * 2 = 10
		x << 2 -> multiplica por 2 -> 10 * 2 = 20; 
		Assim vai.
		
		x >> 1 -> Dividi por 2.
		
	Troca de variaveis:
		XOR -> Verifica 2 numeros e retorna um bit
			1 -> a != b;
			0 -> a == b
	
		1 ^ 0 = 1;
		1 ^ 1 = 0;
	
		a = 200, b = 300;
		
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
		
	Detecção de números pares e impares:
		Pares -> terminam em 0
		Impares -> terminam em 1;
		
		
	int num = 7;
	
	num & 1
		impar
	
	num & 0
		par
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Codigo
	int x = 5;
	
	
	
	printf("[1.] - X = %d\n", x);
	printf("[2.] - X = %d\n", x << 1); // multiplica
	printf("[3.] - X = %d\n", x >> 1); // divide.
	
	int a = 200, b = 300;
	printf("------------------------\n");
	printf("\nAntes da troca:\na = %d\tb = %d ", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("\n\nDepois da troca: \na = %d\tb = %d ", a, b);
	
	return 0;
} 
