#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
		Aula 133: Como descobrir o tamanho de uma string?

*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	int i;
	char palavras[55] = {"Oi.  Vamos aprender a progamar com a linguagem C?"};
	
	
	
	
	// Codigo
	
	printf("\nDigite o seu nome completo: ");
	//	scanf("%30[^\n]", palavras);
	fgets(palavras, 50, stdin); // fazer leitura de texto do arquivo. F -> File.
	
	
	for (i = 0; palavras[i] != '\0'; i++) {
		if(palavras[i] == '\n') 
			palavras[i] = '\0';
		else
			printf("indice %d: %c\n", i, palavras[i]);
	}
		
		
	
	
	return 0;
} 
