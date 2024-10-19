#include <stdio.h>

/*
			ex005
		Calcular o IMC 
*/

int main () {

// variaveis

float peso,altura, ind;

// Codigo

	printf("\nDigite o seu peso(KG): ");
	scanf("%f", &peso);
	
	printf("\n\nDigite a sua altura(M): ");
	scanf("%f", &altura);
	printf("\n------------IMC----------");
	ind = peso / (altura * altura);
	
	if (ind < 18.5)
	{
		printf("\n\nVoce esta Abaixo do peso");
	} else if (ind < 25 )
	{
		printf("\n\nVoce esta com o Peso normal");
	} else if (ind < 30)
	{
		printf("\n\nVoce esta com Sobrepeso");
	} else if (ind < 35)
	{
		printf("\n\nVoce esta com Obesidade grau 1");
	} else if (ind < 40)
	{
		printf("\n\nVoce esta com Obesidade grau 2");
	} else 
	{
		printf("\n\nVoce esta com Obesidade grau 3");
	}
	return 0;
}
