#include <stdio.h>


/* 

				Aula 11 (Outra forma)
		Ler idade, peso, altura, sexo
		
*/

int main() { 

	// variaveis
	
	char sexo;
	int idade;
	float peso, altura;
	
	// codigo
	
	printf("Digite idade, peso, altura e sexo ([M] ou [F]):\n");
	scanf("%d%f%f %c", &idade, &peso, &altura, &sexo);
	 // PS O espaço entre %f e %c - faz com que o sistema desconsidere o caractere espaço, tab, \n.
	 
	 printf("Idade: %d\nPeso: %.1f\nAltura: %.2f\nSexo: %c\n", idade, peso, altura, sexo);
}
