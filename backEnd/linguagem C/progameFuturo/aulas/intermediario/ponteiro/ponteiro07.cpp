#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Aula 190: É possível ponteiro para Struct?
		
*/

typedef struct {
	
	int dia, mes, ano;
} t_Data;

void imprimirData(t_Data *x) {
	/*
		x -> seria um ponteiro
		
		struct normal
		
		t_Data data;
		
		// Acessar o dia;
		data.dia;
		
		Em um ponteiro, precisa utilizar ->
		
		t_Data *x;
		
		x->dia;
	*/
	
	x->mes < 10
		? printf("%d/0%d/%d", x->dia, x->mes, x->ano) 
		: printf("%d/%d/%d", x->dia, x->mes, x->ano);
}


int main() {
	
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	t_Data data;
	t_Data *p;
	
	p = &data;
	
	
	
	printf("\ndata: %p\tp: %p\n",&data, p);
	
	
	
	data.dia = 29;
	data.mes = 2;
	data.ano = 2021;
	
	imprimirData(p);
	
	printf("\n\n\t[PRODECIMENTO]\n");
	data.mes < 10
		? printf("%d/0%d/%d", data.dia, data.mes, data.ano) 
		: printf("%d/%d/%d", data.dia, data.mes, data.ano);
	return 0;
} 
