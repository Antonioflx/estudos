#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
		Aula 214: Como ler um arquivo texto com a função fscanf()?
		
		
		Modos de abertura de arquivos:
			w -> Escrita // Se o arquivo não existe, ele cria.
			r -> Leitura
			a -> Anexar
			r+ -> Leitura e Escrita
			w+ -> Leitura e Escrita (Apaga o conteúdo caso o arquivo exista)
			a+ -> Leitura e Escrita (Adiciona ao final do arquivo)	
			
			
			fscanf()
				Recebe 3 parametros:
					1) O arquivo
					2) Padrao que eu quero ler -> Mascaras
					3) Variáveis
								
*/

// parametros -> vetor de caracteres.
void escrever(char f[]) {
	
	FILE *file = fopen(f, "w+");
	
	char nome[50];
	int opcao, idade;
	float altura;
		
	if(file){
		do {
			printf("\nDigite o seu nome, idade e altura: ");
			scanf("%50[^\n]%d%f", nome, &idade, &altura);
			fprintf(file, "%s %d %.2f\n", nome, idade, altura);
			printf("\n[0] - sair, [1] - para inserir outro registro.\nINFORME: ");
			scanf("%d", &opcao);
			scanf("%c");
		} while(opcao == 1);
		fclose(file); // fechar o arquivo.
	}
	else 
		printf("\n[ERRO]\n");
	
}

void ler(char f[]) {
	FILE *file = fopen(f, "r");
	char nome[50];
	int idade;
	float altura;
	
	if(file) {
		printf("\n\tDados lidos do arquivo:\n");
//		printf("\nRETORNO -> %d\n", fscanf(file, "%s%d%f", nome, &idade, &altura)); // retorna a quantidade de info lidas
//		printf("\nRETORNO -> %d\n", fscanf(file, "%s%d%f", nome, &idade, &altura));
//		printf("\nRETORNO -> %d\n", fscanf(file, "%s%d%f", nome, &idade, &altura));
		// Nesse caso (4) vez, n tem nada -> retorna -1.
//		printf("\nRETORNO -> %d\n", fscanf(file, "%s%d%f", nome, &idade, &altura)); 

		while(fscanf(file, "%s%d%f", nome, &idade, &altura) != -1) 
			printf("\n\tNome: %s\n\tIdade: %d\n\tAltura: %.2f\n", nome, idade, altura);
		
		
		fclose(file);
	}
}

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	char nome[] = {"conto.txt"};
	escrever(nome);
	ler(nome);
	return 0;
} 
