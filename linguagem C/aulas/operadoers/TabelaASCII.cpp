#include <stdio.h>


/* 
					Aula 30
			tabela ascii e acentuação
			1 byte (8 bits) --> -128 até 127
			unsigned 1 byte -> 0 até 255
			
			9 é o caractere de tabulação \t.
			10 é o caractere de nova linha \n (enter).
			65 é a letra A maiúsucla.
			66 é a letra B maiúscula.
			90 é a letra Z maiúscula.
			
			1ª = setelocale(LC_ALL, NULL); // padrão da Linguagem C
			2ª = setelocale(LC_ALL , ""); // padrão do sistema operacional
			3ª = setelocale(LC_ALL, "Portuguese"); // português brasileiro
*/

int main() {
	
	printf("%c", 254);
	return 0;
}
