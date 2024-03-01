#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	
	float n1, n2, mult, div, soma;
	
	printf("Infome o primeiro valor\n");
	scanf("%f",&n1);
	printf("Informe o segundo valor\n");
	scanf("%f",&n2);
	
	mult = n1 * n2;
	div = n1 / n2;
	soma = n1 + n2;
	
	printf("***RESULTADO***\n\n");
	printf("Soma: %f + %f= %f\n",n1,n2,soma);
	printf("Multiplicação: %f * %f= %f\n",n1,n2,mult);
	printf("Divisão: %f / %f = %f\n",n1,n2,div);
	
	
	system("pause");
	return 0;
}
