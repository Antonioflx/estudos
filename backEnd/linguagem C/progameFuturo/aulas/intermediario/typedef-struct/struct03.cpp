#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//	Aula 169: Posso ter struct de struct

// estrutura para nascimento

typedef struct {
	int dia, mes, ano;
}DataNasc;


typedef struct  {
	// Posso atribuir para o struct. Mas, preciso definir o struct antes 
	DataNasc dataNasc; 
	int idade;
	char sexo;
	char nome[50];
} Pessoa;



int main() {
	
	// Para criar mais "pessoas" Pessoa pessoa1, pessoa2, pessoa3;
	
	Pessoa pessoa;
	
	
	printf("\nDigite o seu nome: ");
	fgets(pessoa.nome, 50, stdin);
	
	printf("Digite o seu sexo [M/F]: ");
	scanf("%c", &pessoa.sexo);

	printf("Digite a sua idade: ");
	scanf("%d", &pessoa.idade);
	
	printf("Digite sua data de nascimento no formato dia, mes, ano: ");
	scanf("%d%d%d", &pessoa.dataNasc.dia, &pessoa.dataNasc.mes, &pessoa.dataNasc.ano);
	
	
	printf("\nNome: %sIdade: %d\nSexo: %c\n", pessoa.nome, pessoa.idade, pessoa.sexo);
	printf("Data de Nascimento: %d/%d/%d\n", pessoa.dataNasc.dia, pessoa.dataNasc.mes, pessoa.dataNasc.ano);
	return 0;
}
