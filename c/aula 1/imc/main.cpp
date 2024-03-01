#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	float altura, peso, imc;
	
	printf("***IMC***\n");
	printf("Informe a sua  altura\n");
	scanf("%f", &altura);
	printf("Informe o seu peso\n");
	scanf("%f", &peso);
	
	
	imc= peso / (altura * altura);
	printf("O seu imc �: %f\n\n", imc);
	
	
	
	if(imc > 40 ){
		printf("\nObesidade grau 3");
	}
		if((imc >= 35) && (imc < 39.9)){
			printf("\nObesidade grau 2 \n");
		}
		if((imc >= 30) && (imc < 34.9)){
			printf("\nObesidade grau 1 \n");
		}
		if((imc >= 25) && (imc < 29.9)){
			printf("\nSobrepeso \n");
		}
		if((imc >= 18.5) && (imc < 24.9)){
			printf("\nPeso normal \n");
		}
		if(imc < 18.5) {
			printf("\nAbaixo do peso \n");
		}

	system("pause");
	return 0;
}
