#include <stdio.h>

/* 
		ex007
*/



int main () {
	
	// Variaveis
	
	int diaria = 45, dias;
	float salarioBruto, salarioLiquido,desconto;
	
	
	// Codigo
	
	printf("\nQuantos dias o encanador trabalhou? ");
	scanf("%d", &dias);
	
	salarioBruto = diaria * dias;
	
	salarioLiquido = salarioBruto - salarioBruto * 8/100;
	
	desconto = salarioBruto * 8/100;
	
	
	printf("\nO Salario Liquido do encanador e de: %.2f\nDescontado: R$%.2f", salarioLiquido,desconto);
	
	return 0;
}
