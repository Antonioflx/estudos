#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//	Aula 168: Como criar uma struc com dados lidos do teclado 


typedef struct  {
	
	int idade;
	char sexo;
	char nome[50];
} Pessoa;



int main() {
	
	Pessoa person;
	
	
	printf("\nDigite o seu nome: ");
	fgets(person.nome, 50, stdin);
	
	printf("Digite o seu sexo [M/F]: ");
	scanf("%c", &person.sexo);
	
	printf("Digite a sua idade: ");
	scanf("%d", &person.idade);
	
	
	printf("\nNome: %sIdade: %d\nSexo: %c\n", person.nome, person.idade, person.sexo);
	return 0;
}
