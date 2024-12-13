#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
		Aula 219: Lendo um arquivo binário com a função fread()?
		
		
		Modos de abertura de arquivos:
		// Acrescenta o b -> binario.
			wb -> Escrita // Se o arquivo não existe, ele cria.
			rb -> Leitura
			ab -> Anexar
			rb+ -> Leitura e Escrita
			wb+ -> Leitura e Escrita (Apaga o conteúdo caso o arquivo exista)
			ab+ -> Leitura e Escrita (Adiciona ao final do arquivo)
	
	
		// Funções:
		fread() = f - > file ; write -> escrever == escrever no arquivo;
			Recebe 4 parametros:
				1) Recebe o endereço de memória -> Onde contem os dados que quero salvar (variavel)
				2) Tamanho do tipo de dado que quero escrever
				3) Quantas vezes iremos escrever essa variavel (tamanho), 1vez, 2 vezes,etc.
				4) Arquivo
				
*/

typedef struct{
	char nome[50];
	int dia,mes, ano;
} t_Contato;

void escrever(char arq[]) {
	t_Contato c;
	
	FILE *file = fopen(arq, "ab");
	
	if(file) {
		printf("\nDigite o nome e a data de nascimento -> dd/mm/aaaa: ");
		scanf("%49[^\n]%d%d%d", c.nome, &c.dia, &c.mes, &c.ano);	
		
		fwrite(&c, sizeof(t_Contato), 1, file);
		
		fclose(file);
	}else
		printf("\nNão foi possível abrir o arquivo!\n");
}

void lerArquivo(char arq[]) {
	
	t_Contato c;
	
	FILE *file = fopen(arq, "rb");
	
	
	if(file) {
		
		// colocar num loop para mostrar os nomes.
		printf("\n\n\tDADOS:\n\n");
		while(!feof(file)) {
//			printf("\nRETORNO: %d\n", fread(&c, sizeof(t_Contato), 1, file)); -> quando chega no final retorna 0.

			
			if(fread(&c, sizeof(t_Contato), 1, file))
				printf("NOME: %s\nDATA: %2d/%2d/%4d\n\n", 
									c.nome,
									c.dia,
									c.mes,
									c.ano);
		}
		fclose(file);
		
		// vai aparecer os outros nomes.
//		fread(&c, sizeof(t_Contato), 1, file);
//		printf("\nNOME: %s\nDATA: %2d/%2d/%4d\n", 
//								c.nome,
//								c.dia,
//								c.mes,
//								c.ano);
		
	} else 
		printf("\nNão foi possível abrir o arquivo!\n");
	
}

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// .txt -> texto
	// arquivo binário -> .dat
	char arquivo[] = {"agenda.dat"};
	
	escrever(arquivo);
	lerArquivo(arquivo);
	return 0;
} 
