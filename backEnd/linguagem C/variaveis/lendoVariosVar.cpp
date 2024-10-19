#include <stdio.h>

/*
			Aula 10
	Lendo vários valores
*/


int main(){
	
	// Variaveis
	int n, n1, n2;
	
/* 	Ler um por um.

	printf("\n----------------------\n\n");
	printf("Digite o [1] numero inteiro: ");
	scanf("%d", &n);
	
	printf("\nDigite o [2] numero inteiro: ");
	scanf("%d", &n1);
	
	printf("\nDigite o [3] numero inteiro: ");
	scanf("%d", &n2);
	
	printf("Primeiro valor: %d\n Segundo valor: %d \n  Terceiro valor: %d", n, n1, n2);
	
	printf("\n------------------------"); 
*/
	
// Ler tudo de uma vez.

	printf("Digite tres valores inteiros: ");
	scanf("%d%d%d", &n, &n1, &n2);
	
	printf("\nPrimeiro valor: %d\nSegundo valor: %d \nTerceiro valor: %d", n, n1, n2); 	
	
	return 0;
}
