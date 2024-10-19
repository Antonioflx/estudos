#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/*
		Aula 149: Função que retorna a soma de uma linha de matriz.
*/

// transformando int tam -> em variavel global

int tam = 5;

// procedimento para imprimir a matriz.
void imprimirMat(int m[][5]){

	int i, j;
	
	for(i = 0; i < tam; i++){
		for(j = 0; j < tam; j++)
			printf("%2d ", m[i][j]);
		printf("\n");	
	}
	
}




// funcao para somar a linha da matriz
int somarLinhaM(int m[][5], int l){
	
	int j, soma = 0;
	
	for(j = 0; j < tam; j++)
		soma += m[l][j];
		
	return soma;
}

int main() {
	
	srand(time(NULL));
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	
	int mat[5][5];
	int i, j;
	// codigo
	
	for(i = 0; i < tam; i++){
		for(j = 0; j < tam; j++)
			mat[i][j] = rand() % 10;
	}
	
	imprimirMat(mat);
	
	
	// pedir ao usuario qual linha ele quer somar.
	int linha;
	
	printf("\n\nDigite a linha que quer somar: ");
	scanf("%d", &linha);
	
	printf("\n\nVOCE PEDIU:\nLinha %d -> SOMA: %d\n\n", linha, somarLinhaM(mat, linha));
	
	// fazer um loop para imprimir todas.
	printf("\nSOMAS DAS LINHAS:\n");
	for(i = 0; i < tam; i++)
		printf("\nLinha %d -> SOMA: %d", i, somarLinhaM(mat, i));
		
	return 0;
} 



