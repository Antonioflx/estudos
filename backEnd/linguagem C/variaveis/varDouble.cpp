#include <stdio.h>



/*
					Aula 21
				tipo double
				Máscara --> %lf
			PS: Utilizar o longe double --> %Lf (l maiuscúlo)
			
		_mingw_prinft();
*/


int main() {
	
	float x = 3.1415;
	
	double y = 3.14159265358979323846;
	
	printf("O valor de x: %f\n", x);
	printf("Um float precisa de %d bytes de memória.\n\n", sizeof x);
	
	printf("O valor de y: %.10lf\n", y);
	printf("Um double precisa de %d bytes de memória.\n", sizeof y);
	
	return 0;
}
