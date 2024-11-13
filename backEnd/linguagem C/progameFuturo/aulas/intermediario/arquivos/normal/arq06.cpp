#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
		Aula 213: Como escrever em um arquivo texto com a função fprintf()?
		
		
		Modos de abertura de arquivos:
			w -> Escrita // Se o arquivo não existe, ele cria.
			r -> Leitura
			a -> Anexar
			r+ -> Leitura e Escrita
			w+ -> Leitura e Escrita (Apaga o conteúdo caso o arquivo exista)
			a+ -> Leitura e Escrita (Adiciona ao final do arquivo)	
			
			fprintf -> Mesma ação do printf dentro do arquivo.
				Recebe 2 parametros:
					1) O arquivo
					2) Escrever normal que nem o printf().
*/

// parametros -> vetor de caracteres.
void escrever(char f[]) {
	FILE *file = fopen(f, "w+");
	char nome[50];
	int opcao, idade;
	float altura;
		
	if(file){
		int i = 1;
		do {
			fprintf(file, "\n\tDADOS %d:\n\n", i);
			i++;
			printf("\nDigite o seu nome: ");
			fgets(nome, 50, stdin);
			printf("Digite a sua idade e altura: ");
			scanf("%d%f", &idade, &altura);
			scanf("%c");
			fprintf(file, "O seu nome é: %sA sua idade é: %d\nA sua altura: %.2f\n", nome, idade, altura);
			
			printf("\n[0] - sair, [1] - para inserir outro registro.\nINFORME: ");
			scanf("%d", &opcao);
			scanf("%c");
		} while(opcao == 1);
		fclose(file); // fechar o arquivo.
	}
	else 
		printf("\n[ERRO]\n");
	
}


int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	
	char nome[] = {"conto.txt"};
	
	escrever(nome);
//	ler(nome);
	return 0;
} 
