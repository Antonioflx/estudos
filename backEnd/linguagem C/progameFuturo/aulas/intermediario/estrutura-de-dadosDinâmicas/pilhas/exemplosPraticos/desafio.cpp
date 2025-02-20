#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// desafio

/*

	EXERC�CIO
	
	4) Nota��o p�s-fixa polonesa reversa (calculadoras HP)
	
	Infixa									P�s - fixa
	
	(51+13*12)								51 13 12 * + 				R = 207
	(5 * (3+2)/4-6)							5 3 2 + * 4 / 6 -			R = 0,25
	(5+3+2*4-6*7*1)							5 3 + 2 4 * + 6 7 * 1 * - 	R = -26
	(5*(3+(2*(4+(6*(7+1))))))				5 3 2 4 6 7 1 + * + * + * 	R = 535	
	
	
	/ Desafio -> pegar a infixa fazer q o progama transforme para p�s-fixa
*/

// estrutura da pilha

typedef struct no {
	float valor;
	struct no *proximo;	
} t_No;

// fun�ao para empilhar
t_No *empilhar (t_No *pilha, float num) {
	t_No *novo = (t_No*)malloc(sizeof(t_No));
	
    // verificar se a aloca��o deu certo
    if(novo) {
        novo->valor = num; // o valor da estrutura receber� o numero.
        novo->proximo = pilha; // o pr�ximo n� ser� apontado para pilha
        return novo; // retornar o novo topo.
    } else // A aloca��o deu errado.
        printf("Vixee!");
	return NULL; // -> retorna NULL
}


// fun��o para desempilhar
t_No *desempilhar(t_No **pilha) {
    t_No *remover = NULL; // criar uma var para receber o topo

    if(*pilha) { // verifica se pilha � diferente de NULL -> Sim, existe n� na pilha
        remover = *pilha; // atribui a pilha para a var remover
        *pilha = remover->proximo; // atribuir a pilha para o pr�ximo n�
    } else // A pilha est� vazia.
        printf("\nPilha vazia!\n");
    return remover; // retornar remover
}

void infixa_to_posFixa(char exp[]) {
    char *salvarExp[50] = {exp};

    char *pt;

    pt = strtok(exp, " "); 

    // (51 + 13 * 12) -> 51 13 12 *

    while(pt) {
        if(pt[0] == '(') {

        }
    }

}


int main () {
	
	// lingua
	setlocale(0, "Portuguese");
	
	// colocar a express�o infixa -> transformar para p�s - fixa e empilhar e fazer o calculo.

    char expressao[50] = {"(51 + 13 * 12)"}; // 51 13 12 * +

	char *salvarExp[50] = {expressao};
	
	printf("\nTeste 1: %s\n", expressao);
	printf("\nTeste 2: %s\n", *salvarExp);
	float num;
//	strcat(expressao, exp2);
	
//    infixa_to_posFixa(expressao);
	
//	for(int i = 0; expressao[i] != '\0'; i++){
//		if(expressao[i] == '(') {
//			expressao[i] = ' ';
//		}
//	}
		
	
	char *pt;
	
	pt = strtok(expressao, " ");
	
	while(pt) {
		num = strtol(pt, NULL, 10);
		printf("\nNUM: %.2f", num);
		pt = strtok(NULL, " ");
	}
	
	return 0;
}
