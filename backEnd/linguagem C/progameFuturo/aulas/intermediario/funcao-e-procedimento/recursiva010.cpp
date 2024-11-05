#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*
	Aula 165: Calcular o tempo de execução do algoritmo de 
	FIBONACCI recursiso e iterativo.
*/




long long int fibRecursiva (int n) {
	
	if(n > 1) {
		if(n == 2)
			return 1;
		else
			return fibRecursiva(n - 1) + fibRecursiva(n - 2);
	}
	else
		return 0;
}

long long int fibIterativo (int n) {
	long long int ant = 0, suc = 1, soma = 0;
	int i = 2;
	
	
	if(n > 1) {
		if(n == 2)
			return suc;
		else {
			while ( i < n) {
				soma = ant + suc;
				ant = suc;
				suc = soma;
				i++;
			}
			return soma;
		
		}
	}
	else
		return ant;
	
	
}


int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	int n = 30;
	time_t tIni, tFim;
	
	tIni = time(NULL);
	printf("Fibonacci Iterativo: %lld\n", fibIterativo(n));
	tFim = time(NULL);
	printf("\tTempo: em segundos: %f\n\n", difftime(tFim, tIni));
	
	tIni = time(NULL);
	printf("Fibonacci Recursiva: %lld\n", fibRecursiva(n));
	tFim = time(NULL);
	printf("\tTempo: em segundos: %f\n\n", difftime(tFim, tIni));
	
	return 0;
} 
