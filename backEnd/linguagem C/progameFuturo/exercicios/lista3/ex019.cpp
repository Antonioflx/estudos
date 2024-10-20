#include <stdio.h>

/*
		19) Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de
			pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo
			será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem
			escrever mensagem alguma).
*/
int main () {

	// Variaveis
	
	int coordX, coordY, cont;
	
	// Codigo
	
	// Ler as 2 coords.
	
	
	for (cont = 1; cont<= 1000; cont++)
	{
		printf("\nDigite a COORDENADA do X e do Y: ");
		scanf("%d %d", &coordX, &coordY);
		
		
		// Se colocar 0 quebra.
		if (coordX == 0 || coordY == 0)
		{
			break;
		} 
		// Verificar qual quadrado a resposta esta.
		else if (coordX >= 1 && coordY >= 1)
		{
			printf("\nPRIMEIRO\n");
		} 
		else if (coordX <= -1 && coordY >=1) 
		{
			printf("\nSEGUNDO\n");
		}
		else if (coordX <= -1 && coordY <= -1) 
		{
			printf("\nTERCEIRO\n");
		}	
		else 
		{
			printf("\nQUARTO\n");
		}
	}
	
	
	
	
	return 0;
}
