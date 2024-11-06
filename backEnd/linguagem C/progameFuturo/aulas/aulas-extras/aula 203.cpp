#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/*
		Aula 204: Duvida
		
	Foram digitadas três linhas, onde cada uma das linhas contêm o nome e a nota de um aluno.
	Escreva um progama que leia essas informações e monte uma tabela onde a primeira coluna é 
	o nome e a segunda coluna é a nota.
	
	3 linhas = 3 alunos.
	
	
					Nome:		Nota:
	Aluno 1 ->		Antonio		10
	Aluno 2 ->		Camila		5
	Aluno 3 ->		Felix		0	
	
	
	// Poderia utilizar struct -> Mt melhor na minha visão
	// Vou fazer dos dois jeitos.
	
	// Essa foi com struct.
*/

// struct para obter os dados
typedef struct {
	char nome[50];
	float nota;
} t_Aluno;


// funcao para obter os dados da pessoa.
t_Aluno pedirDados() {
	
	t_Aluno aluno;
	printf("\nNome completo: ");
	fgets(aluno.nome, 50, stdin);
	
	
	printf("Nota: ");
	scanf("%f", &aluno.nota);
	scanf("%c"); // pegar o enter.
	
	while(aluno.nota < 0 || aluno.nota > 10) {
		printf("\nNota Inválida!. Digite corretamente\n");
		printf("Nota: ");
		scanf("%f", &aluno.nota);
		scanf("%c"); // pegar o enter.
	}
	// retornar aluno;
	
	return aluno;
}

// imprimir os dados.
void imprimirDados(int index, t_Aluno aluno) {
	
	printf("\tAluno %d:\n\n\tNome: %s\tNota: %.2f\n\n", 
			index + 1, 
			aluno.nome,
			aluno.nota
		);
	
}


int main() {
	
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	t_Aluno aluno[3];
	int i;
	printf("\n\n\tDADOS:\n\n");
	for(i = 0; i < 3; i++)
		aluno[i] = pedirDados();
		
	printf("\n\n\tTABELA:\n\n");
	for(i = 0; i < 3; i++)
		imprimirDados(i, aluno[i]);
	
	
	
	return 0;
} 

