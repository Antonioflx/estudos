#include <stdio.h>

/*
		22) Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3
		centímetros por ano. Construa um programa que calcule e imprima quantos anos serão necessários
		para que Zé seja maior que Chico.
*/
int main () {

	// Variaveis
	
	int tempC, tempZ, res;
	float alturaC = 1.5, alturaZ = 1.1;	
	// Codigo
	
	
	do 
	{
		alturaC += 0.02;
		tempC ++;
		
		alturaZ += 0.03;
		tempZ++;
	} while (alturaZ <= alturaC);
	
	printf("%d ANOS", tempZ);
	return 0;
}
