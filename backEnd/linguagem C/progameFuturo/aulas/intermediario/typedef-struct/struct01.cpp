#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*	Aula 167: Como criar novos tipos de dados em C com typedef struct 
		Posso criar qualquer tipo de dados, pessoa, carro, etc.
		Funciona como uma caixa
	
*/



/* 	
	Para o tipo que iremos criar:\ -> funciona como uma caixa
		Inicia com typedef struct { tipos primitivos } Aqui: A gente define o nome.
			Ex1: 
				typedef struct {  
					int idade;
					char sexo;
					char nome[25];
				} Pessoa;
				
			Ex2:
				struct Pessoa2 {
					int idade;
					char sexo;
					char nome[25];
				};
*/

// Forma 1 de fazer.
// Para declarar na main -> Pessoa nome;
typedef struct {
	int idade;
	char sexo;
	char nome[40];
}Pessoa;


// 2 forma de fazer
// Para declarar na main -> struct Pessoa2 nome2;
struct Pessoa2 {
	int idade;
	char sexo;
	char nome[40];
};

int main() {
	
	// como definir a variavel. tipo nome -> int idade;
	
	// Para o struct da forma2 
	Pessoa pessoa1;
	
	// Como atribuir os valores -> 
	// colocar no nome da variavel criada, dps um ponto. e o tipo primitivo interno de pessoa e coloca o valor.
	
	pessoa1.idade = 21;
	pessoa1.sexo = 'M';
	
	// Com string não tem como atribuir o valor. Tem que utilizar a funcao strcpy(var onde vou salvar , o que eu vou salvar)
	strcpy(pessoa1.nome, "Antonio Felix");
	
	// Imprimir
	
	printf("\nNome: %s\nIdade: %d\nSexo: %c\n", pessoa1.nome, pessoa1.idade, pessoa1.sexo);
		
		
	// Para o struct da forma 2.
	struct Pessoa2 pessoa2;
	
	pessoa2.idade = 19;
	pessoa2.sexo = 'F';
	strcpy(pessoa2.nome, "NJ,KZ");
	
	printf("\nNome: %s\nIdade: %d\nSexo: %c\n", pessoa2.nome, pessoa2.idade, pessoa2.sexo);
	
	return 0;
}
