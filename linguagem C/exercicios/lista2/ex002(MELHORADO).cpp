#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/* 
		ex002 
	Ler 5 numeros e imprimir quantos numeros positivos e negativos
*/


int main () {
	
	// Variaveis
	
	int num, contPosit = 0, contNegat = 0, nulo= 0, cont; // 1 numero inteiro e 3 contadores.
	
	
	// Codigo
	
	
	// Usando Estrutura de repetição fica mt melhor. for - while.
	//printf("Digite um numero inteiro positivo ou negativo: ");
	//scanf("%d", &num);
	for (cont = 0; cont < 5; cont++){
		printf("Digite 5 numeros inteiro positivos ou negativos: ");
		scanf("%d", &num);
		system("cls");
		Sleep(150);
		if (num < 0) 
		{
			contNegat++;
		} else if (num > 0)
		{
			contPosit++;
		} else 
		{
			nulo++;
		}	
		system("cls");
	}
	
	
	
	// printf("\nEntre os valores: %d, %d, %d, %d, %d:", num, num1, num2, num3, num4);
	
	printf("\n\nValores positivos:%d\nValores negativos: %d\nValores nulos: %d\n", contPosit, contNegat, nulo);
	
	return 0;
}
