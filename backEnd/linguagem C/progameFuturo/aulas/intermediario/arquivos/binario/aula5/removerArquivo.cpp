#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
		Aula 222: Como remover um arquivo com a função remove()?
				
		remove() -> remover
		Recebe 1 parametro:
			1) o nome do arquivo
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	char arquivoB[] = {"agenda.dat"};
	char arquivo[] = {"conto.txt"};
	FILE *file = fopen(arquivoB, "rb");
	
	if(file) {
		printf("\n\nArquivo removido com sucesso!\n");
		fclose(file);
		
		/*
			printf("\nRetorno: %d\n", remove(arquivoB)); 
			Se for possivel remover o arquivo -> retorna 0
			Caso não, retorna -1.	
			
		*/	
		remove(arquivoB);
		
	} else
//		printf("\nRetorno: %d\n", remove(arquivo)); // retorna -1, pq arquivo nao existe para ser removido
		printf("\n\nNão foi possível abrir o arquivo!\n\n");
	
	return 0;
} 
