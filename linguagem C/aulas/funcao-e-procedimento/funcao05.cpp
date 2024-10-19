#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


/*
		Aula 151: Cria um procedimento para 
		converter uma string para maiúsculo
		e para minusculo.
*/


// procedimento para imprimir a palavra em maiúsculo
void upperString(char str[]) {
	
	int i;
	for(i = 0; str[i] != '\0'; i++)
		str[i] = toupper(str[i]);
	
	printf("\nPalavra em MAIUSCULA: %s", str);	
}



// procedimento para imprimir a palavra em minusculo
void lowerString(char str[]) {
	
	int i;
	for(i = 0; str[i] != '\0'; i++)
		str[i] = tolower(str[i]);
	printf("Palavra em MINUSCULA: %s", str);	
}

int main() {
	
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	
	char palavra[50];
	
	// codigo
	printf("Digite uma palavra: ");
	fgets(palavra, 50, stdin);
	
	// chamar os procedimentos.
	upperString(palavra);
	lowerString(palavra);
		
	return 0;
} 



