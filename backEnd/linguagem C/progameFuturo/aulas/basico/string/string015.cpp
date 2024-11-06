#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
		Aula 142: Matriz de String na linguagem C
*/

int main(){

    char nomes[5][25]; // coluna -> define o num de caracteres.
    int l;

    for(l = 0; l < 5; l++){
        printf("\nDigite o nome da posicao %d. ", l);
        scanf("%25[^\n]", nomes[l]);
        scanf("%c");
    }

    for(l = 0; l < 5; l++)
        printf("\nNome na posicao %d: %s", l, nomes[l]);

    return 0;
}
