#include <stdio.h>
#include <stdlib.h>
/*
            Aula 126: Eercício 15
        15) Dada uma matriz 4 x 4 faça um programa que diga se ela é um Quadrado Mágico
        ou não.

        -> Soma de todas as linhas, colunas, diagonal principal e secundária são iguais.
        Exemplo:
        16  3  2 13  = 34
         5 10 11  8  = 34
         9  6  7 12  = 34
         4 15 14  1  = 34
                            16 + 10 + 7 + 1 = 34
        34 34 34 34         13 + 11 + 6 + 4 = 34
*/

int main(){
    int tam = 4, l, c, soma, total, falha = 0;
    int mat[4][4] = {16,3,2,12,5,10,11,8,9,6,7,12,4,15,14,1};

    soma = 0;
    for(l = 0; l < tam; l++){ // soma da diagonal principal
        soma += mat[l][l];
    }
    printf("Diag. principal: %d\n", soma);
    total = soma; // salva a soma da diagonal principal na variável total

    soma = 0;
    for(l = 0; l < tam; l++){ // soma da diagonal secundária
        soma += mat[l][tam - 1 - l];
    }
    printf("Diag. secundaria: %d\n", soma);

    if(total != soma)
        printf("Diagonal secundaria eh diferente!\n");

    for(l = 0; l < tam; l++){ // soma da linhas
        soma = 0;
        for(c = 0; c < tam; c++)
            soma += mat[l][c];
        printf("Linha %d: %d\n", l, soma);

        if(total != soma){
            printf("Linha %d eh diferente\n", l);
            falha++;
        }
    }

    for(c = 0; c < tam; c++){ // soma das colunas são iguais
        soma = 0;
        for(l = 0; l < tam; l++)
            soma += mat[l][c];
        printf("Coluna %d: %d\n", c, soma);

        if(total != soma){
            printf("Coluna %d eh diferente\n", c);
            falha++;
        }
    }

    if(falha == 0)
        printf("\nHe um quadrado magico!!!!\n");

    return 0;
}
