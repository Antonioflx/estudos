#include <stdio.h>

/*
			Aula 9
		Lendo caracteres
		função fgetc();  f -> File (arquivo)
*/

int main(){
	
	char letra;
	
	printf("Digite um caractere: ");
	letra = fgetc(stdin);
	
	printf("\nCaracter Lido: %c ", letra);
	return 0;
}
