#include <stdio.h>

/* 
		ex002 
	Ler 5 numeros e imprimir quantos numeros positivos e negativos
*/


int main () {
	
	// Variaveis
	int num, contPosit = 0, contNegat = 0, nulo= 0; // 5 numeros inteiros e 3 contadores.
	
	
	// Codigo

	// Usando Estrutura de repetição fica mt melhor. for - while.
	printf("\nDigite o primeiro numero: ");
	scanf("%d", &num);
	if (num < 0) 
	{
		contNegat++;
	} else if (num > 0){
		contPosit++;
	} else {
		nulo++;
	}	
	
	printf("\nDigite o segundo numero: ");
	scanf("%d", &num);
	if (num < 0) 
	{
		contNegat++;
	} else if (num > 0){
		contPosit++;
	} else {
		nulo++;
	}	
	
	printf("\nDigite o terceiro numero: ");
	scanf("%d", &num);
	if (num < 0) 
	{
		contNegat++;
	} else if (num > 0){
		contPosit++;
	} else  {
		nulo++;
	}	
	
	printf("\nDigite o quaro numero: ");
	scanf("%d", &num);
	if (num < 0) 
	{
		contNegat++;
	} else if (num > 0){
		contPosit++;
	} else {
		nulo++;
	}	
		
	printf("\nDigite o quinto numero: ");
	scanf("%d", &num);
	if (num < 0) 
	{
		contNegat++;
	} else if (num > 0){
		contPosit++;
	} else {
		nulo++;
	}	
	
	printf("\n\nValores positivos:%d\nValores negativos: %d\nValores nulos: %d\n", contPosit, contNegat, nulo);
	return 0;
}
