#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
		Aula 212: Como ler linhas de texto com a função fgets?
		
		
		Modos de abertura de arquivos:
			w -> Escrita // Se o arquivo não existe, ele cria.
			r -> Leitura
			a -> Anexar
			r+ -> Leitura e Escrita
			w+ -> Leitura e Escrita (Apaga o conteúdo caso o arquivo exista)
			a+ -> Leitura e Escrita (Adiciona ao final do arquivo)	
*/

// parametros -> vetor de caracteres.
void escrever(char f[]) {
	FILE *file = fopen(f, "w+");
	char texto[500];
	
	if(file){
		printf("Digite uma frase ou 1 caractere para finalizar: \n");
		fgets(texto, 500, stdin); 
		while(strlen(texto) > 1) {
			fputs(texto, file);
			fgets(texto, 500, stdin);
		}
		fclose(file); // fechar o arquivo.
	}
	else 
		printf("\n[ERRO]\n");
	
}

void ler(char f[]) {
	FILE *file = fopen(f, "r");
	char texto[500];
	
	if(file) {
		printf("\n\tTexto lido do arquivo\n");
		
		while(!feof(file) && fgets(texto, 500, file)) { 
		// feof(file) -> final do arquivo , fgets(...) -> pegar as linhas e retornar um 0 se tem um \n
//			fgets(texto, 500, file); // Vai imprimir repetedimante a última linha, visto que é o \n.
			
//			printf("Retorno de fgets: %d\n", fgets(texto, 500, file)); // A ultima retorna 0.

			printf("\n---> %s", texto);
		}
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
