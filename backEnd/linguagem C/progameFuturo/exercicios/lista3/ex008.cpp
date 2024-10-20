#include <stdio.h>

/*
		ex008:
	Menu da calc, pedir 2 valores, 
	dividendo != 0 (caso seja escolhido a divisao)

*/

int main () {

	// Variaveis
	
	int valor, num1, num2, resultado;
	
	// Codigo
	
	printf("\n------------M E N U --------");
	
	printf("\n[1] - Somar\n[2] - Subtrair\n[3] - Multiplicar\n[4] - Dividir\n[0] - Sair");
	printf("\n\nDigite o valor: ");
	scanf("%d", &valor);
	
	switch (valor)
	{
		case 1 :
			printf("\nDigite o PRIMEIRO numero: ");
			scanf("%d", &num1);
			printf("\nDigite o SEGUNDO numero: ");
			scanf("%d", &num2);
			
			resultado = num1 + num2;
			printf("\nRESULTADO: %d", resultado);
		break;
		
		case 2 :
			printf("\nDigite o PRIMEIRO numero: ");
			scanf("%d", &num1);
			printf("\nDigite o SEGUNDO numero: ");
			scanf("%d", &num2);
			
			resultado = num1 - num2;
			printf("\nRESULTADO: %d", resultado);
		break;
		
		case 3 :
			printf("\nDigite o PRIMEIRO numero: ");
			scanf("%d", &num1);
			printf("\nDigite o SEGUNDO numero: ");
			scanf("%d", &num2);
			
			resultado = num1 * num2;
			printf("\nRESULTADO: %d", resultado);
		break;
		
		case 4 :
			printf("\nDigite o DIVISOR: ");
			scanf("%d", &num1);
			printf("\nDigite o DIVIDENDO: ");
			scanf("%d", &num2);
			
			while (num2 == 0)
			{
				printf("\n[ERRO] -> DIVIDENDO nao pode ser igual a [0] \n");
				printf("\nDigite o DIVIDENDO: ");
				scanf("%d", &num2);
			}
			
			resultado = num1 / num2;
			printf("\nRESULTADO: %d", resultado);
			
		break;
		
		case 0 :
		break;
		
		default : ;
			printf("\n[ERRO] -> Valor INVALIDO!");
	}
	printf("\n----------------------------");
	return 0;
}
