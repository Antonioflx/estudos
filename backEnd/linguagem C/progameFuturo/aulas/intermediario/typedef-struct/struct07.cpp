#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//	Aula 174: Como criar um vetor de struct?.


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


// procedimento para imprimir

void imprimirPessoa(Pessoa p) {
	
	printf("\n\tNome: %s\tSexo: %c\n\tIdade: %d\n", p.nome, p.sexo, p.idade);
	printf("\tData de Nascimento: %d/%d/%d\n\n", p.dataNasc.dia, p.dataNasc.mes, p.dataNasc.ano);
	
	
}


// funcao para ler os dados da pessoa

Pessoa lerPessoa() {
	
	Pessoa p;
	
	printf("\nDigite o seu nome: ");
	fgets(p.nome, 50, stdin);
	
	printf("Digite o seu sexo [M/F]: ");
	scanf("%c", &p.sexo);

	printf("Digite a sua idade: ");
	scanf("%d", &p.idade);
	
	printf("Digite sua data de nascimento no formato dia, mes, ano: ");
	scanf("%d%d%d", &p.dataNasc.dia, &p.dataNasc.mes, &p.dataNasc.ano);
	scanf("%c");
	return p;
	
}



int main() {
	int i;
	Pessoa pessoas[3];
		
	// Digitar após receber os dados.
	for(i = 0; i < 3; i++) {
		pessoas[i] = lerPessoa();	
		imprimirPessoa(pessoas[i]);	
	}		
	
	// Digitar tudo junto
//	for(i = 0; i < 3; i++)
//		imprimirPessoa(pessoas[i]);	
	return 0;
}
