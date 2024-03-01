#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	float salario, desconto, total;
	
	printf("**Desconto**\n\n");
	
	printf("Informe o sálario:\n");
	scanf("%f",&salario);
	
	desconto = salario * 0.11;
	
	if(desconto > 334.29){
		desconto = 334.29;
	}
	total = salario - desconto;
	
	printf("\n\n*RESULTADO*\n");
	printf("Salario: %f\n",total);
	printf("Salario: %f",desconto);
	
	
	
	
	system("pause");
	return 0;
}
