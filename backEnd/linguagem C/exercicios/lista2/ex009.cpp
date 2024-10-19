#include <stdio.h>

/*
			Ex009
		Media Aritmetica
		Media Ponderada
*/

int main () {
	
	
// Variaveis

	int valor; // escolha
	
	float nota, nota1, nota2; // notas
	
	float mediaArit, mediaPond; // medias -- Pond (Pesos: 3,3,4).
	
// Codigo

	printf("\n\n---------- M E N U ---------");
	
	printf("\n\n[1] - Media Aritmetica\n[2] - Media Ponderada (Pesos: 3, 3, 4)");
	printf("\n\nDigite o valor: ");
	scanf("%d", &valor);
	
	switch (valor)
	{
		case 1 :
			printf("\nPrimeira nota: ");
			scanf("%f", &nota);
			
			printf("\nSegunda nota: ");
			scanf("%f", &nota1);
			
			printf("\nTerceira nota: ");
			scanf("%f", &nota2);
			
			mediaArit = (nota + nota1 + nota2) / 3;
		
			printf("\n\tMedia: %.2f", mediaArit);
		break;
		
		case 2 :
			printf("\nPrimeira nota: ");
			scanf("%f", &nota);
			
			printf("\nSegunda nota: ");
			scanf("%f", &nota1);
			
			printf("\nTerceira nota: ");
			scanf("%f", &nota2);
			
			mediaPond = (nota * 3 + nota1 * 3 + nota2 * 4)/ 10;
			
			printf("\n\tMedia: %.2f", mediaPond);
		break;
		
		default : ;
			printf("\nValor invalido!");
		
	}	
	
	return 0;
}
