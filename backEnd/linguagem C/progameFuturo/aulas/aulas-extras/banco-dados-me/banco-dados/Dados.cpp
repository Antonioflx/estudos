#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
	Codigo para pegar dados:
	
	Colocar num arquivo e ler para o usu.
	
	// Caso queira utilizar muito -> usar malloc()
	
	o sizeof do struct t_Pessoa = 204bytes.
	
	
		1) Nome = 50c
		2) Idade = %d
		3) Celular = 20c
		4) Cidade = 30c
		5) Rua = 50c
		6) N da casa = %d
		7) CEP = 20c
		8) Bairro = 15c
		
	
	
	// fazer validação dos dados
		
	biblioteca <ctype.h>
		
	isalnum() 
		-> retorna 0 ( se o caractere for uma letra (Maiuscula ou minuscula) ou num )
		-> retorna 1 ( se o caractere for especial )
	
	isalpha()
		-> retorna 0 ( se o caractere for uma letra (Maiuscula ou minuscula)
		-> retorna 1 ( se o caractere não for uma letra )
		
	isdigit()
		-> retorna 0 ( se o caractere for um digito )
		-> retorna 1 ( se o caractere não for um digito )
	
*/


typedef struct {
	char CEP[20], cidade[30], rua[50], bairro[15];
	int num;
} t_Endereco;

typedef struct {
	int ano, mes, dia;	
} t_DataNascimento;

typedef struct {
	char nome[50];
	char numero[20];
	t_DataNascimento nascimento;
	int idade;
	t_Endereco endereco;
} t_Pessoa;


// pedir Dados

t_Pessoa pedirDados() {
	
	t_Pessoa pess;
	printf("\nIremos passar por um processo de cadastro:\n");
	
	printf("\n\n\tCADASTRO:\n");
	printf("\nNome: ");
	fgets(pess.nome, 50, stdin);
	printf("Data de Nascimento [dia/mes/ano]: ");
	scanf("%d%d%d",
				&pess.nascimento.dia,
				&pess.nascimento.mes,
				&pess.nascimento.ano
	);
	
	// limpar buffer
	while(getchar() != '\n');
	
	
	// validar a data.
	while (2024 - pess.nascimento.ano < 0 || 2024 - pess.nascimento.ano > 105 || 
			pess.nascimento.mes < 0 || pess.nascimento.mes > 12 
			|| pess.nascimento.dia < 0 || pess.nascimento.dia > 31) {
		printf("\nPor favor, digite uma data válida: \n");
		
			printf("Data de Nascimento [dia/mes/ano]: ");
			scanf("%d%d%d",
				&pess.nascimento.dia,
				&pess.nascimento.mes,
				&pess.nascimento.ano
	);
	
	// limpar buffer
	while(getchar() != '\n');
	
	}
	
	pess.idade = 2024 - pess.nascimento.ano;
	
	printf("Numero de celular (DD) XXXX-XXXX: ");
	fgets(pess.numero, 20, stdin);
	
	// endereço
	printf("\n\tEndereço:\nCEP: ");
	fgets(pess.endereco.CEP, 20, stdin);
	
	printf("Cidade: ");
	fgets(pess.endereco.cidade, 30, stdin);
	
	printf("Rua: ");
	fgets(pess.endereco.rua, 50, stdin);
	
	printf("Bairro: ");
	fgets(pess.endereco.bairro, 15, stdin);
	
	printf("Numero da casa: ");
	scanf("%d", &pess.endereco.num);
	
	while(getchar() != '\n');
	
	return pess;
}

void imprimirDados(t_Pessoa pess) {
		
	printf("\n\n\tDADOS:\n");
	printf("\nNome: %sIdade: %d\nCelular: %s",
								pess.nome,
								pess.idade,
								pess.numero
	);
	printf("\n\n\tENDEREÇO:\n");
	printf("\nCidade: %sRua: %sNº da Casa: %d\nBairro: %sCEP: %s",
										pess.endereco.cidade,
										pess.endereco.rua,
										pess.endereco.num,
										pess.endereco.bairro,
										pess.endereco.CEP
	);
	
}

// confirmas os dados.

int confirmarDados() {
	int opcao;
	printf("\n\n\tCONFIRMAR:\n[1] -> Os dados estão corretos\n[2] -> Realizar uma alteração ou ajustar algum dado errado\nINFORME: ");
	scanf("%d", &opcao);
	
	while(opcao < 1 || opcao > 2) {
		printf("\n\t[ERROR]\n");
		printf("CONFIRMAR:\n[0] -> Os dados estão corretos\n[1] ->Realizar uma alteração ou ajustar algum dado errado");
		scanf("%d", &opcao);
	}
	
	system("cls");
	return opcao;
}


void alterarDado(t_Pessoa *pess) {
	int opcao;
	
	imprimirDados(*pess);
	
	printf("\n-----------------------M E N U ----------------\n");
	printf("[1] -> Nome\n[2] -> Idade\n[3] -> Celular\n[4] -> Cidade\n[5] -> Rua\n[6] -> Nº da Casa\n[7] -> Bairro\n[8] -> CEP");
	printf("\n\nInforme o número de acordo com o dado que está errado ou você quer alterar: ");
	scanf("%d", &opcao);
	scanf("%c");
//	system("cls");
	
	printf("\n\n\tALTERAR DADOS:\n");
	switch(opcao) {
		case 1 :
			printf("\nNome: ");
			fgets(pess->nome, 50, stdin);
		break;
		
		case 2 :
			printf("\nIdade: ");
			scanf("%d", &pess->idade);
			
			while(pess->idade < 0 || pess->idade > 105) {
				printf("\nPor favor, digite uma idade válida:");
				printf("\nIdade: ");
				scanf("%d", &pess->idade);
			}
			
		break;
		
		case 3 :
			printf("\nNumero de celular (DD) XXXX-XXXX: ");
			fgets(pess->numero, 20, stdin);
		break;
		
		case 4 :
			printf("\nCidade: ");
			fgets(pess->endereco.cidade, 30, stdin);
		break;
		
		case 5 :
			printf("\nRua: ");
			fgets(pess->endereco.rua, 50, stdin);	
		break;
		
		case 6 :
			printf("\nNumero da casa: ");
			scanf("%d", &pess->endereco.num);
		break;
		
		case 7 :
			printf("\nBairro: ");
			fgets(pess->endereco.bairro, 15, stdin);
		break;
		
		case 8 :
			printf("\nCEP: ");
			fgets(pess->endereco.CEP, 20, stdin);
		break;
		
		default : printf("\n[ERROR]\n"); break;
	}
}

// escrever no arquivo
void escrever (char f[], t_Pessoa pess) {
	
	// abrir o arquivo
	FILE *file = fopen(f, "w");
	
	if (file) {
		fprintf(file, "\n\t\tDADOS:\n\n");
		fprintf(file, "*Nome: %s*Idade: %d\t*Celular: %s", pess.nome, pess.idade, pess.numero);
		fprintf(file, "\n\t\tENDEREÇO:\n\n");
		fprintf(file, "*Cidade: %s*Rua: %s*Nº: %dCEP: %s*Bairro: %s", 
															pess.endereco.cidade,
															pess.endereco.rua,
															pess.endereco.num,
															pess.endereco.CEP,
															pess.endereco.bairro												
		);
	} 
	else
		printf("\nErro em abrir o arquivo!\n");
	fclose(file);
}

// ler os dados no sistema:

void ler (char f[], t_Pessoa pess) {
	
	FILE *file = fopen(f, "r");
	
	if(file) {
		printf("\n\n\tDados lidos do arquivo: \n");
	
	/*
		1) Nome = 50
		2) Idade = %d
		3) Celular = 20
		4) Cidade = 30
		5) Rua = 50
		6) N da casa = %d
		7) CEP = 20
		8) Bairro = 15
	
	*/	
//		while(fscanf(file, " %50[^\n]\n%d\t%20[^\n]\n%30[^\n]%50[^\n]\n%d\n%20[^\n]\n%15[^\n]", 
//													pess.nome, 
//													&pess.idade, 
//													pess.numero, 
//													pess.endereco.cidade, 
//													pess.endereco.rua,
//													&pess.endereco.num, 
//													pess.endereco.CEP,
//													pess.endereco.bairro) != EOF) {} // caso tenha mais de uma pessoa.

			printf("\nNome: %sIdade: %d\tCelular: %s\nCidade: %sRua: %sNº: %d\nCEP: %sBairro: %s",
													pess.nome,
													pess.idade,
													pess.numero,
													pess.endereco.cidade,
													pess.endereco.rua,
													pess.endereco.num,
													pess.endereco.CEP,
													pess.endereco.bairro
													
													
													
			);

	}
	else {
		printf("\nErro em abrir o arquivo!\n");
	}
	
	fclose(file);
}

int main () {
	
	setlocale(0, "Portuguese");
	t_Pessoa pessoa;
	
	// Pedir dados (v)
	pessoa = pedirDados();
	
	// limpar a tela
	system("cls");
	
	// imprimir os dados(v)
	imprimirDados(pessoa);
	
	// confirmarDados (v)
	while (confirmarDados() == 2) {
		alterarDado(&pessoa);
		imprimirDados(pessoa);
	}
	system("cls");
	printf("\n\tCadastro concluido!\n");
	
	/*
		printf("\nTamanho: %d", sizeof(pessoa)); 204 bytes
		
		Caso queira alocar dinamicamente. (N* de pessoas gigante);
		
		pessoa = (t_Pessoa*)malloc(sizeof(t_Pessoa)); // 1 pessoa;
		pessoa = (t_Pessoa*)malloc(n * sizeof(t_Pessoa)); // mais de uma pessoa.;
	*/
	
	// colocar em um documento
	char arquivo[] = {"dados2.txt"};
	
	// parte dos arquivos
	
	// 1) escrever (v)
	escrever(arquivo, pessoa); // param -> arquivo, e  os dados da pessoa;
	
	// 2) ler (v)
	ler(arquivo, pessoa);
	
	return 0;
}
