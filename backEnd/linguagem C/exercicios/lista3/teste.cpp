#include <stdio.h>

/*
		20) Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. O
		monge, necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser feito com
		grãos de trigo dispostos em um tabuleiro de xadrez (que possui 64 casas), de tal forma que o
		primeiro quadro deveria conter apenas um grão e os quadros subsequentes, o dobro do quadro
		anterior. Crie um programa para calcular o total de grãos de trigo que o monge recebeu.
		
		long long int %d -> %lld ou %lli
		long double %lf -> &Lf
		funcao -> __mingw_printf();
		
*/
int main () {
	
	
	// Variaveis
	
	int cont;
	
	long double graos = 1, soma = 1;
	
	
	// Codigo
	

	
	for (cont = 2; cont <= 64; cont++)
	{
		graos = 2 * graos;
		soma += graos;
		__mingw_printf("\n %Lf * %d = %Lf\n", graos, cont, soma);
	}
	printf("\nFazendo a soma...\n");
	__mingw_printf("\nTOTAL: %Lf", soma);
	return 0;
}


