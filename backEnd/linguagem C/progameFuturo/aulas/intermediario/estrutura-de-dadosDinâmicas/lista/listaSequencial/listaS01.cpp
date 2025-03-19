#include	<stdio.h>
#include	<string.h>
#include 	<locale.h>
#include 	<stdlib.h>
#define	MAX 10

/*
	Lista sequencial com o Professor da Universidade
	
	Lista sequencial: 
		Regras:
			N„o pode ter intervalo entre os indÌces
			C1 C2 C3 0 C4 -> Isso est· errado
			C1 C2 C3 C4 -> Est· certo.
			
	Conceitos
		Inserir Dado X em alguma posiÁ„o
			-> Desloca Os dados existentes para a direita.
			-> Insere o dado X
		
		Remover Dado Y em alguma posiÁ„o
			-> Remove o dado Y
			-> Desloca os dados existentes para a esquerda.
*/

// Tipo base dos elementos da lista
typedef struct elementos {
    char nome[50];
    char telefone[20];	
} Contato;

// Estrutura da lista
typedef struct lista {
    Contato vetor[MAX];//vet que armazena elem. da pilha
    int n; // posicao (indice) do ultimo elemento da lista
} Lista; // tipo lista


Lista criar() {
    Lista lista;

    lista.n = -1;

    return lista;
}

int isVazia(Lista * lista) {
    return (lista->n == -1);
}

int isCheia(Lista * lista) {
    return (lista->n == MAX-1);
}

int deslocaDireita(Lista * lista, int pos) {
    int i;

    for (i=lista->n + 1; i>pos; i--)
        lista->vetor[i] = lista->vetor[i-1];

    return 1;
}


int inserir (Lista * lista, int pos, Contato dado) {
    if ( isCheia(lista) || (pos > lista->n + 1) || (pos < 0) )
        return 0;

    deslocaDireita(lista, pos);
    lista->vetor[pos] = dado;
    (lista->n)++;
    return 1;
}

void mostrar (Lista *lista) {
    int i;
    for (i = 0; i <= lista->n; i++)
        printf("Contato [%d]\nNome: [%s]\nTelefone: [%s]\n",
                                         i + 1,
                                         lista->vetor[i].nome, 
                                         lista->vetor[i].telefone);
}

// deslocar a lista para a esquerda

int deslocaEsquerda(Lista *lista, int pos) {
		
	if(pos > lista->n + 1 || pos < 0)
		return 0;
	/*
		1 2 3 4 5 6
		1 2 X 4 5 6 -> pos = 3 lista->n + 1 = 6
		1 2 4 5 6 -> n + 1 5
		
		// lista[2] (3) = lista[3] (4) i = 2
		// lista[3] (4) = lista[4] (5) i = 3
		// lista[4] (5) = lista[5] (6) i = 4
		// lista[5] (6) = lista[6] (?) i = 5; 

		tava certo, n deveria ser i < lista-> n + 1 e sim i < lista -> n. Pq, fariia uma repeti√ß√£o desnecess√°ria 
	*/	
	for (int i = pos; i < lista->n; i++) 
		lista->vetor[i] = lista->vetor[i + 1];	
		
		
	return 1;
}

// remover -> conceito

int remove (Lista *lista) {
	mostrar(lista);
	
	Lista *remove = NULL;
	int pos; // var para a posi√ß√£o
	
	printf("\nInforme a posi√ß√£o que voc√™ quer remover: ");
	scanf("%d", &pos);
	
	if(pos > lista->n + 1 || pos < 0)
		return 0;
		
	// decrementar, pq para o usu [1] == [0] no array 
	pos--;
	
	deslocaEsquerda(lista, pos);
	(lista->n)--;
	
	return 1;
}


//// remover -> Antonio.
//Lista* removeAntonio (Lista **lista, int pos, Contato dado) {
//	
//	/*
//		C1 C2 C3 C4 C5 -> C1 C2 X C4 C5 - (eliminar C3) -> Conceito, seria assim. E deslocaria tudo para a esquerda, pois n„o pode ter intervalo.
//		
//		C1 C2 C5 C4 C3 -> C1 C2 X C4 C5  -> (Elimnar C3) -> Quero por o C3 Na posiÁ„o final, e inverter a posiÁ„o final com o C3. Para que n precisa fazer um loop. ,   
//		
//		C1 C2 X C4 C5  
//		
//	*/
//	
//	Lista *aux = (*lista)->vetor[pos];
//	
//	return 
//}


int findUser(Contato dado1, Contato dado2) {
	return strcmp(dado1.nome, dado2.nome);
}

// getValue
int getValue(Lista *lista, Contato dado) {
	
	for(int i = 0; i < lista->n + 1;i++) {
		if(findUser(lista->vetor[i], dado) == 0)
			return i;
	}
	
	printf("\n\nUsu·rio n„o existe :(\n");
	return -1;
}

Contato *find_posValue(Lista *lista, int pos) {
	if(pos < 0 || pos > lista->n + 1) {
		printf("Valor inv·lido!\n");
		return NULL;
	}
		
	return &lista->vetor[pos];
	
}


int	main()
{	
	setlocale(0, "Portuguese");

	Lista	minhaLista;
//	Contato	aux_cnt = {"LUIZ", "44444"};
//	Contato	aux_cnt1 = {"TOIN", "123456"};
//	Contato	aux_cnt2 = {"JOSE", "1234567"};
	minhaLista = criar();
	
	if (isVazia(&minhaLista))
		printf("Lista vazia\n");
	else
		printf("Lista com elementos");
	
//	inserir(&minhaLista, 0, aux_cnt);
//	inserir(&minhaLista, 1, aux_cnt1);
//	inserir(&minhaLista, 2, aux_cnt2);
//	mostrar(&minhaLista);
	
	// remove
//	remove(&minhaLista);
//	mostrar(&minhaLista);
	
	// Onde est· toin
//	printf("Usu·rio %s est· na posiÁ„o [%d]", aux_cnt2.nome, (getValue(&minhaLista, aux_cnt2) + 1));

	
	// achar os valores da posiÁ„o X.
//	Contato *dado = find_posValue(&minhaLista, 1); // pos 2.
//	printf("\n\nNome: [%s]\nTelefone: [%s]\n",
//                                        dado->nome, 
//                                        dado->telefone);
	
		
}
