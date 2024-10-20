#include <stdio.h>

/*
			Aula 7
		Lendo caracteres
		função getchar()
*/

int main() {
	
	
	// Variáveis
	
	char letra;
	
	printf("\n\nDigite uma letra: ");
	letra = getchar(); // == scanf("%c", &letra);
	
	printf("\nCaracter lido: %c\n", letra);
	
	
	return 0;
}
