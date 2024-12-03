#include <stdio.h>


/*
	0 - 2000 -> Isento
	2000.01 - 3000.00 -> 8%
	3000.01 - 4500.00 -> 18%
	4500.01 - all -> 28%
	
	EX:
	
	3002.00
	0 - 2000 -> Isento
	1000 -> 8%
	2 -> 18%

*/

double calcularImposto(double salario) {
	
	double imposto = 0.0;
	
	imposto += (salario > 2000) ? (salario < 3000.01) ? (salario - 2000) * 0.08 : 1000 * 0.08 : 0.0;
	imposto += (salario > 3000.00) ? (salario < 4500.01) ? (salario - 3000.00) * 0.18 : 1500 * 0.18 : 0.0;
	imposto += (salario > 4500.00) ? (salario - 4500.00) * 0.28 : 0.0;
	return imposto;
}

int main() {
    
    double salario;
    
    scanf("%lf", &salario);
    
    calcularImposto(salario) == 0 ? printf("Isento\n") : printf("R$ %.2lf\n", calcularImposto(salario));
    return 0;
}

