#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
	D�vida Aluno
		-> Aula 256: Como fazer uma FILA com varios tipos de dados?
	
	FiFo -> First-In, First-Out

*/

// estrutura de pessoa
typedef struct {
	char nome[50];
	int age;
} t_Pessoa;

// estrutura de dados da fila
typedef struct no {
	t_Pessoa pessoa; // dado
	struct no *proximo; // o ponteiro apontar para o pr�ximo n�
} t_No;

t_Pessoa dadosPessoa() {	
	t_Pessoa *pessoa = (t_Pessoa*)malloc(sizeof(t_Pessoa));
	
	printf("\nDigite o seu primeiro nome: ");
	fgets(pessoa->nome, 50, stdin);
	fflush(stdin);
	
	printf("Digite a sua idade: ");
	scanf("%d", &pessoa->age);
	
	return *pessoa;
}

// procedimendo para inserir o Dado na fila. -> No final
void inserirDado_na_fila (t_No **fila){
	t_No *novo = (t_No*)malloc(sizeof(t_No));
	t_No *aux; // No auxiliar
	if(novo) {
		novo->pessoa = dadosPessoa();
		
		// o valor do pr�ximo � nulo, pq?
		// porque sempre iremos fazer uma inser��o no final da fila
		novo->proximo = NULL; 
		
		// inserir na fila -> na primeira vez.
		if(!*fila) // fila est� vazia
			*fila = novo;
		else { 
		// na segunda vez, sempre ser� falso
		// precisamos percorrer a fila at� o final para inserir.
			aux = *fila; // aux est� recebendo o ponteiro para o primeiro n� da fila.
			
			while(aux->proximo) // percorrer at� encontrar o �ltimo n� -> que aponta para NULL
				aux = aux->proximo; // declarando
			// o while deu falso, oq indica que o ultimo n� � NULL
			aux->proximo = novo; // decleramos que o ultimo n� agora � o novo.
		}
		
	} else
		printf("\nDeu errado !");
}

// Fun��o para remover da fila -> Remover o final
t_No *removerDaFila(t_No **fila) {
	// criar uma var para remover
	t_No *remover = NULL;
	
	// verificar se a fila est� vazia ou n
	if(*fila) { // fila preenchida
		remover = *fila; // ponteiro remover -> recebe o conte�do do primeiro elemento  da fila
		// autalizar a fila
		*fila = remover->proximo;
	} else
		printf("\nFila est� vazia!\n");
	
	return remover;
}

// procedimento para imprimir a fila
void imprimir(t_No *fila) {
	printf("\n\t---------- FILA -----------\n\t");
	while(fila) { // fazer loop verificaindo se fila != NULL
		printf("Nome: %s\tIdade: %d\n\t", fila->pessoa.nome, fila->pessoa.age); // imprimir o dado
		fila = fila->proximo; // fila vai apontar para o proximo No. 
		// Isso precisa ser feito para n ficar em loop
	}
	printf("\n\t---------- FIM FILA -----------\n");
	
}

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	t_No *remover, *fila = NULL;
	int opcao;
	
	do {
		printf("\t0 - Sair\n\t1 - Inserir\n\t2 - Remover\n\t3 - Imprimir\nInforme: ");
		scanf("%d", &opcao);
		fflush(stdin);
		
		switch(opcao) {
			case 1:
				inserirDado_na_fila(&fila);
				break;
			case 2:
				remover = removerDaFila(&fila);
				if(remover) {
					printf("\nUsuario %sfoi removido com sucesso\n\n", remover->pessoa.nome);
					free(remover);
				} 
				break;
			case 3:
				imprimir(fila);
				break;
			default: printf("\n\nSaindo...\n");
		}
	} while (opcao);
	
	return 0;
} 
