#include <stdio.h>
#include <stdlib.h>


int main() {
    
   int horaInicial, minutoInicial, horaFinal, minutoFinal, tempoInicial, tempoFinal, hora, minuto;
    
    scanf("%d%d%d%d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);
    
    while(horaInicial < 0 || horaInicial > 24 || horaFinal < 0 || horaFinal > 24)
        scanf("%d%d", &horaInicial, &horaFinal);
        
    while(minutoInicial < 0 || minutoInicial > 24 || minutoFinal < 0 || minutoFinal > 24)
        scanf("%d%d", &minutoInicial, &minutoFinal);
    
    int inicio = horaInicial * 60 + minutoInicial;
    int fim = horaFinal * 60 + minutoFinal;
    
    
    if(fim <= inicio)
   		fim += 24 * 60;
    
    int total = fim - inicio;
    
 	hora = total / 60;
 	minuto = total % 60;
 	
 	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);
    return 0;
}

