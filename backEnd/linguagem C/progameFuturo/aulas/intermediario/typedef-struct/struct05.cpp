#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//	Aula 172: Como criar um procedimento que recebe uma struct como parâmetro.


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

// 1 Forma
//void imprimirPessoa(char nome[], char sexo, int idade, int dia, int mes, int ano) {
//	
//	printf("\nNome: %sSexo: %c\nIdade: %d\n", nome, sexo, idade);
//	printf("Data de Nascimento: %d/%d/%d\n", dia, mes, ano);
//	
//	
//}

// 2 forma
void imprimirPessoa(Pessoa p) {
	
	printf("\n\tNome: %s\tSexo: %c\n\tIdade: %d\n", p.nome, p.sexo, p.idade);
	printf("\tData de Nascimento: %d/%d/%d\n", p.dataNasc.dia, p.dataNasc.mes, p.dataNasc.ano);
	
	
}




int main() {
	
	// Para criar mais "pessoas" Pessoa pessoa1, pessoa2, pessoa3;
	
	Pessoa pessoa;
	DataNasc data;
	
	printf("\nDigite o seu nome: ");
	fgets(pessoa.nome, 50, stdin);
	
	printf("Digite o seu sexo [M/F]: ");
	scanf("%c", &pessoa.sexo);

	printf("Digite a sua idade: ");
	scanf("%d", &pessoa.idade);
	
	printf("Digite sua data de nascimento no formato dia, mes, ano: ");
	scanf("%d%d%d", &pessoa.dataNasc.dia, &pessoa.dataNasc.mes, &pessoa.dataNasc.ano);
	
// Forma 1 de fazer
//	imprimirPessoa(pessoa.nome, pessoa.sexo, pessoa.idade, pessoa.dataNasc.dia, pessoa.dataNasc.mes, pessoa.dataNasc.ano);
	
	
// 2 forma
	imprimirPessoa(pessoa);		
	return 0;
}
