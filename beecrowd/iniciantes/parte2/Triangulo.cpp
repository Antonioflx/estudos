#include <stdio.h>
#include <locale.h>
#include <string.h>


int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	float A, B, C, perimetro, area;

	// codigo
	
	scanf("%f%f%f", &A, &B, &C);
	
	if(A + B > C && A + C > B && C + B > A){
		perimetro = A + B + C;
		printf("Perimetro = %.1f\n", perimetro);
	} else {
		area = ((A + B) * C) / 2;
		printf("Area = %.1f\n", area);
	}
		
		
	return 0;
} 
