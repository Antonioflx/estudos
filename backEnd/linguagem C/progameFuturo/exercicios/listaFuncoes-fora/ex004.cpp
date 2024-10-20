#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <Math.h>

/*
	3. Usando as 3 funções acima, crie um aplicativo que calcula as raízes de uma equação do 2o grau:
	ax² + bx + c=0
	Para ela existir, o coeficiente 'a' deve ser diferente de zero.
	Caso o delta seja maior ou igual a zero, as raízes serão reais. 
	Caso o delta seja negativo, as reais serão complexas e da forma: x + iy
	
	// Utilizei int só por questao que eu quis mesmo, mas é so trocar todos os %d por %f, e
	as declarações int por float.
*/



int raizX1(int delta, int a, int b) {
	
	int x1 = ((-b * -b) + sqrt(delta)) / (2 * a); 
	
	return x1;
}


int raizX2(int delta, int a, int b) {
	
	
	int x2 = ((-b * -b) - sqrt(delta)) / (2 * a); 
	
	return x2;
}

void raizDeltNegativo(int delta, int a, int b) {
	
	int realPart = -b /2 * a;
	int imagPart = sqrt(-delta) / (2  * a);
	
	printf("\n\tx1 = %d + %di\n", realPart, imagPart);
	printf("\tx2 = %d - %di\n", realPart, imagPart);
}



void deltValue(int a, int b, int c) {
	
	printf("[%dx2 %dx %d = 0]\n\nRESULTADOS:\n", a, b, c);
	
	if(a == 0) {
		printf("\nNão é possivel calcular o valor de Delta.");
	} else {
		int delta = b * b - 4 * a * c;
		printf("\n\tDELTA = %d", delta);
		if(delta >= 0) {
			printf("\n\tx1 = %d\n", raizX1(delta, a, b));
			printf("\tx2 = %d\n", raizX2(delta, a, b));	
		} 
		else if (delta == 0)
			printf("\nImpossivel calcular:\n\tDELTA = %d", delta);
		else {
			raizDeltNegativo(delta, a, b);
		}
		
	}
}
	
	




int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	int a, b, c;
	
	printf("Digite tres numero: ");
	scanf("%d%d%d", &a, &b, &c);
	
	printf("\nFUNCAO: ");
	deltValue(a, b, c);
	
	
	return 0;
} 
