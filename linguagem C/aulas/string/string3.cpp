#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
		Aula 131: Lendo uma string com a função fgets()
		// fgets(1 parametro, 2 parametro, 3 parametro)
		// fgets(onde salvar[var], tamanho do vetor, buffer de teclado); 
		stdin === entrada padrao do nosso computador. TECLADO.
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	char palavras[50];
	
	
	
	
	// Codigo
	
	printf("\nDigite o seu nome completo: ");
	//	scanf("%30[^\n]", palavras);
	fgets(palavras, 50, stdin); // fazer leitura de texto do arquivo. F -> File.
	
	
	printf("%s", palavras);
	
	return 0;
} 
