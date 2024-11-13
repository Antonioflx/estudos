#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
		Aula 209: Como ler em arquivo texto com a função fgetc?
		
		
		Modos de abertura de arquivos:
			w -> Escrita // Se o arquivo não existe, ele cria.
			r -> Leitura
			a -> Anexar
			r+ -> Leitura e Escrita
			w+ -> Leitura e Escrita (Apaga o conteúdo caso o arquivo exista)
			a+ -> Leitura e Escrita (Adiciona ao final do arquivo)
	
	
		// Funções:
				
		rewind() = re -> resetar ou reposicionar ; wind -> ato de voltar
						 == reposicionar o ponteiro de leitura/escrita de um arquivo para o início.
			Faz com que o ponteiro volte para o início do arquivo, e possamos ler o conteúdo do mesmo.
			Recebe 1 parametro:
				1) O arquivo.
				
		fgetc() = f -> file ; get -> pegar -> c -> caractere == pegar caractere do arquivo.
			Recebe 1 parametro:
				1) O arquivo.
			Retornar um caractere.
			
		feof() = f -> file ; eof -> end of file == final do arquivo
			Recebe 1 parametro:
				1) O arquivo.
				
			PS: EOF -> É uma constante (Escreve em MAIUSCULO) da biblioteca stdio.h
					Ela indica o fim do arquivo. Valor -1 for fim de arquivo.
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// tipo ponteiro FILE (Arquivo);
	
	FILE *file;
	char letra;
	
	file = fopen("conto.txt", "w+"); // Escrever e ler.
	
	if(file) {
		printf("\nDigite um texto e pressione ENTER ao finalizar!\n");
		printf("ESCRITA: ");
		scanf("%c", &letra); // ler o caractere digitado pelo usu
		// fazer uma repetição para ler todos os caracteres até o enter '\n';
		while ( letra != '\n') {
			fputc(letra , file); // Sempre aponta para o final do texto
			scanf("%c", &letra);
		}
		
		// Para ler o conteúdo do texto, eu preciso voltar para o início.
		// utiliza a função rewind();
		rewind(file); 
		
		
		printf("\n\tTexto lido do arquivo:\n");
		// Fazer um loop até o fim -> utilizar a função feof();
		
		// feof() -> retorna true, quando chega no final, então precisamos utilizar o operador !
//		while(!feof(file)) {
//			letra = fgetc(file); // atribuir para letra e imprimir
//			printf("%c", letra);
//		}
	
	
		// Fazemos a atribuição e comparamos com o EOF -> O qual tem o valor -1.
		// Entao quando letra == -1 não será diferente de EOF.
		while((letra = fgetc(file)) != EOF)
			printf("%c", letra);
		
		// fechar arquivo com fclose();
		fclose(file);
	}
	else
		printf("\n\t--> ERRO\n");
	return 0;
} 
