#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
		teste
		
*/

// parametros -> vetor de caracteres.
void escrever(char f[]) {
	FILE *file = fopen(f, "w+");
	char texto[500];
	
	if(file){
		printf("Digite uma frase ou 1 caractere para finalizar: \n");
		fgets(texto, 500, stdin); 
		while(strlen(texto) > 1) {
			fputs(texto, file);
			fgets(texto, 500, stdin);
		}
		fclose(file); // fechar o arquivo.
	}
	else 
		printf("\n[ERRO]\n");
	
}


int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	
	char nome[] = {"teste.rtf"};
	
	escrever(nome);
	return 0;
} 
