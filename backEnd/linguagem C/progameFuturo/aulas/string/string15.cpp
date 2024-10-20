#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Aula 144: Leia uma frase e diga se ela é palíndroma.
		roma me tem amor
		a grama é amarga
		anotaram a data da maratona
		a mãe te ama
		a torre da derrota
		a sacada da casa
		luz azul
*/

// O que eu pensei, eliminar todos os "", meio que juntar. Utilizei a forma strtok(para substituir " " por NULL)

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	int tam, i, j = 0, iguais = 0, diferente = 0;
	char palavra[50], copia[50];
	
	printf("\nDigite uma frase: ");
	scanf("%50[^\n]", palavra);
	
	// remover => ?! ,;.
	
	for(i = 0; i < strlen(palavra); i++){
		if(palavra[i] != '!' && palavra[i] != '?' && palavra[i] != ' ' && palavra[i] != '.')
			copia[j++] = palavra[i];
	}
	
	copia[j] = '\0';
	
	printf("Original: %s\nCopia: %s\n", palavra, copia);
	
	tam = strlen(copia) - 1;
	for(i = 0; i < strlen(copia); i++){
		if(copia[i] != copia[tam]) 
			diferente++;
		tam--;
	}
	
	if(diferente != 0)
		printf("\nNão é palíndroma...\n");
	else
		printf("\nÉ palíndroma...\n");
		
	return 0;
} 
