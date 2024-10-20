#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
// system("cls");

/*
		ex006:
		6) Faça um programa que leia 10 números reais e os armazene em um vetor. Em seguida, leia um
		código inteiro e faça uma das ações abaixo:
		0 – finaliza o programa;
		1 – imprime o vetor na ordem do início ao fim;
		2 – imprime o vetor na ordem inversa (do fim para o início).
		O programa deve funcionar até que o usuário digite 0 para finalizar.
*/
int main () {

	// Variaveis
	
	int c, valor; 
	float num[10];
	
	// Codigo
	printf("\n");
	// Ler os valores;
	for (c = 0; c < 10; c++)
	{
		printf("INFORME o %d valor: ", c);
		scanf("%f", &num[c]);
	}
	
	// Ficar repetindo ate o usu digitar 0.
	do 
	{	
		printf("\n");
		printf("\n------------M E N U--------\n");
		printf("[0] - Finalizar o progama\n[1] - Imprimir os valores -> na ordem do inicio ao fim\n[2] - Imprimir os valores -> na ordem inversa");
		printf("\n---------------------------\n");
		printf("\nDigite o valor: ");
		scanf("%d", &valor);
		system("cls");
		
		
		switch (valor)
		{
			case 0 :
				printf("\nOBRIGADO!");
			break;
			
			case 1 :
				printf("\n\nVALORES: \n\n");
				for (c = 0; c < 10; c++)
					printf("%.1f ", num[c]);
			break;
			
			case 2 :
				printf("\n\nVALORES: \n\n");
				for (c = 9; c >= 0; c--)
					printf("%.1f ", num[c]);

			break;
			
			default :
				printf("VALOR INVALIDO!");
			break;
		 }
		} while(valor != 0);
		
	return 0;
}


