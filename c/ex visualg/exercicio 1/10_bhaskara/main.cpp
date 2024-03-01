#include <iostream>
#include <locale.h>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	
	
	float a, b, c, x1, x2, delta;
	
	printf("**Bhaskara**\n\n");
	
	printf("Informe o primeiro número (A):\n");
	scanf("%f",&a);
	printf("Informe o segundo número (B):\n");
	scanf("%f",&b);
	printf("Informe o terceiro número (C):\n");
	scanf("%f",&c);
	
		delta = ( b * b) - (4 * a * c);
		if(delta < 0){
			printf("*RESULTADO*\n\n");
			printf("Erro / delta = 0\n");
		}	
		else{
			x1 = ((-b)+sqrt(delta))/(2*a);
			x2 = ((-b)-sqrt(delta))/(2*a);		


			printf("*RESULTADO*\n\n");
				printf("O valor de x1 é: %f\n",x1);
				printf("O valor de x2 é: %f\n",x2);
		
			}	
	system("pause");
	return 0;
}
