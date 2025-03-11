#include 	<stdio.h>
#include	<stdlib.h>
#include 	<locale.h>

/*
	Aula 241: Fila de prioridade 
	-> Inser��o no in�cio, meio e final da fila.
	
	Fila:
	
	1 2 3 -> Normal. Inserir Prioridade (Insere no in�cio)
	
	1P 1 2 3. -> Inserir 2 prioridade
	
	1P 2P 1 2 3. -> Insere ap�s a 1 prioridade e dps do 1 elemento normal da fila.
	
	

*/

// estrutura de dados da fila
typedef struct no {
	int dado; // dado
	struct no *proximo; // o ponteiro apontar para o pr�ximo n�
} t_No;


// procedimendo para inserir o Dado na fila. -> No final
void inserirDado_na_fila (t_No **fila, int valor){
	t_No *novo = (t_No*)malloc(sizeof(t_No));
	t_No *aux; // No auxiliar
	if(novo) {
		novo->dado = valor;
		
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

void inserirDadoPriori_na_fila (t_No **fila, int valor){
	t_No *novo = (t_No*)malloc(sizeof(t_No));
	t_No *aux; // No auxiliar
	if(novo) {
		novo->dado = valor;
		
		// o valor do pr�ximo � nulo, pq?
		// porque sempre iremos fazer uma inser��o no final da fila
		novo->proximo = NULL; 
		
		// inserir na fila -> na primeira vez.
		if(!*fila) // fila est� vazia
			*fila = novo;
		else { 
			// na segunda vez, sempre ser� falso
		
			// como � priorit�rio. Precisamos verificar se ela entra no crit�rio de prioridaed
			// Ex idade >= 60 anos.
			if(valor > 59) {
				// verificar se � a 1 prioridade
				if((*fila)->dado < 60) { // valor que est� na fila � < 60 ? S, ent�o o dado inserido � a 1 prioridade
					novo->proximo = *fila; // colocando que o pr�ximo n� que era o 1 seja agr o 2. Pois, a prioridade ser� o 1.
					*fila = novo; // colocando o novo n� (prioridade)	
				} 
				else {
					// fazer uma copia para n alterar o valor de *fila
					aux = *fila;
					
					// preciso fazer 1 loop q verifique se o valor do pr�ximo N� � != NULL && se o valor do proximo � menor q < 60.
					// S, ent insere no final da fila priorit�ria. Se nao, insere normal.
					while(aux->proximo && aux->proximo->dado > 59) 	
						aux = aux->proximo;	
						
					// quando falhar o pr�ximo n� N�o ser� priorit�rio
					novo->proximo = aux->proximo; // aux->proximo Ou sera NULL ou ser� o primeiro n� que n � priorit�rio.
					
					// o ultimo n� que � prioridade ir� apontar para o pr�ximo novo com prioridade.
					aux->proximo = novo;		
				}
			}
			else {	// nao � prioridade entao insere normal.		
				while(aux->proximo) // percorrer at� encontrar o �ltimo n� -> que aponta para NULL
					aux = aux->proximo; // declarando
				// o while deu falso, oq indica que o ultimo n� � NULL
				aux->proximo = novo; // decleramos que o ultimo n� agora � o novo.
			}
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
		printf("%d ", fila->dado); // imprimir o dado
		fila = fila->proximo; // fila vai apontar para o proximo No. 
		// Isso precisa ser feito para n ficar em loop
	}
	printf("\n\t---------- FIM FILA -----------\n");
	
}


int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	t_No *remover, *fila = NULL;
	
	int opcao, valor;
	
	do {
		printf("\t0 - Sair\n\t1 - Inserir\n\t2 - Remover\n\t3 - Imprimir\n\t4 - Inserir com prioridade\nInforme: ");
		scanf("%d", &opcao);
		switch(opcao) {
			case 1:
				printf("\nDigite um valor: ");
				scanf("%d", &valor);
				inserirDado_na_fila(&fila, valor);
				break;
			case 2:
				remover = removerDaFila(&fila);
				if(remover) {
					printf("\nO num %d foi removido com sucesso\n\n", remover->dado);
					free(remover);
				} 
				break;
			case 3:
				imprimir(fila);
				break;
				
			case 4:
				printf("\nDigite um valor: ");
				scanf("%d", &valor);
				inserirDadoPriori_na_fila (&fila, valor);
				break;
			default: printf("\n\nSaindo...\n");
		}
	} while (opcao);
	
	return 0;
} 
