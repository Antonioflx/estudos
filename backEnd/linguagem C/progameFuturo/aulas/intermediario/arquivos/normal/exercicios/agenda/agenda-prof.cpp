#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
	// Aula 215: AGENDA DE ANIVERSÁRIOS.:

*/

typedef struct {
	char nome[50];
	int dia, mes, ano;
}t_Contato;


// imprimir a interface e pedir os dados.
void imprimir(t_Contato **contato, int quant) {
	
	int i;
	
	printf("\n\t\tLista de Contatos:\n");
	printf("\t---------------------------------------\n");
	for(i = 0; i < quant; i++) {
		printf("\t%d Contato = %2d/%2d/%4d\t%s\n", 
				i + 1,
				contato[i]->dia, contato[i]->mes, contato[i]->ano, contato[i]->nome	
		);
	}
	printf("\t---------------------------------------\n");
}

// cadastrar o contato
int cadastrarContato(t_Contato **contato, int quant, int tam) {
	
	// fazer a verificação se quantidade é menor que o tamanho limite do vetor
	if(quant < tam) {
		t_Contato *novo = (t_Contato*)malloc(sizeof(t_Contato));
		
		printf("\nDigite o nome do contato: ");
		scanf("%50[^\n]", novo->nome);
		printf("\nDigite a data de aniversário [Dia, Mes, Ano]: ");
		scanf("%d%d%d", &novo->dia, &novo->mes, &novo->ano);
		getchar();
		contato[quant] = novo;
		return 1;
	}
	else {
		printf("\n\tImpossivel novo cadastro. Vetor cheio!\n");
		return 0;
	}
	
}

void alterarContato(t_Contato **contato, int quant) {
	
	int id;
	
	imprimir(contato, quant);
	
	printf("\n\tDigite o código do contato que deseja alterar: \n");
	scanf("%d", &id);
	getchar();
	id--; // decrementar
	
	while(id < 0 && id > quant) {
		printf("\n\tDigite um código válido: ");
		printf("\nDigite o código do contato que deseja alterar: ");
		scanf("%d", &id);
		getchar();
		id--; // decrementar
	}
	
	t_Contato *novo = (t_Contato*)malloc(sizeof(t_Contato));
	printf("\nDigite o nome do contato: ");
	scanf("%50[^\n]", novo->nome);
	printf("\nDigite a data de aniversário [Dia, Mes, Ano]: ");
	scanf("%d%d%d", &novo->dia, &novo->mes, &novo->ano);
	getchar();
	contato[id] = novo;
	
	
}

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	t_Contato *agenda[50];
	int opcao, tam = 50, quant = 0;
	
	do {
		printf("\n\t[0] -> Sair\n\t[1] -> Cadastrar\n\t[2] -> Altera\n\t[3] -> Imprimir\n\t[4] -> Salvar no arquivo\n\t[5] -> Ler arquivo\n");
		printf("\nSelecione: ");
		scanf("%d", &opcao);
		getchar();
		
		switch(opcao) {
			
			case 0 :
				break;
				
			case 1 :
				quant += cadastrarContato(agenda, quant, tam);
				break;
			
			case 2 :
				system("cls");
				alterarContato(agenda, quant);
				break;
			
			case 3 :
				system("cls");
				imprimir(agenda, quant);
				break;
			
			case 4:
				break;
			
			case 5:
				break;
				
			default : printf("\n\n\tValor inválido!\n"); break;
		}
		
	} while(opcao != 0);
	// colocar em arquivos
	return 0;
} 
