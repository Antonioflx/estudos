#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//	Aula 173: Como criar uma função que retorna uma struct?.


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
	printf("\tData de Nascimento: %d/%d/%d\n", p.dataNasc.dia, p.dataNasc.mes, p.dataNasc.ano);
	
	
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
	
	return p;
	
}



int main() {
		
	Pessoa pessoa;
		
	pessoa = lerPessoa();
	imprimirPessoa(pessoa);		
	return 0;
}
