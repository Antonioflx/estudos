#include <stdio.h>

/*
			ex004
	Usuario escolherá converter
		Dolar -> Real
		Real -> Dolar
*/

int main () {

// Variaveis

	int valor; // valor para o switch
	
	char resp; // resposta do continuar.
	float real, dolar, cota = 5.30;
	
	printf("\n--------- C O N V E R S A O -------");
	printf("\n[1] - Real para Dolar\n[2] - Dolar para Real\n[3] - Sair");
	
	printf("\n\nQual conversao voce quer fazer?\nDigite o numero: ");
	scanf("%d", &valor);
	
	switch (valor)
	{
		case 1 :
			printf("\nDigite o valor em real: ");
			scanf("%f", &real);
			printf("\nA cotacao esta de: %.2f", cota);
			printf("\n\nDeseja continuar? [s,S] ; [n,N]: ");
			scanf(" %c", &resp);
			if (resp == 's' || resp =='S')
			{
				dolar = real / cota;
				printf("\nFazendo a conversao...\nValor em Dolar: %.2f", dolar);
			} else 
		break;
		
		case 2 :
			printf("\nDigite o valor em dolar: ");
			scanf("%f", &dolar);
			printf("\nA cotacao esta de: %.2f", cota);
			printf("\n\nDeseja continuar? [s,S] ; [n,N]: ");
			scanf(" %c", &resp);
			if (resp == 's' || resp =='S')
			{
				real = dolar * cota;
				printf("\nFazendo a conversao...\nValor em Real: %.2f", real);
			} else 
		break;
		
		case 3 :
		break;
		
		default :;
			printf("\nValor inválido");
	}
	return 0;
}
