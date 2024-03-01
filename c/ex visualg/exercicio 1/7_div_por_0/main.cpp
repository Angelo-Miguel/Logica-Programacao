#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	float n1, n2, total;
	
	printf("**Divisão por 0**\n\n");
	
	printf("Informe o primeiro número:\n");
	scanf("%f",&n1);
	printf("Informe o segundo número:\n");
	scanf("%f",&n2);
	
	
	total = n1 / n2;
	
	printf("\n*RESULTADO*\n");
	if(n2 != 0){
		printf("\nO resultado é: %f\n",total);
	}
		else{
			printf("Divisão por 0\n");
				}

	
	
	
	
	
	system("pause");
	return 0;
}
