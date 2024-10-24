#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/*
	Aula 166: Jogo da velha	
*/

// variáveis globais x 0 " ";
char jogo[3][3];
int i, j;

// procedimento para inicializar todas as posicoes da matriz

void inicializarJogo() {
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++)
			jogo[i][j] = ' ';
	}	
}

// procedimento para imprimir o jogo na tela

void imprimir() {
	printf("\n\n\t 0   1   2 \n\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++) {
			if(j == 0)
				printf("\t");
			printf(" %c ", jogo[i][j]);
			if(j < 2)
				printf("|");
				
			if(j == 2)
				printf("   %d",i);
		}
		
		printf("\n");
		if(i < 2)
			printf("\t-----------\n");
	}
}


/*
	Funcao para verificar vitória por linha
	1 - ganhou
	0 - nao ganhou ainda
*/

int ganhouPorLinha(int l, char c) {
	if(jogo[l][0] == c && jogo[l][1] == c && jogo[l][2] == c)
		return 1;
	else
		return 0;
}

/*
	Funcao para verificar vitória por linha
	1 - ganhou
	0 - nao ganhou ainda
*/

int ganhouPorLinhas(char c) {
	
	int ganhou = 0;
	for(i = 0; i < 3; i++){
		ganhou += ganhouPorLinha(i, c);
	}
	
	return ganhou;
		
}


/*
	Funcao para verificar vitória por coluna
	1 - ganhou
	0 - nao ganhou ainda
*/

int ganhouPorColuna(int j, char c) {
	if(jogo[0][j] == c && jogo[1][j] == c && jogo[2][j] == c)
		return 1;
	else
		return 0;
}

/*
	Funcao para verificar vitória por coluna
	1 - ganhou
	0 - nao ganhou ainda
*/

int ganhouPorColunas(char c) {
	
	int ganhou = 0;
	for(j = 0; j < 3; j++){
		ganhou += ganhouPorColuna(j, c);
	}
	
	return ganhou;
		
}

/*
	Funcao para verificar vitória por Diagonal principal
	1 - ganhou
	0 - nao ganhou ainda
*/

int ganhouPorDiagPrinc(char c) {
	if(jogo[0][0] == c && jogo[1][1] == c && jogo[2][2] == c)
		return 1;
	else
		return 0;
}

/*
	Funcao para verificar vitória por Diangonal secundaria
	1 - ganhou
	0 - nao ganhou ainda
*/

int ganhouPorDiagSecun(char c) {
	if(jogo[0][2] == c && jogo[1][1] == c && jogo[2][0] == c)
		return 1;
	else
		return 0;
		
}


/*
	Funcao para validar a coordenada
	1 - é valida
	0 - não é valida
*/

int validarCoord(int i, int j) {
	if(i >= 0 && i < 3 && j >= 0 && j < 3 && jogo[i][j] == ' ')
		return 1;
	else
		return 0;
}

// procedimento para ler as coordenadas do jogador
void lerCoord(char j) {
	int linha, coluna;
	
	printf("\nDigite linha e coluna: ");
	scanf("%d%d", &linha ,&coluna);
	
	while(validarCoord(linha, coluna) == 0) {
		printf("Coordenadas invalidas! Digite linha e coluna: ");
		scanf("%d%d", &linha ,&coluna);
	}
	
	jogo[linha][coluna] = j;
}

// função que retorna a quantidade de posições vazias

int quantVazias() {
	
	int quantidade = 0;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++) {
			if(jogo[i][j] == ' ')
				quantidade++;
		}
	}
	
	return quantidade;
}

// procedimento jogar com o loop principal do jogo

void jogar() {
	int jogador = 1, vitoriaX = 0, vitoriaO = 0;
	char jogador1 = 'X', jogador2 = '0';
	
	do {
		imprimir();
		if(jogador == 1){
			lerCoord(jogador1);
			jogador++;
			vitoriaX += ganhouPorLinhas(jogador1);
			vitoriaX += ganhouPorColunas(jogador1);
			vitoriaX += ganhouPorDiagPrinc(jogador1);
			vitoriaX += ganhouPorDiagSecun(jogador1);
		}
		else {
			lerCoord(jogador2);
			jogador = 1;
			vitoriaO += ganhouPorLinhas(jogador2);
			vitoriaO += ganhouPorColunas(jogador2);
			vitoriaO += ganhouPorDiagPrinc(jogador2);
			vitoriaO += ganhouPorDiagSecun(jogador2);
		}
	} while(vitoriaX == 0 && vitoriaO == 0 && quantVazias() > 0);
	
	imprimir();
	
	if(vitoriaO == 1)
		printf("\n\nParabéns Jogador 2. Você ganhou!!!\n");
	else if(vitoriaX == 1)
		printf("\n\nParabéns Jogador 1. Você ganhou!!!\n");
	else
		printf("\nQue pena! Foi empate.\n!!!\n");
}

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	int opcao;
		
	do {
		inicializarJogo();
		jogar();
		
		printf("\nDigite 1 para jogar novamente: ");
		scanf("%d", &opcao);
	} while(opcao == 1);
	
	return 0;
} 
