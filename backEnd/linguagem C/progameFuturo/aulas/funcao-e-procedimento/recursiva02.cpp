#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
	Aula 155: Fazer uma funcao que calcula e retorna o fatorial de n.
	
	// Eficiente, visto que calculca através da linha de recursao
	
	
						fat(6)
						  |
						fat(5)
						  |
						fat(4)
						  |
						fat(3)
						  |
						  
					Assim por diante.
			
	// 4 = 4 * 3 * 2  * 1
*/

int fatNum(int num) {
	
//	int i, fat = 1;
//	
//	for(i = num; i >= 1; i--) 
//		fat *= i;
//	return fat;


	if(num > 1)
		return num * fatNum(num - 1);
	else
		return 1;
}


int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	int n;
	
	printf("Digite um valor maior que zero: ");
	scanf("%d", &n);

	printf("%d! = %d", n, fatNum(n));
	
	// codigo
	return 0;
} 
