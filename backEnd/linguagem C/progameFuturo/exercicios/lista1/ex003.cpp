#include <stdio.h>

/* 
			Aula 12
	Ler dois caracteres
*/

int main() { 

// Variaveis

char carac1, carac2;

// Codigo

printf("Digite uma letra: ");
scanf("%c", &carac1);

printf("Digite uma letra: ");
scanf(" %c", &carac2);

printf("\nPrimeiro caractere: %c\nSegundo caractere: %c\n", carac1, carac2);

/* 

printf("Digite dois caracteres: ");
scanf("%c %c", &carac1, &carac2);

printf("\nPrimeiro caractere: %c\nSegundo caractere: %c\n", carac1, carac2);

*/
}
