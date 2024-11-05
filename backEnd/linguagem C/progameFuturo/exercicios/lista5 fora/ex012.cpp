#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
/*
	10. Crie um aplicativo de conversão entre as temperaturas Celsius e Farenheit.
	Primeiro o usuário deve escolher se vai entrar com a temperatura em Célsius ou Farenheit, depois a conversão escolhida é realizada através de um comando SWITCH.
	Se C é a temperatura em Célsius e F em farenheit, as fórmulas de conversão são:
	C= 5.(F-32)/9
	F= (9.C/5) + 32
*/


float convToCel(float fah) {
	
	float cel = 5 * (fah - 32)/9;
	
	return cel;
	
}

float convToFah(float cel) {
	
	float fah = cel * 1.8 + 32;
	
	return fah;
	
}


int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	char resp;
	
	printf("\n----------- M E N U ------------\n[F] - Digitar temp em Fah\n[C] - Digitar temp em Cel\n");
	printf("---------------------------------\n");
	
	printf("\nPS: Se escolher Fah -> Irá converter para Cel, caso Cel -> Fah\n");
	printf("INFORME: ");
	scanf("%c", &resp);
	
	switch (resp) {
		
		case 'F' : 
			float fah;
			printf("\nInforme a temperatura em Farenheit: ");
			scanf("%f", &fah);
			printf("\nValor em F: %.1f\nConvertendo...\nValor em C: %.1f", fah, convToCel(fah));
		break;
		
		case 'C' :
			float cel;
			printf("\nInforme a temperatura em Celsius: ");
			scanf("%f", &cel);
			printf("\nValor em C: %.1f\nConvertendo...\nValor em F: %.1f", cel, convToFah(cel));
		break;
		
		default : break;
			
	}

	
	
	return 0;
} 
