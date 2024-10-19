#include <stdio.h>

/*
		ex010:
	guardar money or 30 dias 
	-> 1 DIA) 0,01c + 2 DIA) 0,02 + 3 DIA) 0,02, etc.
*/

int main () {
	
	// Variaveis
	
	int cont;
	float money, moneyTotal;
	
	// Codigo
	
	money = 0.1;
	for (cont = money; cont < 30; cont++)
	{
		moneyTotal += money;
	}
	printf("\n");
	printf("%.1f", moneyTotal);
	
	return 0;
}
