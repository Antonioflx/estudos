#include <stdio.h>

/*
		ex006 
 */

// Valor da conta

int main () {
	
	// Variaveis
	
	float preco, gorjeta, pagar;
	int pessoas;
	
	
	printf("\nQuanto foi o valor da conta? ");
	scanf("%f", &preco);
	
	printf("\nQuanto foi o valor da gorjeta em porcento? ");
	scanf("%f", &gorjeta);
	
	 printf("\nQuantas pessoas irao dividir a conta? ");
	scanf("%d", &pessoas);
	
	pagar = ((preco * (gorjeta)/100) + preco)/ pessoas;
	
	printf("\nO valor divido por %d pessoas ficou de %.2f", pessoas, pagar);
	return 0;
}

