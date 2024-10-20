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
	
	if (val > val1 && val > val2) // Verificar se (val) vai ser o maior
	{
		maior = val;
		if (val1 > val2) // Dizer qual dos valores restantes será o menor.
		{
			menor = val2;
		} else {
			menor = val1;
		}
	} 
	else if (val1 > val && val1 > val2) // Verificar se (val1) vai ser o maior
	{
		maior = val1;
		if (val > val2)
		{
			menor = val2;
		} else {
			menor = val;
		}
	} 
	else // Aqui so val2 pode ser maior.
	{
		maior = val2;
		if (val > val1) 
		{
			menor = val1;
		} else {
			menor = val;
		}
	} 
	
	
	printf ("\nValor 1: %d\nValor 2: %d\nValor 3: %d", val, val1, val2);
	printf("\n\nMaior valor: %d\t\tMenor valor: %d", maior , menor);
	
	return 0;
}
