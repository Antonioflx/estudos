#include <stdio.h>

/* 
		ex003
	Ler um numero e 
	informar se e divisivel por 2 ou por 3 ou por 5;
*/

int main () {

	// Variaveis
	
	int num, valor; // cont - para dizer.
	
	// Codigo
	
	printf("\nDigite um numero inteiro: ");
	scanf("%d", &num);
	
	printf("\n\n----------M E N U ----------\n\n");
	
	printf("[1] - Dividir por 2\n[2] - Dividir por 3\n[3] - Dividir por 5\n[4] - Dividir por 2, 3 e 5");
	printf("\n----------------------------");
	printf("\nDigite um valor: ");
	scanf("%d", &valor);
	printf("\n"); // So para deixar mais bonito.
	switch (valor)
	{
		case 1 :
			if (num % 2 == 0)
			{
				printf("O valor %d e divisivel por 2", num);
			} else 
			{
				printf("O valor %d nao e divisivel por 2", num);
			}
		break;
		
		case 2 :
			if (num % 3 == 0)
			{
				printf("O valor %d e divisivel por 3", num);
			} else 
			{
				printf("O valor %d nao e divisivel por 3", num);
			}
		break;
		
		case 3 :
			if (num % 5 == 0)
			{
				printf("O valor %d e divisivel por 5", num);
			} else 
			{
				printf("O valor %d nao e divisivel por 5", num);
			}
		break;
		
		case 4 :
			if (num % 2 == 0 && num % 3 == 0 && num % 5== 0) 
			{
				printf("O valor %d e divisivel por 2, 3 e 5", num);
			} else if (num % 2 == 0 && num % 3 ==0)
			{
				printf("O valor %d e divisivel apenas por 2 e 3 ", num);
			} else if (num % 2 == 0 && num % 5 ==0)
			{
				printf("O valor %d e divisivel apenas por 2 e 5", num);
			} else if (num % 3 == 0 && num % 5 ==0)
			{
				printf("O valor %d e divisivel apenas por 3 e 5", num);
			} else
			{
				printf("O valor %d nao e divisivel por 2, 3 e 5", num);
			}
		break;
		default :;
	}

	return 0;
}
