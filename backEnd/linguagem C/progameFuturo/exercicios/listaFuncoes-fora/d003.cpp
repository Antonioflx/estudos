#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


/*
	Desafio 3: Programe um aplicativo em C que ache todos os números perfeitos até 1000.
	Número perfeito é aquele que é a soma de seus fatores. 
	Por exemplo, 6 é divisível por 1, 2 e 3 ao passo que 6 = 1 + 2 + 3.
	Nao pode dividir por ele mesmo.
	
	
	
	Nm pftt
	6, 28, 496;
	
*/




int perfectNum(int n) {
		
	int soma = 0;	
	
	
	for(int i = 1; i < n; i++){
		if(n % i == 0) 
			soma += i;
	}
	
	if(soma == n)
		return 1;
	
	return 0;
}


int main() {	
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	int i;
	
	for (i = 1; i <= 1000; i++) {
		if(perfectNum(i))
		 	printf("O numero [%d] é perfeito!\n", i);
	}
	
	return 0;
} 
