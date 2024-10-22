#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Aula 141: Como divir uma String com a função strtok():
	->	strtok(var, string)
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	char palavra[50] = {"Bom dia simpatia"};
	char *pt;
	// Codigo
	
	pt = strtok(palavra, " ");
	
	while(pt) {
		printf("%s\n", pt);
		pt = strtok(NULL, " ");
	}

	return 0;
} 
