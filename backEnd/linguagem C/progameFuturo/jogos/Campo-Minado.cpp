#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
// Criar um campo Minado

// Variaveis globais
int i, j;
int jogo[10][10];


// Procedimento para atribuir os valores ' ' quando iniciar o jogo
void inicializarJogo() {
	
	for(i = 0; i < 10; i++)
		for(j = 0; j < 10; j++)
			jogo[i][j] = ' ';
}


// Procedimento para imprimir a interface do jogo;
void imprimir () {
	
	printf("\n\t\t   C A M P O  M I N A D O\n");
	printf("\n\n\t    0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9  \n\t  -----------------------------------------\n");

	for(i = 0; i < 10; i++){	
		printf("\t%d |", i);
		for (j = 0; j < 10; j++) {
			printf(" %c ", jogo[i][j]);
			if(j < 10)
				printf("|");
		}
		printf("\n");
		if(i < 10)
			printf("\t  -----------------------------------------\n");
	}
}

// Parte do jogo;
/*	
	* - Bomba
	0 - Nenhuma bomba, abre os lados.
	1 - 1 bomba do lado;
	2 - 2 Bomba do lado
	3 - 3 bomba do Lado;
*/

// Atribuir as bombas a matriz;

void inicializarBombas () {
	// 3 bombas ao maximo ao lado	
	srand(time(NULL));
	
	int contador = 0;
	
	// Atribuir coordenadas aleatórias para as bombas.
	
	jogo[0][0] = -1;
	jogo[3][3] = -1;
	jogo[6][6] = -1;
	jogo[4][2] = -1;
	jogo[0][9] = -1;
	jogo[9][9] = -1;
	
//	do {
//		bomba[rand() % 10][rand() % 10] = '*';
//		contador++;
//	} while(contador < 3);


}

// Atribuir casas seguras, os valores da casa têm que estar de acordo com o número de bombas adjacentes
// Logo, se tiver 1 bomba próxima - Num 1.

// Definir os valores das casas.
int quantidadeBombaAdjacente(int coordX, int coordY) {
	
	int quantidade = 0;
	
	// passar por cada casa.
	for(i = coordX - 1; i < coordX + 1; i++) {
		for(j = coordY - 1; j < coordY + 1; j++) {
			// Fazer a verificação em cada casa adjacente
			if(i >= 0 && i < 10 && j >= 0 && j < 10) {
				if(jogo[i][j] == -1)
					quantidade++;
			}
		}
	}
	
	// Atribuir a quantidade de bombas adjacentes tem na coordenada que o usu digitou.
	jogo[coordX][coordY] = quantidade;
	
	return quantidade;
}

// Fazer a verificação se o usuário ganhou;
// Ganha se marcar todas as casas que são seguras.



// Fazer a verificação se o usuário perdeu;
// Perde se acertar a bomba;
int perdeu(int linha, int coluna) {
	return jogo[linha][coluna] == -1 ? 0 : 1;
}


// Validação das coordenadas.
int validarCoord(int i, int j) {
	if(i >= 0 && i < 10 && j >= 0 && j < 10 && jogo[i][j] == ' ')
		return 1;
	else
		return 0;
}


void lerCoord() {
	
	int linha, coluna;
	
	printf("\n\nDigite as coordenadas da celula desejada: ");
	scanf("%d%d", &linha, &coluna);
	
	// Validar as coordenadas.
	while(validarCoord(linha, coluna) == 0) {
		printf("Coordenadas invalidas! Digite linha e coluna: ");
		scanf("%d%d", &linha ,&coluna);
	}
	
	if(perdeu(linha, coluna) == 0) {
		printf("\nVocê Perdeu\n");
		exit(0);
	} 
	else
		quantidadeBombaAdjacente(linha, coluna);
}


void jogar() {
	int vitoria = 0;

    // Inicializar bombas antes de começar a jogar
    inicializarBombas();
    
    // Ler as coordenadas
    do {
        imprimir();
        lerCoord();
        vitoria++;
    } while (vitoria < 5);
	
}


int main () {
	
	setlocale(0, "Portuguese");
	// Inicializar o jogo
	inicializarJogo(); 
	
	// Jogar
	jogar();
	
	
	return 0;	
}
