#include    <stdio.h>
#include    <stdlib.h>
#include    <locale.h>
#include 	<time.h>
#include	<string.h>
#include	<Math.h>
/*
    Desenvolver um programa em C OU Java (nÃ£o usar classes prontas) que apresente um menu com as opÃ§Ãµes a seguir, 
    realizadas por um algoritmos de LISTA SEQUENCIAL ORDENADA:

        1. Criar lista (V)
        2. Inserir contatos (V)
        3. Mostrar os contatos (V)
        4. Buscar e mostra um contato (nas duas formas de busca - sequencial e binÃ¡ria)
        5. Apagar um contato com dado nome (V)
        6. Apagar um contato de dada posição (V)
        7. Quantos contatos tenho na minha agenda (v)
        8. Quantos novos contatos posso inserir na minha agenda (v)
        9. Sair. (V)
	
	
	Por enquanto, são fiz a busca de forma binária
		Ps: Voltar aqui e fazer as outras funções de forma binária (quando melhorar em lógica).
		
		Pelo que mini estudei
			iterativa -> melhor para arrays ordenados (Utilizarei essa)
			
			recursiva -> arvore binária.
*/

// definir o tamanho maximo da lista sequencial ordenada

#define MAX 50


/*
    estrutura para pegar os dados 
        -> t_Contato
            -> nome
            -> telefone.
*/ 

typedef struct {
    char nome[50];
    char telefone[20];
} t_Contato;

/*
    Estrtura para lista
        -> t_Lista
            -> contatos[tamanho]
            -> indice
*/

typedef struct {
    t_Contato contatos[50];
    int indice;
} t_Lista;

// Ponto 1. da atividade
// funcao para criar a lista 
t_Lista criarLista() {

    t_Lista lista;
    lista.indice = -1; // indice -1. Lista estÃ¡ vazia.
    return lista;
}

void trocar(t_Contato *primeiroContato, t_Contato *segundoContato) {
	t_Contato aux = *primeiroContato;
	*primeiroContato = *segundoContato;
	*segundoContato = aux;
}

int ordenarLista(t_Lista *lista) {
	
	int troca, indice = lista->indice;
	
	do 
	{
		troca = 0;
		
		for(int i = 0; i < indice; i++) 
		{
			if(strcmp(lista->contatos[i].nome, lista->contatos[i + 1].nome) > 0) 
			{
				trocar(&lista->contatos[i], &lista->contatos[i + 1]);
				troca = 1;
			}
		}
		indice--;	
	} while(troca);
		
	
	return 1;
}

// ponto 3. da atividade
// procedimento para imprimir lista.
void imprimirLista(t_Lista *lista) {
//	ordenarLista(lista);
    printf("\n---- L I S T A [tamanho Máximo = 50]------------\n");
    for(int i = 0; i < lista->indice + 1; i++) 
        printf("\t[%d.] -- %s -- %s\n", 
                                i + 1, 
                                lista->contatos[i].nome, 
                                lista->contatos[i].telefone
        );
    printf("--------------------------------------------\n");
    
}



// função para pegar os dados do usuario.
t_Lista *pegarUserDados (t_Lista *lista, int pos) {
	printf("\n-------- PEGAR DADOS --------- \n");
    printf("\nDigite o seu nome: ");
    scanf("%49[^\n]", lista->contatos[pos].nome);
	fflush(stdin);
	
    printf("Digite o seu Numero: ");
    scanf("%19[^\n]", lista->contatos[pos].telefone);
	fflush(stdin);
	
	lista->indice++; // acrescetando o tamanho da lista.
    return lista;
}

// funcao para verificar se Ã© vazia.
int isVazia(t_Lista *lista) {
    return (lista->indice == -1);
}

int isCheia(t_Lista *lista) {
	return (lista->indice == MAX - 1);
}

// função para imprimir 5 conttaos aleatorio
int imprimir_contatosAleatorio(t_Lista *lista) {
	
	if(lista->indice + 1 < 5) {
		printf("\nLista vazia ou lista não possui 5 contatos!");
		return 0;
	}
	int pos;
	for(int i = 0; i < 5; i++) {
		pos = rand() % (lista->indice + 1);
		printf("Contato: [%d] -- Nome: %s\tTelefone: %s\n",
												pos + 1,
												lista->contatos[pos].nome,
												lista->contatos[pos].telefone
												);
	}
	
}

// funcao para pedir a posição ao usuario
int pedirPosicao(t_Lista *lista) {
	int pos;
	imprimirLista(lista);
	printf("\nDigite a posição: ");
	scanf("%d", &pos);
	fflush(stdin);
	/*
		 pq coloquei lista->indice + 2? Pq, como o usuário ainda não digitou a pos
		 ,consequetemente ele não digitou os dados do contato, e não acrescentou +1 dado.
		 
		 Ex:
		 	ImprimirLista
		 		[1.] - Antonio - xxx
		 		[2.] - Jose - yyy
		 	
		 	Qual posição quer colocar. Se eu eu utilizar lista->indice + 1 dará erro, caso eu digite pos 3.
		 	
	*/
	
	
	// caso digite um valor invÃ¡lido.
	while(pos < 1 || pos > lista->indice + 2) {
		printf("\nValor Invalido!\nInforme corretamente: ");
		printf("\nDigite a posição: ");
		scanf("%d", &pos);
		fflush(stdin);	
	}
	
	
	return pos - 1; // retornando decrementado
}

/*
	if(isVazia(lista)) está vazia? 
		Ent, n possui nenhum dado na lista, logo colocarÃ¡ na pos 0 do vetor.
		Nao está vazia, ent pede a posição ao usuário mostrando as posições
*/
int pegarPosicao(t_Lista *lista) {
	return isVazia(lista) ? 0 : pedirPosicao(lista);
}

// funcao para deslocar o vetor para a direita ao ser inserido um dado.
int deslocaDireita(t_Lista *lista, int pos) {
	
	for(int i = lista->indice + 1; i > pos; i--)
		lista->contatos[i] = lista->contatos[i - 1];
	
	return 1;
}

// Colocando no usuário binário
int inserirContato2(t_Lista *lista, int pos, t_Contato contato) {
	
	deslocaDireita(lista, pos);
	
	lista->contatos[pos] = contato;
	lista->indice++;
	return 1;
}

// ponto 2. para a atividade
// função para inserirContato.
int inserirContato(t_Lista *lista) {
	
	if(isCheia(lista)) {
		printf("\nA lista está cheia...\n");
		return 0;
	}
		
    int pos; // variavel para pegar a posicao onde o usu quer digitar.
    
    pos = pegarPosicao(lista);
    
    deslocaDireita(lista, pos);
    
    lista = pegarUserDados(lista, pos); // chamando função para pegar os dados dele.

	// lista vazia, ent n precisa desloca para a direta.
	if(isVazia(lista))
		return 1;
	
	
    return 1;
}

// função para deslocar a esquerda
int deslocaEsquerda(int pos, t_Lista *lista) {
	printf("\nUsuário: %s removido com sucesso\n", lista->contatos[pos].nome);
	for(int i = pos; i < lista->indice; i++)
		lista->contatos[i] = lista->contatos[i + 1];
		
	return 1;
}

// função para achar o indice do nome.
int findIndiceUser(char *nomeInLista, char *nomeFindUser) {
	return strcmp(nomeInLista, nomeFindUser);
}

// ponto 5
// função para apagar o contato por nome.

int removerContato_porNome(t_Lista *lista) {
	
	if(isVazia(lista)) {
		printf("\nLista está vaziaa...");
		return 0;
	}
		
	
	char nome[50];
	printf("\nDigite o nome do usuário o qual quer remover: ");
	scanf("%49[^\n]", nome);
	
	for(int i = 0; i < lista->indice + 1; i++) {
		if(findIndiceUser(lista->contatos[i].nome, nome) == 0) 
			return deslocaEsquerda(i, lista); // apagando usuÃ¡rio...
	}
	
	printf("\nUsuário não existe...\n");
	return -1;
}


// ponto 6
// funcao para apagar o contato por posicao

int removerContato_porPosicao(t_Lista *lista) {
	if(isVazia(lista)) {
		printf("\nLista está vaziaa...");
		return 0;
	}
	
	int pos;
	
	imprimirLista(lista);	
	printf("\nDigite a posição o qual quer remover: ");
	scanf("%d", &pos);
	fflush(stdin);
	if(pos < 1 || pos > lista->indice + 2) {
		printf("\nValor inválido!\tSaindo...");
		return 0;
	}
	
	deslocaEsquerda(pos - 1, lista);
	lista->indice--;
	return 1;
}

// ponto 4 da atividade 
// Buscar e mostra um contato (nas duas formas de busca - sequencial e binÃ¡ria)

// busca sequencial. 
/*
	O que pensei, foi. Buscar um nome e mostrar todos?
		Filtro = Antonio
			[1.] -> Antonio Felix (mostra)
			[2.] -> Antonio Olviveira (mostra)
			[3.] -> Antonioo
	
	-> Pensar dps como fazer.
*/
// por id.
int buscaUsuario_Sequencial(t_Lista *lista) {
	int pos = pegarPosicao(lista);
	
	if(isVazia(lista)) {
		printf("\nA Lista está vazia...");
		return 0;
	}


	if(pos == lista->indice + 1) {
		printf("\nUsuário nÃ£o encotrado");
		return 0;
	}
	
	printf("Usuário encontrado:\n");
	printf("[%d.]--- Nome: %s\tTelefone: %s", 
										pos + 1, 
										lista->contatos[pos].nome, 
										lista->contatos[pos].telefone
	);

	return 1;
}

/*
	 busca binária iterativa.
	 -> Irei fazer pelo nome
	 Loop que divide no meio a array
*/

int findUser_Binario(t_Lista  *lista, int inicio, int fim, char *nome) {
	
	int meio; // var do meio
	
	// se o usu digitar um nome q está no inicio. Já retorna em vez de fazer o loop
	if(findIndiceUser(lista->contatos[inicio].nome, nome) > 0)
		return inicio;
	
	// o mesmo para o final
	if(findIndiceUser(lista->contatos[fim - 1].nome, nome) == 0)
		return fim - 1;
		
	while(inicio <= fim) 
	{
		meio = (inicio + fim)/2; // autalizando o meio
		
		// botando o resultado da funcao em uma var
		int comparacao = findIndiceUser(lista->contatos[meio].nome, nome);
		
		// fazendo os testes.
		/*
			comparacao == 0 -> igual
			comparacao < 0 o nome procurado é maior -> direita do vetor
				Logo, inicio = meio + 1;
			comparacao > 0 o nome procurado é menor -> esquerda do vetor.
				Logo, fim = meio - 1;
		*/
		if(comparacao == 0)
			return meio;
		else if(comparacao < 0)
			inicio = meio + 1;
		else
			fim = meio - 1;
		
	}
	
	return -1; // nao achou
}

// função para buscar o usuario
int buscaUsuario_Binario(t_Lista *lista) {
	imprimirLista(lista); // aq vai ordenar a lista e imprimir.
		
	char nome[50];
	printf("\nDigite o nome o qual quer buscar: ");
	scanf("%49[^\n]", nome);
	int inicio = 0;
	
	int pos = findUser_Binario(lista, inicio, lista->indice + 1, nome) ; // lista->indice + 1 == fim.
	
	if(pos == -1) {
		printf("\nUsuário não encotrado\n");
		return -1;
	}
		
	printf("Usuário encontrado:\n");
	printf("[%d.]--- Nome: %s\tTelefone: %s", 
										pos + 1, 
										lista->contatos[pos].nome, 
										lista->contatos[pos].telefone
	);
	return 1;
}

// ponto 7
// funÃ§Ã£o para verificar quantos contantos tenho na minha agenda
int tamanhoLista(t_Lista *lista) {
    return lista->indice + 1;
}

// ponto 8
// funÃ§Ã£so para verificar o tamanho restante da lista
int tamanhoRestanteLista(t_Lista *lista) {
    return MAX - (lista->indice + 1);
}

/*
        Inserir Contato Bruno
    Inserir o nome do usuário
        Ana -> Fazer a busca binária para saber onde inserir.
            Nesse caso seria a 1 posição.
    Ex:
        1. Antonio
        2. Jose
        3. Flavio
        
*/

t_Contato userDados() {
    t_Contato dado;
    printf("\n-------- PEGAR DADOS --------- \n");
    printf("\nDigite o seu nome: ");
    scanf("%49[^\n]", dado.nome);
	fflush(stdin);
	
    printf("Digite o seu Numero: ");
    scanf("%19[^\n]", dado.telefone);
	fflush(stdin);

    return dado;
}

// função para achar a pos do usuário de forma binária.
int findPos_user(t_Lista  *lista, int inicio, int fim, t_Contato dado) {
	
	int meio; // var do meio
	
	/*
		Caso, por exemplo -> Queira inserir Ana.
		
		 fazer uma verificação
		Antonio > Ana -> Ana vai para o inicio, sem precisar percorrer o loop/
		[1.] - Antonio
		[2.] - Bruno
	*/
	if(findIndiceUser(lista->contatos[inicio].nome, dado.nome) > 0) 
		return inicio;
	
	/*
		Caso, por exemplo -> Queira inserir Ze.
		
		fazer uma verificação
		Bruno < Ze -> Ze vai para o fim, sem precisar percorrer o loop
		[1.] - Antonio
		[2.] - Bruno
	*/
	if(findIndiceUser(lista->contatos[fim - 1].nome, dado.nome) < 0) 
		return fim;
	
	
	// inicio < fim para n fazer uma repetição desnecessário no final <= fim.
	while(inicio < fim) 
	{
		meio = (inicio + fim)/2; // autalizando o meio
		
		// botando o resultado da funcao em uma var
		int comparacao = findIndiceUser(lista->contatos[meio].nome, dado.nome);
		// fazendo os testes.
		/*
			comparacao < 0 o nome procurado é maior -> direita do vetor
				Logo, inicio = meio + 1;
			comparacao > 0 o nome procurado é menor -> esquerda do vetor.
				Logo, fim = meio, pois não pulará a posição correta de inseir;
				
				
				[0.] - Ana 			
				[1.] - Antonio
				[2.] - Bruno
				[3.] - Carlos	
				
				Inserir Bruna
				1 LOOP
					meio = (inicio (0) + fim (4) / 2	
					
					meio = 2;	
					
					Bruno > Bruna -> comparacao =	1
					fim = meio -> fim = 2;	
				
				2 LOOP -> 0 < 2
				
					meio = 0 + 2 / 2 
					meio = 1;
					
					Antonio < Bruna -> comparacao = -1
					inicio = 1 + 1 -> inicio = 2;
					
				3 LOOP -> 2 < 2 -> Falso
					Quebra o loopo
					
				retorna Inicio = 2 (pos 2);
				
				Insere e desloca para a direita os outros elementos.
				
				[0.] - Ana 			
				[1.] - Antonio
				[2.] - Bruna
				[3.] - Bruno
				[3.] - Carlos
																																		
		*/
		
		// faz as atribuições
		if(comparacao < 0)
			inicio = meio + 1;
		else
			fim = meio;
		
	}
	// retorna a posição.
	return inicio; 
}

/*
	Isso aqui é merito de Bruno (pela ideia que ele teve)
		Inserir de forma binária (consequentemente, já coloca de forma ordenada o nome do usuário)
		
	Créditos: A Bruno Máximo
*/

int inserirContatoBinario(t_Lista *lista) {
    t_Contato dados;
    int inicio = 0;
    dados = userDados();
    
    // pegar a posição para inserir os dados.
    int pos = findPos_user(lista, inicio, lista->indice + 1, dados);
    
    // achou a posição, insere os dados.
    inserirContato2(lista, pos, dados);
    
}



void menu(t_Lista * lista) {
	
	int opcao;
	do {
		printf("\n --------------------M-E-N-U--------------------\n|\t\t\t\t\t\t|\n");
		printf(
		"|\t[1.] - Inserir Contato\t\t\t|\n|\t[2.] - Inserir Contato (Binário)\t|\n|\t[3.] - Remover Contato (Por Nome)\t|\n|\t[4.] - Remover Contato (Por Posição)\t|\n|\t[5.] - Buscar Contato (Sequencial)\t|\n|\t[6.] - Buscar Contato (Binário)\t\t|\n|\t[7.] - Imprimir Lista\t\t\t|\n|\t[8.] - Imprimir 5 Contatos aleatórios\t|\n|\t[9.] - Tamanho da Lista (MAX e Resto)\t|\n|\t[10.] - Sair\t\t\t\t|\n|\t\t\t\t\t\t|"
		);
		printf("\n -----------------------------------------------\n");
		printf("\nInforme: ");
		scanf("%d", &opcao);
		fflush(stdin);
		
		switch(opcao) {
			
			case 1 : 
				printf("\nPs: Voce pode inserir 1 posição á  frente do que existe: Ex: Se tem um usuário [1.]\nVoce pode inserir na posição do usuário existen ou 1 posição a frente dele (2).\n");
				inserirContato(lista); 
				break;
			
			case 2 : inserirContatoBinario(lista); break;
			
			case 3 : removerContato_porNome(lista); break;
			
			case 4 : removerContato_porPosicao(lista); break;
			
			case 5 : buscaUsuario_Sequencial(lista); break;
			
			case 6 : buscaUsuario_Binario(lista); break;
			
			case 7 : imprimirLista(lista); break;
			
			case 8 : imprimir_contatosAleatorio(lista); break;
			
			case 9 :
				printf("\nTamanho da Lista: %d", tamanhoLista(lista));
    			printf("\nContatos Restantes para inserir: %d\n", tamanhoRestanteLista(lista));
    			break;
			

			default : printf("\nSaindo..."); break;
		}
	} while(opcao && opcao < 10);
}

int main() {
	setlocale(0,"Portuguese");
	srand(time(NULL));
    t_Lista lista;
		
    // chamando para criar lista.
    lista = criarLista();
    
	// brincar com uma função, imprimir nome aleatorio
    menu(&lista);
    return 0;
}
