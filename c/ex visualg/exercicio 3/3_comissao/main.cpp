#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	float salario, vendas, extra, comissao, valorfinal; 
	
	printf("***Comiss�o***\n\n");
	
	printf("Infome o valor do s�lario:\n");
	scanf("%f",&salario);
	printf("Informe o valor de vendas:\n");
	scanf("%f",&vendas);
	
	if(vendas <= 1500){
		comissao = vendas * 0.03;
		valorfinal = comissao + salario;
		printf("\n\n**RESULTADO**\n\n");
		printf("O s�lario final � de R$ %f\n",valorfinal);
		printf("O valor da comiss�o foi de R$ %f\n\n",comissao);
	}
	else{
		if(vendas > 1500){
		comissao = vendas * 0.03;
		extra = (vendas - 1500) * 0.05;
		valorfinal = comissao + extra + salario;
		printf("\n\n**RESULTADO**\n\n");
		printf("O s�lario final � de R$ %f\n",valorfinal);
		printf("O valor da comiss�o foi de R$ %f\n",comissao);
		printf("O valor da comiss�o extra foi de R$ %f\n\n",extra);
		}
	}
	system("pause");
	return 0;
}
