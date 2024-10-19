#include <stdio.h>

/*
		26) Escreva um programa para ler as notas da primeira e da segunda avaliação de um aluno. Calcule
		e imprima a média semestral. O programa deverá aceitar apenas notas válidas no intervalo [0,10].
		Cada nota deve ser validada separadamente. Ao final, deve ser impressa a mensagem “novo
		calculo? (1-sim 2-nao)”, solicitando ao usuário que informe um código (1 ou 2), indicando se ele
		deseja ou não executar o programa novamente. Se for informado o código 1, deve ser repetida a
		execução de todo o programa para permitir um novo cálculo, se for informado o código 2 o
		programa deve ser encerrado.
*/
int main () {

	// Variaveis
	
	int res, cont;
	float nota1, nota2, media;
	
	// Codigo
	
	// Ler a nota1 e validar no intervalo [0,10].
	
	do 
	{
		printf("\nPRIMEIRA nota: ");
		scanf("%f", &nota1);
		
		while (nota1 < 0 || nota1 > 10)
		{
			printf("\nNOTA INVALIDA!");
			printf("\nPRIMEIRA nota: ");
			scanf("%f", &nota1);
		}
	
		// Ler a nota2 e validar no intervalo [0,10].
		printf("\n\nSEGUNDA nota: ");
		scanf("%f", &nota2);
		
		while (nota2 < 0 || nota2 > 10)
		{
			printf("\nNOTA INVALIDA!");
			printf("\nSEGUNDA nota: ");
			scanf("%f", &nota2);
		}
		
		media = (nota1 + nota2) / 2;
		
		printf("MEDIA: %.2f", media);
		
		printf("\n\nDeseja continuar?");
		printf("\n[1] - sim\n[2]- nao");
		printf("\nINFORME: ");
		scanf("%d", &res);
	
	} while (res == 1);
	
	printf("\nOBRIGADO!");
	
	
	return 0;
}
