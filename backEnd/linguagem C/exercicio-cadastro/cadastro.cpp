#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

/*
	11. Escreva um programa em C, totalmente dinâmico, para realizar as 
	quatro operações (CRUD) de um cadastro de alunos: Create, Read, 
	Update e Delete. Cada operação deverá estar em uma função. Deverá 
	ter uma função para mostra o cadastro inteiro. O cadastro deverá 
	armazenar nome completo, RGM e curso. O nome deverá ser 
	coletado do teclado e armazenado em uma área estática temporária 
	de tamanho 1024 caracteres. Após ter o nome, alocar a área exata que 
	irá guardar o nome. Os cursos, listados abaixo, deverão estar em um 
	ENUMERATION, sendo que o valor armazenado será o número inteiro, 
	mas na hora de mostrar, deverá mostrar o nome do curso.
	
	1 - Análise e Desenvolvimento de Sistemas  (ADS)
	2 - Ciência da Computação (CC)
	3 - Ciência de Dados (CD)
	4 - Gestão da Tecnologia da Informação (GTI)
	5 - Redes de Computadores (RC)
	6 - Sistemas Para Internet (SI)

*/

// vou Usar estrutura de arquivo.
#define fileAluno "aluno.txt"

typedef enum {
	ADS = 1,
	CC = 2,
	CD = 3,
	GTI = 4,
	RC = 5,
	SI = 6,
} t_NomeCursos;

// estrutura para o user.
typedef struct{
	t_NomeCursos cursos;
	char user[1024];
	int RGM;
} t_Pessoa;

// Protótipos
void menu(); // procedimento para o menu principal

void selecionarOpcaoMenu(); // procedimento para o usu selecionar a opcao do menu

void pedirDados(char *nomeAluno, int *RGM, t_NomeCursos *cursos); // procedimento para pedir os dados do usu

void imprimirCursos(); // procedimento para imprimir cursos
void cadastrarAluno(); // procedimento para fazer o cadastro
void lerFile(t_Pessoa *alunos, int *qtdAlunos); // procedimento para ler o arquivo e ver a quantidade de alunos
void ordenarFile(t_Pessoa *alunos, int qtdAlunos);

void imprimirDados(char *nomeAluno, int *RGM, t_NomeCursos *cursos); // mostrar os dados do usuario

int opcaoTrocar_Menu(); // funcao para verificar se o usu quer trocar os dados ou confirmar os dados e ir ao menu.
int trocarDados(char *nomeAluno, int *RGM, t_NomeCursos *cursos); // fazer a troca dos dados.
int selecionarOpcaoTroca(); // usuario escolher qual dado será trocar.

int salvarUsuario(t_Pessoa *alunos, char *nome, int RGM, t_NomeCursos curso, int *qtdAlunos); // funcao para salvar usuario.
int encontrarAluno(t_Pessoa *alunos, int RGM, int qtdAlunos); // funcao para verificar se o usuario existe.
void imprimirDadosAlunoExistente(t_Pessoa *aluno); // imprimir os dados se o aluno existir
void salvarFileAluno(t_Pessoa *alunos, int qtdAlunos); // salvar os dados no arquivo

void imprimirAlunos(); // imprimir os alunos cadastrados
void alterarDadosAluno(); // alterar os dados do aluno se quiser.
void autalizarDadosAluno(t_Pessoa *alunos, char *nome, int *RGM, t_NomeCursos *cursos, int *qtdAlunos, int indice); // fazer a autalização do aluno, caso altere.

void delAluno(); // procedimento para deletar o aluno
void deletarAluno(t_Pessoa *alunos, int index, int *qtdAlunos); // fazer as alterações
void escolherCaminho(char *nomeAluno); // escolher o caminho.

int main() {
	
	
	// Definindo a lingua
	setlocale(LC_ALL, "Portuguese");
	
	// chamar o menu
	menu();
	
	return 0;
}

/*
	(CRUD) de um cadastro de alunos: 
	Create, Read, 
	Update e Delete.
*/

// menu principal.
void menu() {
	system("cls");
	printf("\n ----------M E N U---------\n");
	printf("|\t\t\t   |\n");
	printf("| [1.] -> Cadastrar Aluno  |\n| [2.] -> Imprimir Alunos  |\n| [3.] -> Alterar Dados\t   |\n| [4.] -> Excluir Aluno    |\n");
	printf("|\t\t\t   |");
	printf("\n --------------------------\n");
	
	// Procedimento para selecionar a opcao do usu.
	selecionarOpcaoMenu();
}

// procedimento para mostrar as opções do menu.
void selecionarOpcaoMenu() {
	
	int opcao;
	printf("\nSelecione: ");
	scanf("%d", &opcao);
	
	// validar a resposta
	fflush(stdin);
	while(opcao < 1 || opcao > 4) {
		system("cls");
		menu();
		printf("\nSelecione: ");
		scanf("%d", &opcao);
	}

	// fazer a escolha do usuario.
	switch(opcao) {
		
        // fazer o cadastro (v).
		case 1: cadastrarAluno(); break;
		
		// imprimir os Alunos(v).
		case 2: imprimirAlunos(); break;
		
		// alterar os dados do aluno.
		case 3: alterarDadosAluno(); break;
		
		// deletar um aluno.
		case 4: delAluno(); break;
		
	}
}

// procedimento para fazer o cadastro do aluno
void cadastrarAluno() {
    // criando alunos
	t_Pessoa *alunos;

    // alocando memoria dinamicamente a estrutura de dados.
    alunos = (t_Pessoa*)malloc(50 * sizeof(t_Pessoa));

    // criando variaveis para colocar na estrutruta a copia caso o usuario não exista.
    char nomeAluno[1024];
    int RGM;
    t_NomeCursos cursos;
	
	// variavel para ter a quantidade de alunos no arquivo salvo.
	int qtdAlunos = 0;
	
	// ler o arquivo para ter a quantidade de alunos.
	lerFile(alunos, &qtdAlunos);
	
    pedirDados(nomeAluno, &RGM, &cursos); // pedir os dados.

    // imprimir os Dados
	imprimirDados(nomeAluno, &RGM, &cursos);
	
	// receber a resposta para a var trocar -> e seguir de acordo com a resposta do usu.
	int trocar = opcaoTrocar_Menu();
    // 2 -> troca.
	trocar == 2 ? trocarDados(nomeAluno, &RGM, &cursos) : printf("\nCadastro Concluído...\n");

	// salvar os dados no arquivo.
	salvarUsuario(alunos, nomeAluno, RGM, cursos, &qtdAlunos);
	
	// caso o usu queira voltar para o menu
	printf("\nPressione ENTER para voltar ao menu...");
	while(getchar() != '\n');
	system("cls");
	menu();
	
	// liberando memória da estrutura alunos
    free(alunos);
}

// procedimento para ordenar o arquivo baseado no caractere
void ordenarFile(t_Pessoa *alunos, int qtdAlunos) {
	t_Pessoa aux;
	for(int i = 0; i < qtdAlunos - 1; i++) {
		for(int j = 0; j < qtdAlunos - i - 1; j++) {
			if(stricmp(alunos[j].user, alunos[j + 1].user) > 0){
				aux = alunos[j];
				alunos[j] = alunos[j + 1];
				alunos[j + 1] = aux;
			}	
		}
	}
}


// procedimento para ler o arquivo.
void lerFile(t_Pessoa *alunos, int *qtdAlunos) {
	FILE *file = fopen(fileAluno, "r"); // r -> ler o arquivo
	
	// caso o arquivo não exista retorna null -> obviamente qtdAlunos = 0.
	if(!file) {
		*qtdAlunos = 0;
		return;
	}
	
	*qtdAlunos = 0;
	
	/*
		NOME
		RGM
		CURSO (Num)
	*/

	while(fscanf(file, "%1024[^*]* %d %d\n",
					alunos[*qtdAlunos].user,
					&alunos[*qtdAlunos].RGM,
					&alunos[*qtdAlunos].cursos) != EOF)
						(*qtdAlunos)++;
		
	// fechar o arquivo				
	fclose(file);
}

// procedimento para pedir os dados ao usu.
void pedirDados(char *nomeAluno, int *RGM, t_NomeCursos *cursos) {
    
    system("cls");
    printf("\n\n\tCADASTRO\n\n");

	// nome do usuario
    printf("Nome Completo: ");
    scanf("%1024[^\n]", nomeAluno);

	// RGM -> Não conseguir validar a resposta de inteiros
	// Acho que só colocando como char mesmo, sei lá.
    printf("RGM: ");
    scanf("%d", RGM);
    

	// procedimento para imprimir os cursos
    imprimirCursos();

	// resposta para atribuir ao curso.
    int respostaCurso;
    printf("\n Selecione seu curso: ");
	scanf("%d", &respostaCurso);

	// validação da resposta
	fflush(stdin);
	while(respostaCurso < 1 || respostaCurso > 6) {
		printf("\n\n\t[ERROR] -> Valor inválido!");
		printf("\n-----------------------------------------------\n");
		printf("\n Selecione seu curso: ");
		scanf("%d", &respostaCurso);
		fflush(stdin);	
	}

	// atribuindo o valor para *cursos;
    *cursos = (t_NomeCursos)respostaCurso;
}

// procedimento para imprimir os cursos.
void imprimirCursos() {
	
	printf("\n ------------------ C U R S O S ----------------\n");
	printf("| [1.] -> Análise e Desenvolvimento de Sistemas\t|\n| [2.] -> Ciência da Computação\t\t\t|\n| [3.] -> Ciência de Dados\t\t\t|\n| [4.] -> Gestão da Tecnologia da Informação\t|\n| [5.] -> Redes de Computadores\t\t\t|\n| [6.] -> Sistemas Para Internet\t\t| ");
	printf("\n -----------------------------------------------\n");
}

/*
    funcao para imprimir os dados e retornar a resposta troca.
    1 -> Confirma dados e salva
    2 -> Altera algum dado.
*/
void imprimirDados(char *nomeAluno, int *RGM, t_NomeCursos *cursos) {

	// criando uma array de const -> para imprimir o curso de acordo com o valor.
	const char *cursosArray[] = {
		"Análise e Desenvolvimento de Sistemas",
		"Ciência da Computação",
		"Ciência de Dados",
		"Gestão da Tecnologia da Informação",
		"Redes de Computadores",
		"Sistemas para internet",
	};	
	
	// impressão dos dados.
    printf("\n\n\tDADOS:\n\n");
    printf("Nome: %s", nomeAluno);

    printf("\nRGM: %d", *RGM);
    printf("\nCURSO: %s", cursosArray[*cursos - 1]);

}

/*
	funcao para retornar a resposta se confiram os dados ou altera.
	1 -> Confirmar Dados
	2 -> Alterar Dados.
*/ 
int opcaoTrocar_Menu() {

    int resp;

    printf("\n-----------------------------------------------\n");
    printf("[1.] -> Confirmar Dados\n[2.] -> Alterar Dados");
    printf("\nInforme: ");
    scanf("%d", &resp);

	// validação da resposta.
    fflush(stdin);
    while(resp < 1 || resp > 2) {
        system("cls");
		printf("\n\n\t[ERROR] -> Valor inválido!");
		printf("\n-----------------------------------------------\n");
         printf("[1.] -> Confirmar Dados\n[2.] -> Alterar Dados");
        printf("\nInforme: ");
        scanf("%d", &resp);
        fflush(stdin);
    }
	
	// retornando a resposta.
    return resp;
}

// criar o procedimento para trocar os dados que o usu escolher.
int trocarDados(char *nomeAluno, int *RGM, t_NomeCursos *cursos) {

	int resposta;
	// fazer um loop para se o usuario quer ficar trocando de dados ou n.
	do {
		/* 
			selecionar a opcao de trocar
			1 -> Nome
			2 -> RGM
			3 -> curso
		*/
		int opcao = selecionarOpcaoTroca();

		printf("\n\n\tAlterar Dados:\n\n");
		switch(opcao) {
			case 1 :
				printf("Nome Completo: ");
				scanf("%1024[^\n]", nomeAluno);
				break;

			case 2 :
				printf("RGM: ");
				scanf("%d", RGM);
				break;

			case 3 :
				imprimirCursos();
				int respostaCurso;
				printf("\n Selecione seu curso: ");
				scanf("%d", &respostaCurso);
				fflush(stdin);
		
				while(respostaCurso < 1 || respostaCurso > 6) {
					printf("\n\n\t[ERROR] -> Valor inválido!");
					printf("\n-----------------------------------------------\n");
					printf("\n Selecione seu curso: ");
					scanf("%d", &respostaCurso);
					fflush(stdin);	
				}
				*cursos = (t_NomeCursos)respostaCurso;
				break;
		}

			imprimirDados(nomeAluno, RGM, cursos); // imprimir os Dados
			resposta = opcaoTrocar_Menu(); // resposta para trocar os dados ou confirmar.

		} while (resposta == 2); // resposta 2 -> trocar dados
	
	// caso n seja resposta 2 -> cadastro concluido.
	printf("\n\nCadastro Concluído...\n");
	
    return 1;
}

/*
	funcao para retornar a opcao de troca do usuario
		1 -> Nome
		2 -> RGM
		3 -> curso
*/ 
int selecionarOpcaoTroca() {

    system("cls");
    int opcao;

    printf("\n\n\tAlterar Dados:\n\n");
    printf("Selecione a Opção para alterar:\n");
	printf("\n[1.] -> Nome\n[2.] -> RGM\n[3.] -> Curso\n");
	printf("\nInforme: ");
	scanf("%d", &opcao);

    // validar opcao.
    fflush(stdin);
	while(opcao < 1 || opcao > 3) {
		system("cls");
		printf("\n\n\tAlterar Dados:\n");
		printf("\n\n\t[ERROR] -> Valor inválido!\n");
		printf("\n-----------------------------------------------\n");
		printf("Selecione a Opção para alterar:\n");
		printf("[1.] -> Nome\n[2.] -> RGM\n[3.] -> Curso\n");
		printf("\nInforme: ");
		scanf("%d", &opcao);
		fflush(stdin);
	}

    return opcao;
}

// funcao salvar o usuario se existir, se não criar
int salvarUsuario(t_Pessoa *alunos, char *nome, int RGM, t_NomeCursos curso, int *qtdAlunos) {
	
	// verificar se o usuario existe.
	int indice = encontrarAluno(alunos, RGM, *qtdAlunos);
	
	int opcao;
	
	// -1 -> não existe.
	if(indice == -1) {
		strcpy(alunos[*qtdAlunos].user, nome);
		alunos[*qtdAlunos].RGM = RGM;
		alunos[*qtdAlunos].cursos = curso;
		
		indice = (*qtdAlunos)++;
		
	} else{
		// imprimir o aluno que já existe
		system("cls");
		printf("\n\n\tAluno Já existe:\n");
		printf("\nAluno *%s* já possui o RGM [%d]. \n", alunos[indice].user, alunos[indice].RGM);
		printf("\n------------------------------------\n");

		// imprimir as informações ou ir para o menu
		printf("[1.] -> Imprimir as informações do aluno\n[2.] -> Ir para o Menu\n");
		printf("Informe: ");
		scanf("%d", &opcao);

		// Validação da resposta
		fflush(stdin);
		while(opcao < 1 || opcao > 2) {
			system("cls");
			printf("\n\n\t[ERROR] -> Valor inválido!");
			printf("\n-----------------------------------------------\n");
			printf("\n\n\tAluno Já existe:\n");
			printf("\nAluno *%s* já possui o RGM [%d]. \n", alunos[indice].user, alunos[indice].RGM);
			printf("\n------------------------------------\n");
			printf("[1.] -> Imprimir as informações do aluno\n[2.] -> Ir para o Menu\n");
			printf("Informe: ");
			scanf("%d", &opcao);
			fflush(stdin);
			
		}
		
		// selecionar a função de acordo com o usuario
		opcao == 2 ? menu() : imprimirDadosAlunoExistente(alunos);
	}
	
	// salvar os dados
	salvarFileAluno(alunos, *qtdAlunos);
	
	return 1;
}

// fazer a parte do arquivo para ler a quantidade de alunos
int encontrarAluno(t_Pessoa *alunos, int RGM, int qtdAlunos) {
	
	// verificar se o indice em que o aluno X possui RGM igual ao que o usuario está cadastrando
	// RGM -> Só pode ser unico.
	for(int i = 0; i < qtdAlunos; i++) {
		if(alunos[i].RGM == RGM)
			return i;
	}
	return -1;
}

// procedimento para imprimir os dados do aluno existente
void imprimirDadosAlunoExistente(t_Pessoa *aluno) {
	system("cls");
	
	// array para ter os curos e imprimir
	const char *cursosArray[] = {
		"Análise e Desenvolvimento de Sistemas",
		"Ciência da Computação",
		"Ciência de Dados",
		"Gestão da Tecnologia da Informação",
		"Redes de Computadores",
		"Sistemas para internet",
	};
	
	// imprimir os dados.
	printf("\n\n\tDADOS:\n\n");
	printf("Nome: %s", aluno->user);

    printf("\nRGM: %d", aluno->RGM);
    printf("\nCURSO: %s", cursosArray[aluno->cursos - 1]);
 
    printf("\n\nPressione ENTER para voltar ao menu...");
	while(getchar() != '\n');
	system("cls");
	menu();
}

// procedimento para salvar os arquivos.
void salvarFileAluno(t_Pessoa *alunos, int qtdAlunos) {
	FILE *file = fopen(fileAluno, "w");
	
	// abrir o arquivo e fazer o loop para imprimir nos arquivos
	if(file) {	
		for(int i = 0; i < qtdAlunos; i++) {			
			fprintf(file, "%s* %d %d\n",
						alunos[i].user,
						alunos[i].RGM,
						alunos[i].cursos
			);
		}
		
		fclose(file); // fechar arquivo
	} else {
		printf("\n\t[ERROR] -> Erro ao salvar o arquivo!\n");
		return;
	}
	
}

// imprimir os alunos
void imprimirAlunos() {
	system("cls");
	t_Pessoa *alunos;

    // alocando memoria dinamicamente a estrutura de dados.
    alunos = (t_Pessoa*)malloc(50 * sizeof(t_Pessoa));
	// variavel para ter a quantidade de alunos no arquivo salvo.
	int qtdAlunos = 0;
	
	
	
	// array com os cursos
	const char *cursosArray[] = {
		"Análise e Desenvolvimento de Sistemas",
		"Ciência da Computação",
		"Ciência de Dados",
		"Gestão da Tecnologia da Informação",
		"Redes de Computadores",
		"Sistemas para internet",
	};

	// ler o arquivo e ter a qtd de alunos
	lerFile(alunos, &qtdAlunos);
	ordenarFile(alunos, qtdAlunos);
	
	if(qtdAlunos == 0) {
		printf("\nOps...\nNão tem alunos cadastrado :(");
		printf("\n\nPressione ENTER para voltar ao menu...");
		while(getchar() != '\n');
		system("cls");
		menu();
	} else {
		// fazer a impressão
		printf("\n--------------------------------------------------A L U N O S----------------------------------------------------\n\n");
	
		for(int i = 0; i < qtdAlunos; i++) {
			printf(" [%2d.] -> %-50s %8d %30s\n", 
					i + 1, 
					alunos[i].user,
					alunos[i].RGM,
					cursosArray[alunos[i].cursos - 1]
			);	
		}
		printf("\n-----------------------------------------------------------------------------------------------------------------\n\n");
	}
}

// procedimento para alterar os dados do aluno
void alterarDadosAluno() {

	/*
		variaveis alunos -> estrutura de dados

		// fazer a copia para dps alterar os dados
		*NomeAluno
		*RGM
		*cursos
	*/ 
	t_Pessoa *alunos;

	alunos = (t_Pessoa*)malloc(50 * sizeof(t_Pessoa));

	int qtdAlunos = 0;
	char nomeAluno[1024];
    int RGM;
    t_NomeCursos cursos;
	
	// ler o arquivo e ter a qtdAlunos
	lerFile(alunos, &qtdAlunos);
	

	int opcao;
	imprimirAlunos(); // imprimir os alunos

	// pedir o id do aluno para alterar
	printf("\n*IDs -> [1.], [2.], [3.], etc..\n");
	printf("\nSelecione o id do aluno, o qual voce deseja alterar o dado.");
	printf("\nINFORME: ");
	scanf("%d", &opcao);

	// validação da resposta.
	fflush(stdin);
	while(opcao < 1 || opcao > qtdAlunos) {
		system("cls");
		imprimirAlunos();
		printf("\n\n\t[ERROR] -> Digite um valor válido!");
		printf("\n-----------------------------------------------\n");\
		printf("\n*IDs -> [1.], [2.], [3.], etc..\n");
		printf("\nSelecione o id do aluno, o qual voce deseja alterar o dado.");
		printf("\nINFORME: ");
		scanf("%d", &opcao);
		fflush(stdin);
	}

	// fazer a copia
	strcpy(nomeAluno, alunos[opcao - 1].user);
	RGM = alunos[opcao - 1].RGM;
	cursos = alunos[opcao - 1].cursos;

	// fazer a troca de Dados
	trocarDados(nomeAluno, &RGM, &cursos);

	// autalizar os dados do aluno
	autalizarDadosAluno(alunos, nomeAluno, &RGM, &cursos, &qtdAlunos, opcao - 1);

	// voltar ao menu
	printf("\nPressione ENTER para voltar ao menu...");
	while(getchar() != '\n');
	system("cls");
	menu();

	free(alunos);
}

// procedimento para autalizar os dados do usuario.
void autalizarDadosAluno( t_Pessoa *alunos, char *nome, int *RGM, t_NomeCursos *cursos, int *qtdAlunos, int indice) {
	strcpy(alunos[indice].user, nome);
	alunos[indice].RGM = *RGM;
	alunos[indice].cursos = *cursos;

	// salvar os dados do aluno
	salvarFileAluno(alunos, *qtdAlunos);
}

// procedimento para deletar o aluno
void delAluno() {

	int opcao;
	t_Pessoa *alunos;
	int qtdAlunos = 0;

	alunos = (t_Pessoa*)malloc(50 * sizeof(t_Pessoa));

	// ler os arquivos
	lerFile(alunos, &qtdAlunos);

	system("cls");
	imprimirAlunos();

	// selecionar a resposta
	printf("\n*IDs -> [1.], [2.], [3.], etc..\n");
	printf("\nSelecione o id do aluno, o qual voce deseja deletar.");
	printf("\nINFORME: ");
	scanf("%d", &opcao);

	// validação da resposta.
	fflush(stdin);
	while(opcao < 1 || opcao > qtdAlunos) {
		system("cls");
		imprimirAlunos();
		printf("\t[ERROR] -> Digite um valor válido!");
		printf("\n-----------------------------------------------\n");
		printf("\n*IDs -> [1.], [2.], [3.], etc..\n");
		printf("\nSelecione o id do aluno, o qual voce deseja deletar.");
		printf("\nINFORME: ");
		scanf("%d", &opcao);
		fflush(stdin);
	}

	/*
		Excluir:
			nome = '',
			RGM = 0,
			cursos = 0,
	*/ 
	
	// criar a var para pegar o nome do usuario deletado
	char *nomeAlunoDeletado;
	
	// alocando dinamicamente
	nomeAlunoDeletado = (char*)malloc(1024 * sizeof(char));

	// fazer a copia
	strcpy(nomeAlunoDeletado, alunos[opcao - 1].user);
	
	// deletar o aluno
	deletarAluno(alunos, opcao - 1, &qtdAlunos);
	
	// salvar os dados
	salvarFileAluno(alunos, qtdAlunos);

	// escolher o caminho que o usu quer fazer no sistema 
	// nomeAlunoDeletado -> é quem foi deletado.
	escolherCaminho(nomeAlunoDeletado);
	
	// liberando a memória
	free(nomeAlunoDeletado);
	free(alunos);
	
}

// fazer o procedimento de deletar
void deletarAluno(t_Pessoa *alunos, int index, int *qtdAlunos) {
	
	/* 
		loop de index -> o id do aluno que o usuario pediu para deletar
		até a qtdAlunos - 1, para evitar o acesso de lixo de  memória no final, visto que n foi alterado a qtdAlunos, só vai fazer dps.

		id = 3

		int i = 3; i < (*qtdAlunos) - 1...
		alunos[3] = alunos[3 + 1]... Assim por diante.
	*/
	for(int i = index; i < (*qtdAlunos) - 1; i++)
		alunos[i] = alunos[i + 1];
		
	(*qtdAlunos)--;	// diminuir 1 aluno.
}

// procedimento para escolher o caminho
void escolherCaminho(char *nomeAluno) {
	system("cls");
	// imprimir o nome do usuario que vai ser deletado
	printf("\n\n\tExclusão do aluno *%s* foi concluida...\n\n", nomeAluno);


	// selecionar a resposta
	int opcao;
	printf("\n----------------------------------------\n");
	printf("[1.] -> Imprimir a lista de alunos\n[2.] -> Acessar o menu\n");
	printf("\nINFORME: ");
	scanf("%d", &opcao);
	
	// validar a resposta
	fflush(stdin);
	while(opcao < 1 || opcao > 2) {
		
		printf("\t[ERROR] -> Digite um valor válido!");
		printf("\n-----------------------------------------------\n");
		printf("[1.] -> Imprimir a lista de alunos\n[2.] -> Acessar o menu\n");
		printf("\nINFORME: ");
		scanf("%d", &opcao);
	
		fflush(stdin);
	}
	
	// escolher o caminho
	opcao == 2 ? menu() : imprimirAlunos();
}
