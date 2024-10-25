#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//	Aula 170: De quanta memória uma struct precisa?
// 	O computador precisa de bytes para gerenciar esse tipo de memoria para o struct.


typedef struct {
	int dia, mes, ano;
}DataNasc;


typedef struct  {
	// Posso atribuir para o struct. Mas, preciso definir o struct antes 
	DataNasc dataNasc; 
//	int idade;
//	char sexo;
	char nome[50];
} Pessoa;



int main() {
	
	// Para criar mais "pessoas" Pessoa pessoa1, pessoa2, pessoa3;
	
	Pessoa pessoa;
	DataNasc data;
	
	printf("TAMANHO: %d\n", sizeof(data));
	printf("TAMANHO: %d\n", sizeof(pessoa));
	
	return 0;
}
