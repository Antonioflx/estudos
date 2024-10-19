#include <stdio.h>


/*

			Aula 11 - Exercício
	Ler sexo idade, peso e altura.
*/

int main() {
	
// Variaveis
char sexo;
int idade;
float peso,altura;

// Codigo

printf("\n;-----------------M E N U--------------------;\n\n");
printf("SEXO-> [M]=Masculino ou [F]=Feminino\n");
printf("Qual e o seu sexo? ");
scanf("%c", &sexo);

printf("\nIDADE ->Apenas o numero EX: 21\n");
printf("Qual e a sua idade? ");
scanf("%d", &idade);

printf("\nPESO(KG) -> Apenas o numero EX: 85.2\n");
printf("Qual e o seu peso? " );
scanf("%f", &peso);

printf("\nALTURA(M) -> Apenas o numero EX: 1.75\n");
printf("Qual e a sua altura? ");
scanf("%f", &altura);

printf("\n;---------------P E R F I L--------------------;\n\n");

printf("SEXO: %c\nIDADE: %d\nPESO: %.1f\nALTURA: %.2f", sexo, idade , peso, altura);

	return 0;
} 
