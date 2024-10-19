#include <stdio.h>
 
int main() {
    
   int tempoInicial, tempoFinal, duracao;
    
    scanf("%d%d", &tempoInicial, &tempoFinal);
    
    while(tempoInicial < 0 || tempoInicial > 24 || tempoFinal < 0 || tempoFinal > 24)
        scanf("%d%d", &tempoInicial, &tempoFinal);
    
    if(tempoFinal > tempoInicial) 
	{
        duracao = tempoFinal - tempoInicial;
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    } 
	else if (tempoInicial == tempoFinal) 
	{
        duracao = 24;
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    } 
	else 
	{
		duracao = 24 + tempoFinal - tempoInicial;
		printf("O JOGO DUROU %d HORA(S)\n", duracao);
	}
 	
    return 0;
}
