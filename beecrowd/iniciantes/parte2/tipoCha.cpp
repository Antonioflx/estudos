#include <stdio.h>
 
int main() {
 
    
    int A, B, C, menor, meio, maior;
    
    scanf("%d%d%d", &A, &B, &C);
    
    
    maior = A;
    menor = A;
    meio = A;
    
    if (B > maior) {
    	maior = B;
    	if (B > C && C > A)
    		meio = C;
	}
    
	if (C > maior) {
    	maior = C;
    	if (C > B && B > A)
    		meio = B;
	}
	
    
    if (menor > B) {
    	menor = B;
    	if (B < C && C < A)
    		meio = C;
	}
    
	if (menor > C) {
    	menor = C;
    	if (C < B && B < A)
			meio = B;	
	}
		
	

	printf("%d\n", menor);
	printf("%d\n", meio);
	printf("%d\n", maior);
	
	printf("\n");
	
	printf("%d\n", A);
	printf("%d\n", B);
	printf("%d\n" , C);
	
	
    return 0;
}
