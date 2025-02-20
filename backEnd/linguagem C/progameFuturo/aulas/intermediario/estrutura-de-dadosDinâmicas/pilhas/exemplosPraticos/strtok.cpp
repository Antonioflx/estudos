#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
	funcao strtok() -> str -> string tok -> tokens 
	dividir em tokens
*/ 


int main() {
	
	char palavra[50] = {"Bom dia simpatia!"};
	char *p;
	
	printf("%s\n", palavra);
	
	p = strtok(palavra, " ");
	

	while(p) {
		printf("token: %s\n", p);
		p = strtok(NULL, " ");
	}
	
	
	return 0;
}
