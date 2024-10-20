#include <stdio.h>



int main () {

	// Variaveis
	
	float nota1, nota2, media;
	
	// Codigo
	
	printf("\nDigite a sua Primeira Nota: ");
	scanf("%f", &nota1);
	
	while(nota1 < 0 || nota1 > 10) 
	{
		printf("\nSenha Invalida!");
		printf("\nDigite a sua Primeira Nota: ");
		scanf("%f", &nota1);
	}			
		
	printf("\n\nDigite a sua Segunda Nota: ");
	scanf("%f", &nota2);	
	
	while (nota2 < 0 || nota2 > 10)
	{
		printf("\nSenha Invalida!");
		printf("\nDigite a sua Segunda Nota: ");
		scanf("%f", &nota2);
	} 
	
	media = (nota1+ nota2)/2;
	
	printf("A media e: %.2f", media);
	return 0;
}
