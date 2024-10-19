#include <stdio.h>
#include <stdlib.h>

/*
		ex016:
		NAO SEI.
		16) Faça um programa para jogar o jogo da velha. Ao final imprima o resultado do jogo e pergunte
		se deseja jogar novamente.
*/
int main () {

	// Variaveis
	int l, c, linha, coluna, jogador, ganhou, jogadas, opcao;
	
	char jogo[3][3];
	// Codigo
	
	do 
	{
		// reinicializar vars, caso o usuario comece tudo de novo
		jogador = 1;
		ganhou = 0;
		jogadas = 0;
		
		// Inicializar a estrutura
		for (l = 0; l < 3; l++)
		{
			for(c = 0; c < 3; c++)
			{
				jogo[l][c] = ' ';
			}
		}
		
		do 
		{
			// Imprimir jogo
			printf("\n\n\t 0   1   2 \n\n");
			for (l = 0; l < 3; l++)
			{
				for(c = 0; c < 3; c++)
				{
					if (c == 0)
					{
						printf("\t");
					}
					printf(" %c ", jogo[l][c]);
					if (c < 2)
					{
						printf("|");
					}
					if (c == 2)
					{
						printf("  %d", l);
					}
				}
				if (l < 2)
				{
					printf("\n\t-----------");
				}
				printf("\n");
			}
			
			printf("\n");
			
			// Ler coordenadas
			do 
			{
				printf("JOGADOR %d: Digite a linha e a coluna que deseja jogar: ", jogador);
				scanf("%d%d", &linha, &coluna);
			}while (linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || jogo[linha][coluna] != ' ');
			
			
			// Salvar coordenadas
			if (jogador == 1)
			{
				jogo[linha][coluna] = 'O';
				jogador++;
			} 
			else
			{
				jogo[linha][coluna] = 'X';
				jogador = 1;
			}
			jogadas++;
			
			// ganhou por linha
			if (jogo[0][0] == 'O' && jogo[0][1] == 'O' && jogo[0][2] == 'O' ||
			jogo[1][0] == 'O' && jogo[1][1] == 'O' && jogo[1][2] == 'O' ||
			jogo[2][0] == 'O' && jogo[2][1] == 'O' && jogo[2][2] == 'O') 
			{
				printf("\nPARABENS! O jogador 1 venceu por linha\n");
				ganhou = 1;
			}
			
			if (jogo[0][0] == 'X' && jogo[0][1] == 'X' && jogo[0][2] == 'X' ||
			jogo[1][0] == 'X' && jogo[1][1] == 'X' && jogo[1][2] == 'X' ||
			jogo[2][0] == 'X' && jogo[2][1] == 'X' && jogo[2][2] == 'X') 
			{
				printf("\nPARABENS! O jogador 2 venceu por linha\n");
				ganhou = 1;
			}
			
			// ganhou por coluna
			if (jogo[0][0] == 'O' && jogo[1][0] == 'O' && jogo[2][0] == 'O' ||
			jogo[0][1] == 'O' && jogo[1][1] == 'O' && jogo[2][1] == 'O' ||
			jogo[0][2] == 'O' && jogo[1][2] == 'O' && jogo[2][2] == 'O') 
			{
				printf("\nPARABENS! O jogador 1 venceu por coluna\n");
				ganhou = 1;
			}
			
			if (jogo[0][0] == 'X' && jogo[1][0] == 'X' && jogo[2][0] == 'X' ||
			jogo[0][1] == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X' ||
			jogo[0][2] == 'X' && jogo[1][2] == 'X' && jogo[2][2] == 'X') 
			{
				printf("\nPARABENS! O jogador 2 venceu por coluna\n");
				ganhou = 1;
			}
			
			// diagonal principal
			if (jogo[0][0] == 'O' && jogo[1][1] == 'O' && jogo[2][2] == 'O')
			{
				printf("\nPARABENS! O jogador 1 venceu na diag. principal\n");
				ganhou = 1;
			}
			if (jogo[0][0] == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X')
			{
				printf("\nPARABENS! O jogador 2 venceu na diag. principal\n");
				ganhou = 1;
			}
			// diagonal secundaria;
			if(jogo[0][2] == 'O' && jogo[1][1] == 'O' && jogo[2][0] == 'O')
			{
				printf("\nPARABENS! O jogador 1 venceu na diag. secundaria\n");
				ganhou = 1;
			}
			if(jogo[0][2] == 'X' && jogo[1][1] == 'X' && jogo[2][0] == 'X') 
			{
				printf("\nPARABENS! O jogador 2 venceu na diag. secundaria\n");
				ganhou = 1;
			}
		} while(ganhou == 0 && jogadas < 9);
		
		if(ganhou == 0)
			printf("\nO jogo finalizou sem ganhandor!\n");
		
		printf("\n\nDigite 1 para jogar novamente: ");
		scanf("%d", &opcao);
	} while(opcao == 1);
	
	return 0;
}
