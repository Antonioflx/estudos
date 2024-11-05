#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Ex001:
		1) Escreva um procedimento que receba um vetor inteiro, seu tamanho e os endereços de duas
		variáveis inteiras, menor e maior, salve nestas variáveis o menor e o maior valor do vetor.
*/

// Posso passar como parametro -> em vez de int vet[] -> int *vet, mas prefiro utilizar int vet[] para facilitar a leitura.

void numMaiorEMenor(int vet[], int tam, int *pMaior, int *pMenor) {
	
	int i;
	// o maior e o menor é o 1 indice.
	*pMaior = *pMenor = *vet;
	
	for(i = 1; i < tam; i++) {
		if(*pMaior < *(vet + i)) 
			*pMaior = *(vet + i);
			
		if(*pMenor > *(vet + i))
			*pMenor = *(vet + i);
	}
}


int main() {
	
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	int vet[] = {-2, 2, 3, 4, 5, 6, 7, 8, 9, 20};
	int tamanho = sizeof(vet)/4;
	int maior, menor;
	
	numMaiorEMenor(vet, tamanho, &maior, &menor);
	printf("Maior: %d\nMenor: %d", maior, menor);
	return 0;
} 
