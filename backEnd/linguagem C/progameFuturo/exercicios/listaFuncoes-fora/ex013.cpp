#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


/*
	11. Um professor, muito legal, fez 3 provas durante um semestre,
	mas só vai levar em conta as duas notas mais altas para calcular a média.
	Faça uma aplicação em C que peça o valor das 3 notas, mostre como seria a média com essas 3 provas, 
	a média com as 2 notas mais altas, bem como sua nota mais alta e sua nota mais baixa.
	
	nota1, nota2, nota3;
	media = (nota1 + nota2 + nota3) / 3
	
	
	Pegar as 2 notas mais altas. e calcular a media
	
	se (nota1 e nota2 > nota3)
		media = (nota1 + nota2)/2 
		
	Depois mostrar a maior nota e a menor nota.
*/


float media3Notas(float nota1, float nota2, float nota3) {
	
	float media = (nota1 + nota2 + nota3)/3;
	
	return media;
}


float media2Notas(float nota2, float nota3) {
	
	float media = (nota2 + nota3)/2;
	
	return media;
}


int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	float nota1, nota2, nota3, maior, menor;
	
	printf("\nDigite as tres notas: ");
	scanf("%f%f%f", &nota1, &nota2, &nota3);
	
	printf("\nResultado das tres notas:");
	printf("\nMEDIA: %.2f", media3Notas(nota1, nota2, nota3));
	
	maior = nota1;
	menor = nota1;
	
	printf("\nResultado das notas mais altas:");
	if(nota2 > nota1){ 
		maior = nota2;
		if(nota3 > nota1) 
			printf("\nA MEDIA entre %.2f e %.2f = %.2f", nota2, nota3, media2Notas(nota2, nota3));
		else
			printf("\nA MEDIA entre %.2f e %.2f = %.2f", nota2, nota1, media2Notas(nota2, nota1));
	} 
	else {
		menor = nota2;
		if(nota2 > nota3)
			printf("\nA MEDIA entre %.2f e %.2f = %.2f", nota1, nota2, media2Notas(nota1, nota2));
		else
			printf("\nA MEDIA entre %.2f e %.2f = %.2f", nota1, nota3,  media2Notas(nota1, nota3));
	}
		
	if(nota3 > maior)
		maior = nota3;
		
	if(nota3 < menor)
		menor = nota3;
	
	printf("\n\nMaior Nota: %.2f", maior);	
	printf("\nMenor Nota: %.2f", menor);
	
	return 0;
} 
