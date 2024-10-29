#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//	Aula 174: Como construir o tipo eletrônico com typedef Struct?.


typedef struct  {
	// Posso atribuir para o struct. Mas, preciso definir o struct antes 
	char tipo[50];
	char marca[20];
	char modelo[20];
	char consumoDeEnergia;
	char descricao[300];
	int quantidade;
	int codigo;
	float preco;
} Eletronico;


// procedimento para imprimir

void imprimirEletronico(Eletronico elet) {
	
	
	printf("\n\n\tTipo: %s", elet.tipo);
	printf("\tMarca: %s", elet.marca);
	printf("\tModelo: %s", elet.modelo);
	printf("\tEnergia: %c", elet.consumoDeEnergia);
	printf("\n\tQuantidade: %d", elet.quantidade);
	printf("\n\tCodigo: %d",  elet.codigo);
	printf("\n\tPreço: %.2f", elet.preco);
	printf("\n\tDescrição: %s", elet.descricao);
	
	
	
	
}


// funcao para ler os dados da pessoa

Eletronico lerEletronico() {
	
	Eletronico elet;
	

	printf("\nDigite qual é o tipo do eletrônico: ");
	fgets(elet.tipo, 50, stdin);
	
	printf("Digite a marca do produto: ");
	fgets(elet.marca, 20, stdin);

	printf("Digite o modelo do produto: ");
	fgets(elet.modelo, 20, stdin);
	
	printf("Digite a eficiência energética do produto: ");
	scanf("%c", &elet.consumoDeEnergia);
	scanf("%c");
	
	printf("Descreva o produto: ");
	fgets(elet.descricao, 300, stdin);
	
	printf("Quantidade disponível: ");
	scanf("%d", &elet.quantidade);
	
	printf("Codigo do produto: ");
	scanf("%d", &elet.codigo);
	scanf("%c");
	
	printf("Preço: ");
	scanf("%f", &elet.preco);
	
	return elet;
	
}



int main() {
	
	setlocale(0, "Portuguese");
	Eletronico elet;
		
	elet = lerEletronico();
	imprimirEletronico(elet);	

	
	
			
	
	return 0;
}
