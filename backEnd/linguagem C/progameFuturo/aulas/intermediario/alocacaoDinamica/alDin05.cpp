#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/*
		Aula 201: Como liberar memória alocada dinamicamente com a função free
					
			
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	srand(time(NULL));
	/* 
		Forma estática:
			int tam;
			
		//	pedir ao usu o tamanho do vetor
		
			int vet[tam];
	*/
	
	// forma dinâmica:
	
	int tam, *vet, i;
	
	printf("\nDigite o tamanho do vetor: ");
	scanf("%d", &tam);
	
	vet = (int*)malloc(tam * sizeof(int));
	
	if(vet) {
		printf("\nMemoria alocada com sucesso:\n");
		for(i = 0; i < tam; i++) 
			*(vet + i) = rand() % 10;
		
		for(i = 0; i < tam; i++) 
			printf("%d Elemento: %d\n", i + 1, *(vet + i));
		
		printf("\nDigite o novo tamanho do vetor: ");
		scanf("%d", &tam);
		
		/*
			O realloc -> ele realoca uma nova região de memória, 
			copiar tudo que está no vetor para uma nova região 
			de memória -> trabalhar com o vetor alterado.
		*/
		vet = (int*)realloc(vet, tam * sizeof(int));
		
		printf("\nVetor realocado:\n");
			
		for(i = 0; i < tam; i++) 
			printf("%d Elemento: %d\n", i + 1, *(vet + i));
			
		free(vet); // Não precisa mais de memória. Liberar memória.f
	}
	else 
		printf("\n[ERRO]");
	return 0;
} 
