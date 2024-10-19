#include <stdio.h>

/*
		ex001
		Ler tres valores e apresentar qual é o maior e qual é o menor.
*/

int main () {
	
	// Variavies
	
	int val, val1, val2, maior, menor;
	
	// Codigo
	
	printf("\nDigite tres valores inteiros: ");
	scanf("%d%d%d", &val, &val1, &val2);
	
	if (val > val1 && val > val2) // Est de Cond para declarar o maior valor.
	{
		maior = val;
		if (val1 > val2) 
		{  // Estrutura de condicao para declarar o menor valor
		} else 
		{
			menor = val2;
		}
	} else if(val1 >val && val1 > val2)
	{
		maior = val1;
		if (val > val2) 
		{
			menor = val2;
		} else 
		{
			menor = val;
		}
	} else 
	{
		maior = val2;
		if (val > val2) 
		{
			menor = val2;
		} else 
		{
			menor = val;
		}
	}
	
	printf("\n\nPrimeiro valor: %d\nSegundo valor: %d\nTerceiro valor: %d", val, val1, val2);
	
	printf("\n\nEntre os valores > %d, %d, %d\nO maior valor e: %d", val, val1, val2, maior);
	printf("\n\nEntre os valores > %d, %d, %d\nO menor valor e: %d", val, val1, val2, menor);
	return 0;
}
