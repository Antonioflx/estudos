#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Aula 146: Criando uma função que retorna o tamanho de uma string.



// tipo de retorno - identificador - parametros

int tamString(char str[]) {
	int tam = 0;
	
	while (str[tam] != '\0')
		tam++;
		
	return tam;
}





int main() {
	
	
	char vet[20] = {"Ola, tudo bem?"};
	
	
	printf("strlen: %d\n", strlen(vet));
	printf("Minha funcao: %d\n", tamString(vet));
//	strlen("oi");	
	
	return 0;
}
