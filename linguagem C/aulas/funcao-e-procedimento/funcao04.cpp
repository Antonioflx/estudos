#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/*
		Aula 150: Funcao que retorna a soma
		de uma coluna da matriz.
*/



// Criar um procedimento para imprimir a matriz


void printMat(int mt[][5]) {
	
	int i, j, tam = 5;
	printf("\n");
	for(i = 0; i < tam; i++){
		for(j = 0; j < tam; j++)
			printf("%2d ", mt[i][j]);
		printf("\n");
	}
}

// funcao para somar a linha da matriz
int somaLinhaMat(int m[][5], int l){
	
	int j, soma = 0, tam = 5;
	
	for(j = 0; j < tam; j++)
		soma += m[l][j];
		
	return soma;
}

// Criar uma funcao para somar a coluna.

int somaColMat(int mt[][5], int c) {
	
	int somaCol = 0;
	int i, tam = 5;
	
	
	for(i = 0; i < tam; i++)
		somaCol += mt[i][c];
	
	return somaCol;
}


int main() {
	
	srand(time(NULL));
	
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	int i, j, tam = 5;
	int mat[5][5];
	
	
	// Codigo
	for(i = 0; i < tam; i++){
		for(j = 0; j < tam; j++)
			mat[i][j] = rand() % 10;
	}
	
	// Chamar o procedimento para imprimir a matriz.
	printMat(mat);
	
	
	// Pedir ao usuario qual coluna ele quer somar
	
	int coluna;
	
//	printf("\n\nQual coluna voce quer somar? PS: [0 -> é o inicio]\nINFORME:  ");
//	scanf("%d", &coluna);
//	
//	while (coluna < 0 || coluna > 5){
//		printf("Digite o valor corretamente. \n");
//		printf("\nQual coluna voce quer somar? PS: [0 -> é o inicio]\nINFORME:  ");
//		scanf("%d", &coluna);
//	}
//	
//	printf("\nVoce PEDIU:\nSoma da coluna %d = %d\n\n", coluna, somaColMat(mat, coluna));
	
	// Imprimir a soma da Linha
	printf("\n");
	for(i = 0; i < tam; i++)
		printf("Soma da Linha %d = %d\n", i, somaLinhaMat(mat, i));
	
	// Imprimir a soma da Coluna
	printf("\n");
	for(i = 0; i < tam; i++)
		printf("Soma da coluna %d = %d\n", i, somaColMat(mat, i));
	return 0;
} 



