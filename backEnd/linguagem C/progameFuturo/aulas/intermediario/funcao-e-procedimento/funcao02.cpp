#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Aula 147: Criando um procedimento para imprimir uma string.


// Funcao -> retorna um valor
// Procedimento -> não retorna valores.


// tipo de retorno - identificador - parametros

// char -> obviamente char
// int -> inteiro
// float -> float
// void -> retorna vazio, não tem retorno

// funcao
int tamString(char str[]) {
	int tam = 0;
	
	while (str[tam] != '\0')
		tam++;
		
	return tam;
}


// procedimento
void imprimirString(char palavra[]) {
	
	// imprimir a string toda
	printf("String pelo procedimento: %s\n", palavra);
	
	int i;

	printf("\n\nCaractere por Caractere:\n");
	printf("PS: Atraves do procedimento: \n\n");

	// imprimir caractere por caractere
	for(i = 0; palavra[i] != '\0'; i++)
		printf("%c\n", palavra[i]);
	
}


int main() {
	
	
	char vet[20] = {"Ola, tudo bem?"};
	
	printf("strlen: %d\n", strlen(vet));
	printf("Minha funcao: %d\n", tamString(vet));
	
//	printf("Meu procedimento: %s\n", imprimirString(vet));
// Nao da para utilizar printf(procedimento), visto que o printf espera um retorno, o qual o procedimento não irá ter.
	imprimirString(vet);
	
	
	return 0;
}
