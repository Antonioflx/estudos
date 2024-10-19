#include <stdio.h>

/*
		ex009
*/


// Ler a quantidade de segundos e imprimir na tela a conversao para horas, minutos e segundos 
int main () {
	
	// Variaveis
	int hora,minuto,segundo,resto, valor;
	
	// Codigo
	
	// 1m --> 60s
	// 1hora --> 3600s
	
	printf("Digite um valor em segundos: ");
	scanf("%d", &valor); // valor -> O valor do segundo que o usuário digitou.
	
	
	hora = valor / 3600;
	resto = valor % 3600;
	
	minuto = resto / 60;
	resto %= 60;
	
	segundo = resto;
	
	printf("%d segundos - teria %.2d:%.2d:%.2d", valor, hora, minuto, segundo);
	
	return 0;
}
