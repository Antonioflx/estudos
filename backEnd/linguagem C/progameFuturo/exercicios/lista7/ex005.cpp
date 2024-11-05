#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Ex005:
		5) Implemente a função strcpy (char *destino, char *origem) usando ponteiros.
*/

int strcpy(char *destino, char *origem) {
	int i = 0;
	
	for(i = 0; *(origem + i) != '\0'; i++)
		*(destino + i) = *(origem + i);
		
	*(destino + i) = '\0';
	

	return i;
}


int main() {
	
	char destino[25], origem[25] = {"Bom dia."};
	
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	printf("Tamanho: %d\n", strcpy(destino, origem));
	printf("Destino: %s\n", destino);
		
	return 0;
} 
