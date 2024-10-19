#include <stdio.h>


/*
			Aula 5
	Lendo números reais
*/

int main () {
	
	// Variáveis
	
	float numero = 3.1415;
	float numero1;
	
	// Para número reais a mascara utilizada é %f
	
	printf("\nO valor da variavel e de: %.2f\n", numero); // %.2f -> Configura a quantidade de casas de um número float.
	
	// Fazer o usuário digitar o valor.
	printf("\nDigite um numero real: ");
	scanf("%f", &numero1);
	printf("\n\n O valor digitado foi: %.3f", numero1);
	
	return 0;
}
