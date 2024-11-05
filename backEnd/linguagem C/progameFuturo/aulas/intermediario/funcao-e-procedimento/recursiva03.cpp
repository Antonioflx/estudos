#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
	Aula 157: Fazer uma funcao que calcula o enésimo termo da sequência de fibonacci
	
	Totalmete custoso para o computador, visto que se torna uma arvore recursiva
	
	
							fibo(6)
						| 							|
				fibo(5)     +     				fibo(4)
		|					|				|				|
	fibo(4) 	+		 fibo(3)		fibo(3) 	+	fibo(2)
				
				Assim por diante.
		
	
	
	// fibonacci
	o proximo numero será a soma dos seus 2 antecessores
	
	0, 1, 1, 2, 3, 5, 8...
	
*/

int fibonacci(int num) {
		
	if(num == 1) 
		return 0; 
	else {
		
		if(num == 2)
			return 1;
		else 
			return fibonacci(num - 1) + fibonacci(num - 2);
	}
}


int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	int n;
	
	printf("Digite um valor maior que zero: ");
	scanf("%d", &n);

	
	printf("\n\nPOSIÇAO %d = %d", n, fibonacci(n));
	
	return 0;
} 
