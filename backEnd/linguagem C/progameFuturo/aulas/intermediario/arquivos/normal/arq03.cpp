#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
		Aula 210: Organizando nosso código em procedimentos.
		
		
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
	char letra;
	
	if(file){
		printf("\nDigite um texto e pressione ENTER ao finalizar!\n");
		printf("ESCRITA: ");
		scanf("%c", &letra); // ler o caractere digitado pelo usu
		
		// fazer uma repetição para ler todos os caracteres até o enter '\n';
		while ( letra != '\n') {
			fputc(letra , file); // Sempre aponta para o final do texto
			scanf("%c", &letra);
		}
		fclose(file); // fechar o arquivo.
	}
	else 
		printf("\n[ERRO]\n");
	
}

void ler(char f[]) {
	FILE *file = fopen(f, "r");
	char letra;
	
	if(file) {
		// N precisa utilizar o rewind();
		printf("\n\tTexto lido do arquivo:\n");
		while((letra = fgetc(file)) != EOF)
			printf("%c", letra);
		
		fclose(file);
	}
	else 
		printf("\n[ERRO]\n");
}

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	
	char nome[] = {"conto.txt"};
	
	escrever(nome);
	ler(nome);
	return 0;
} 
