#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Aula 143: Leia uma palavra e diga se ela é palíndroma.
		ama
		arara
		asa
		osso
		radar
		reviver
		socos
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	int tam, i, iguais = 0, diferente = 0;
	char palavra[30], copia[30];
	
	printf("\nDigite uma palavra: ");
	scanf("%s", palavra);
	
	/* SOLUÇÃO 1:
		tam = strlen(palavra);
		for(i = 0; i <= strlen(palavra); i++) {
			copia[i] = palavra[tam - 1];
			tam--;
		}
		tam = strlen(palavra);
		
		for(i = 0; i < tam; i++){
			if(palavra[i] == copia[i])
				iguais++;
		}
		
		printf("\nORIGINAL: %s\nCOPIA: %s", palavra, copia);
		
		if(tam == iguais)
			printf("\nÉ palíndroma...\n");
		else
			printf("\nNão é palíndroma...\n");
	*/
	
	// Solução 2.
	
	tam = strlen(palavra) - 1; 
	
	i = 0; 
	
	while (tam >= i) { 
		if(palavra[i] != palavra[tam])
			diferente++;
		i++;
		tam--;
	}
		
	if(diferente != 0)
		printf("\nNão é palíndroma...\n");
	else
		printf("\nÉ palíndroma...\n");
	return 0;
} 
