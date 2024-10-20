#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
	Aula 153: Funções e procedimentos recursiva
	Exemplo: imprimir todos os números de n até 0.
	
	Recursiva -> chamar uma função ou procedimento dentro dela mesmo.
	
	Recursão -> precisa ter um ponto de parada.
*/

void printNumbers(int num) {
	
	/* 	1 forma:
		int i;
	
		for (i = num; i >= 0; i--)
		printf("Numero %d\n", i);
	
	*/
	
	// 2 forma:
	
	// Ordem decrescente
//	if(num == 0)
//		printf("Num %d\n", num);
//	else {
//		printf("Num %d\n", num);
//		printNumbers(num - 1); // n da para usar num--; -> entra em loop
//	}
	
	// Ordem crescente
	if(num == 0)
		printf("Num %d\n", num);
	else {
		/* 
			Por que isso deu certo? 
			Atraves da recursividade, o compilador armazena os valores em uma pilha
			Nesse sentido, quando finalizar essa verificação, ou seja, num == 0;
			Ele vai desempilhar -> Meio que finalizar esse procedimento.
			Assim, ele vai retornar até a chamda recursiva, quando num era igual 1, terminou a chamada
			fará o printf, assim sucessivamente.
		*/
		
		printNumbers(num - 1); 
		printf("Num %d\n", num);
	}
	
}

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	int n;
	
	printf("Digite um valor maior que zero: ");
	scanf("%d", &n);

	printNumbers(n);
	
	// codigo
	return 0;
} 
