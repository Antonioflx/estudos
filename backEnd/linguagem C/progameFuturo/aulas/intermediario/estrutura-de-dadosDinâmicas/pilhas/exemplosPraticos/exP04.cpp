#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

/*
	EXERC�CIO
	
	4) Nota��o p�s-fixa polonesa reversa (calculadoras HP)
	
	Infixa									P�s - fixa
	
	(51+13*12)								51 13 12 * + 				R = 207
	(5 * (3+2)/4-6)							5 3 2 + * 4 / 6 -			R = 0,25
	(5+3+2*4-6*7*1)							5 3 + 2 4 * + 6 7 * 1 * - 	R = -26
	(5*(3+(2*(4+(6*(7+1))))))				5 3 2 4 6 7 1 + * + * + * 	R = 535	
	
	
	For numero -> empilha
	for operador -> desempilha o penultimo e o �ltimo
	
	1. 5 1 3 * + ->  1 * 3 = 3
	2. 5 3 + -> 5 + 3 = 8
	3. R = 8
	
	
	Nova fun��o
	
	strtol() 
	-> converte uma string representando numeros inteiro para numeros inteiros
	
	str -> string
	tol -> to long
	
	3 parametros
		1. Qual a string que cont�m o numero
		2. Salvar o restante da palavra // 58 anos -> anos salvaria em outra variavel -> ponteiro para ponteiro
		3. a base n�merica -> converter para decimal 10
		
*/
 
typedef struct no {
	float valor;
	struct no *proximo;
} t_No;

// empilhar
t_No* empilhar(t_No *pilha, float num) {
	t_No *novo = (t_No*)malloc(sizeof(t_No));
	
	if(novo) {
		novo->valor = num;
		novo->proximo = pilha;
		
		return novo;
	} else
		printf("\nVixeee!");
	return NULL;
		
	
}

// desempilhar
t_No* desempilhar(t_No **pilha) {
	t_No* remover = NULL;
	
	if(*pilha) {
		remover = *pilha;
		*pilha = remover->proximo;
		
	} else
		printf("\nPilha vazia!\n");
	return remover;
}

float resultado(float num1, float num2, char operacao) {
		
	switch(operacao) {
		
		case '+' :
			return num1 + num2;
			break;
			
		case '-' :
			return num1 - num2;
			break;
			
		case '*' :
			return num1 * num2;
			break;
			
		case '/' :
			return num1 / num2;
			break;
			
		default : return 0.0;
	}
}

float resolverExpressao (char x[]) { 
	
	char *pt;
	t_No *n1, *n2, *pilha = NULL;
	float num;
		
	pt = strtok(x, " ");
	
	while(pt) {
		if(
			pt[0] == '+' || pt[0] == '-' ||
			pt[0] == '/' || pt[0] == '*'
		) 
		{
			n1 = desempilhar(&pilha);
			n2 = desempilhar(&pilha);
			num = resultado(n2->valor, n1->valor, pt[0]);
			pilha = empilhar(pilha, num);
			
			free(n1);
			free(n2);
		} 
		else 
		{
			num = strtol(pt, NULL, 10);
			pilha = empilhar(pilha, num);
		}
		pt = strtok(NULL, " ");
	}
	
	n1 = desempilhar(&pilha);
	num = n1->valor;
	free(n1);
	
	return num;
}

int main() {
	
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	char exp[50] = {"5 3 2 4 6 7 1 + * + * + *"};
	
	printf("Resultado de %s == \t", exp);
	printf("%.2f\n", resolverExpressao(exp));
	
	
	// Desafio -> pegar a infixa fazer q o progama transforme para p�s-fixa
	// e fa�a esse procedimento
	return 0;
} 
