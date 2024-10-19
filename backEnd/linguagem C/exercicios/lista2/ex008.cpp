#include <stdio.h>

/* 
		Ex008
	dias do mes
*/

int main () {

// Variaveis

	int mes;

// Codigo

	printf("\n----------M E N U --------");
	printf("\n[1] - Janeiro\n[2] - Fevereiro\n[3] - Marco\n[4] - Abril\n[5] - Maio\n[6] - Junho\n[7] - Julho\n[8] - Agosto\n[9] - Setembro\n[10] - Outubro\n[11] - Novembro\n[12] - Dezembro ");
	printf("\n\nDigite um numero: ");
	scanf("%d", &mes);
	
	switch (mes)
	{
		case 1 :
		case 3 :
		case 5 :
		case 7 :
		case 8 :
		case 10 :
		case 12 :
			printf("O mes Janeiro tem: 31 dias");
		break;
		
		case 2 :
			printf("O mes Fevereiro tem: 28 dias");
		break;
	
		case 4 :
		case 6 :
		case 9 :
		case 11 :
			printf("O mes Abril tem: 30 dias");
		break;
		
		default : ;
			printf("Valor invalido");
		break;
		
	}
	
	return 0;
}
