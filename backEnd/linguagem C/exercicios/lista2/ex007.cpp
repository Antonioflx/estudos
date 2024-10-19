#include <stdio.h>

/*
			Ex007
		Vogal ou nao
		Vogal - A, E, I, O, U
*/

int main () {

	char vogal;
	
	printf("\nVamos descobrir se e uma vogal ou nao");
	printf("\n\tDigite uma letra: ");
	scanf(" %c", &vogal);
	
	if (vogal == 'a' || vogal == 'A' || vogal == 'e' || vogal == 'E' || vogal == 'i' || vogal == 'I' || vogal == 'o'
	|| vogal == 'O' || vogal == 'u' || vogal == 'U')
	{
		printf("\tE uma vogal");
	} else 
	{
		printf("\tNao e uma vogal");
	}
	
	
	return 0;
}
