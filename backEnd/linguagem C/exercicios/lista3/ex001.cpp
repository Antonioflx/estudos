#include <stdio.h>

/*
			Ex001
		Taubadinha 1 ate 10
*/

int main () {
	
	// Variaveis
	
	int num,res;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	for(int cont = 1; cont <= 10; cont++)
	{	
		res = num * cont;
		printf("%d * %d = %d\n", num, cont, res);
	}
	return 0;
}
