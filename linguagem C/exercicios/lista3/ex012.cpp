#include <stdio.h>

/*
		ex0012
	a) idade media dos alunos ALTURA < 1.70m
	b) A altura media dos alunos com > 20 anos.
*/

int main () {
	
	// Variaveis
	
	int alunos = 10, idade, somaIdade, numPI= 0, mediaIdade;
	
	float altura, somaAltura, numPA, mediaAltura;
	
	
	for (int c = 0; c <= 45; c++)
	{
		printf("Digite a sua [IDADE] e [ALTURA] em metros: ");
		scanf("%d%f", &idade, &altura);
		if (altura < 1.70)
		{	
			numPI++;
			somaIdade += idade;
			mediaIdade = somaIdade / numPI;	
		}
		
		if (idade > 20)
		{
			numPA++;
			somaAltura += altura;
			mediaAltura = somaAltura / numPA;
		}
	}
	
	printf("\nA idade media dos alunos com menos de 1,70m de altura e: %d", mediaIdade);
	printf("\nA altura media dos alunos com mais de 20 anos e: %.2f", mediaAltura);
	
	return 0;
}
