#include <stdio.h>

/*
		ex006
	Escrever um numero e dizer um mês
*/

int main () {

	// Variaveis
	
	int valor;
	
	printf("\n-----------M E N U ---------------");
	printf("\n[1] - Janeiro\n[2] - Fevereiro\n[3] - Março\n[4] - Abril\n[5] - Maio\n[6] - Junho\n[7] - Julho\n[8] - Agosto\n[9] - Setembro\n[10] - Outubro\n[11] - Novembro\n[12] - Dezembro ");
	printf("\n\nDigite um numero: ");
	scanf("%d", &valor);
	
	
	switch (valor)
	{
		case 1 :
			printf("\nMES: Janeiro");
		break;
		
		case 2 :
			printf("\nMES: Fevereiro");
		break;
		
		case 3 :
			printf("\nMES: Março");
		break;
		
		case 4 :
			printf("\nMES: Abril");
		break;
		
		case 5 :
			printf("\nMES: Maio");
		break;
		
		case 6 :
			printf("\nMES: Junho");
		break;
		
		case 7 :
			printf("\nMES: Julho");
		break;
		
		case 8 :
			printf("\nMES: Agosto");
		break;
		
		case 9 :
			printf("\nMES: Setembro");
		break;
			
		case 10 :
			printf("\nMES: Outubro");
		break;
		
		case 11 :
			printf("\nMES: Novembro");
		break;
		
		case 12 :
			printf("\nMES: Dezembro");
		break;
		
		default : ;
		printf("\n[ERRO] Valor invalido!");
	}
	return 0;
}
