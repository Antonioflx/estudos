#include <stdio.h>

/*
			ex011:
	X -> x/2 a cada 50s 
	OBJETIVO == (O TEMPO 
	ATE CHEGAR em 0.05g)
*/

int main () {

	// Variaveis
	
	int tempo,hora, minuto, segundo, resto;
	float massa;
	
	// Codigo
	
	printf("\nDigite uma massa em (gramas): ");
	scanf("%f", &massa);
	
	
	do {
		massa /= 2;
		tempo += 50;
	} while (massa >= 0.05);
	
	resto = tempo;
	
	hora = resto / 3600;
	resto %= 3600;
	
	minuto = resto / 60;
	resto %= 60;
	
	segundo = resto;
	
	printf("\n---------------T E M P O ---------\n");
	printf("\nMASSA: %.2f\n\nTEMPO: %.1d:%.1d:%.1d", massa, hora, minuto, segundo);
	
}
