#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Aula 185: De quanta memória um ponteiro precisa?
	
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
		
	int *p;
	
	// Codigo
	printf("\nTamanho: %d\n", sizeof(p));
	
	/*
		O ponteiro tem tamanho 8 bytes, porque é o necessário para armazenar qualquer endereço
		de memória em sistemas 64bits.
		
		O valor está diretamente relacionado com a 
		quantidade de memória que tenho na minha máquina
		
	*/
	
	return 0;
} 
