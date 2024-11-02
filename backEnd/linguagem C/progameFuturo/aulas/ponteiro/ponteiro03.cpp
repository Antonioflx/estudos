#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Aula 186: Por que nao usamos o & ao ler
		uma string com a função scanf?
	
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
		
	char palavra[100];
	char *p, *pPalavra;
	
	char palavra2[] = {"Testando"};
	char *pPalavraTeste;
	
	
	int numero[] = {1, 2, 3, 4};
	int *pInt;
	
	// Codigo
	scanf("%100[^\n]", palavra);
	printf("\n\n%s\n", palavra);
	
	printf("\n\nTESTE 1:\n");
	printf("%p\n", palavra);
	printf("%p\n", &palavra);
	printf("%p\n", &palavra[0]);
	printf("%p\n", &palavra[1]);
	printf("%p\n", &palavra[2]);
	printf("%p\n", &palavra[3]);
	
	printf("\nTESTE 2:\n");
	p = &palavra[2];
	printf("%p\n", p);
	printf("%s\n",  p);
	
	pPalavra = palavra;
	printf("\nTESTE 3:\n");
	printf("%p\n", pPalavra);
	printf("%s\n",  pPalavra);
	
	pInt = numero;
	printf("\nTESTE 4:\n");
	printf("%p\n", pInt);
	printf("%d\n",  pInt);
	
	
	pPalavraTeste = palavra2;
	printf("\nTESTE 5: \n");
	printf("%p\n", pPalavraTeste);
	printf("%c\n",  *pPalavraTeste); 
	// n pode colocar o * antes da pPalavraTeste, visto que se colocarmos, temos que mudar a máscara para %c
	
	/*
		Um vetor é como um ponteiro, se colocarmos para mostrar o ednereço, vai retornar o endereço inicial.
	*/
	
	return 0;
} 
