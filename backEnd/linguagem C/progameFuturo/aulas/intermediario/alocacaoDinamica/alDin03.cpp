#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/*
				Aula 199: Como alocar um vetor dinâmico?
			
			
				Alocação Dinâmica:
			
			Declarando variáveis dinâmicas:
		
				O recurso de memória será utilizado 
				quando meu progama estiver em  execução.
		
				Essas variáveis ficam em regiões separadas da memória:
				
				A região de memória que fica as variáveis dinâmicas é
				bem maior do que a região de memória para as variáveis estáticas:
				
				Isso acontece, 
				porque a maior parte da memória é gerenciada durante o uso da progamação:		
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
			printf("%d Elemento: %d\n", i + 1, *(vet++));
		
	
	}
	else 
		printf("\n[ERRO]");
	return 0;
} 
