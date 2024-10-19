#include <stdio.h>


int main() {
    
    double salario, reajuste, salarioNovo;
    int percentual;
    scanf("%lf", &salario);
    
    if(salario > 0 && salario <= 400){
        percentual = 15;
        reajuste = salario * percentual/100;
        salarioNovo = salario * percentual/100 + salario ;
    } else if (salario <= 800) {
        percentual = 12;
        reajuste = salario * percentual/100;
        salarioNovo = salario * percentual/100 + salario ;
    } else if (salario <= 1200) {
        percentual = 10;
        reajuste = salario * percentual/100;
        salarioNovo = salario * percentual/100 + salario ;
    } else if(salario <= 2000) {
        percentual = 7;
        reajuste = salario * percentual/100;
        salarioNovo = salario * percentual/100 + salario ;
    } else {
        percentual = 4;
        reajuste = salario * percentual/100;
        salarioNovo = salario * percentual/100 + salario ;
    }
    
     printf("\nNovo salario: %.2lf\n", salarioNovo);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %%\n", percentual);
    return 0;
}

