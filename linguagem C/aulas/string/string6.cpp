#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Aula 132: Como descobrir o tamanho de uma string
		com a função strlen()?
		str => string
		len => length
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	int i;
	char palavras[55] = {"Oi.  Vamos aprender a progamar com a linguagem C?"};
	
	
	
	
	// Codigo
	
	printf("\nTamanho: %d", strlen(palavras));
	//	scanf("%30[^\n]", palavras);
	//	fgets(palavras, 50, stdin); // fazer leitura de texto do arquivo. F -> File.
		
		
	
	
	return 0;
} 
