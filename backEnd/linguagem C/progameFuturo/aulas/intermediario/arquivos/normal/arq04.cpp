#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
		Aula 211: Como escrever linhas de texto com a função fputs()?
		
		
		Modos de abertura de arquivos:
			w -> Escrita // Se o arquivo não existe, ele cria.
			r -> Leitura
			a -> Anexar
			r+ -> Leitura e Escrita
			w+ -> Leitura e Escrita (Apaga o conteúdo caso o arquivo exista)
			a+ -> Leitura e Escrita (Adiciona ao final do arquivo)
			
		Funções:
		
		fputs() = f -> file , put -> colocar, s -> string;
			Recebe dois parâmetros:
				1) A string que eu quero escrever
				2) O Arquivo
	
*/

// parametros -> vetor de caracteres.
void escrever(char f[]) {
	FILE *file = fopen(f, "w+");
	char texto[500];
	
	if(file){
		printf("Digite uma frase ou 1 caractere para finalizar: \n");
//		fgets(texto, 500, stdin); utilizando fgets
		scanf("%500[^\n]", texto);
		scanf("%c"); // ler o enter.
		while(strlen(texto) > 1) {
			fputs(texto, file);
			fputc('\n', file); // colocar o enter..
			scanf("%500[^\n]", texto);
			scanf("%c");
//			fgets(texto, 500, stdin);
		}
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
	return 0;
} 
