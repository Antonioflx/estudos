#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados.
 A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:

A = maior;
B = meio;
C = menor;

se A = B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES

*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	double A, B, C, maior, meio, menor;
	
	
	// codigo
	scanf("%lf%lf%lf", &A, &B, &C);
	
	while (A < 0 || B < 0 || C < 0)
		scanf("%lf%lf%lf", &A, &B, &C);
		
	maior = A;
	meio = A;
	menor = A;
	
	if(B > maior){
		maior = B;
		if(B > C && C > A)
			meio = C;
	} 
		
	if(C > maior){
		maior = C;
		if(C > B && B > A)
			meio = B;
	} 

	
	if(menor > B){
		menor = B;
		if(B < C && C < A)
			meio = C;
	} 
	
	if(menor > C){
		menor = C;
		if(C < B && B < A)
			meio = B;
	}
		
	A = maior;
	B = meio;
	C = menor;
	
	
	if(A >= B + C)
		printf("NAO FORMA TRIANGULO\n");
	else if(A == B && A == C) {
		if(A * A > B * B + C * C)
			printf("TRIANGULO OBTUSANGULO\n");
		else if(A * A < B * B + C * C)
			printf("TRIANGULO ACUTANGULO\n");
		printf("TRIANGULO EQUILATERO\n");
	} 
	else if(A == B && A != C || B == C && B != A) {
		if(A * A == B * B + C * C)
			printf("TRIANGULO RETANGULO\n");
		else if(A * A > B * B + C * C)
			printf("TRIANGULO OBTUSANGULO\n");
		else if(A * A < B * B + C * C)
			printf("TRIANGULO ACUTANGULO\n");
		printf("TRIANGULO ISOSCELES\n");
	} else if(A != B && A != C || B != C && B != A) {
		if(A * A == B * B + C * C)
			printf("TRIANGULO RETANGULO\n");
		else if(A * A > B * B + C * C)
			printf("TRIANGULO OBTUSANGULO\n");
		else if(A * A < B * B + C * C)
			printf("TRIANGULO ACUTANGULO\n");
	}
	
	
		
	return 0;
} 
