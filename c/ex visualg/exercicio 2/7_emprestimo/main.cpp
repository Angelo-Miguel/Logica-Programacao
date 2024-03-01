#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	printf("**Emprestimo**\n\n");
	
	printf("Informe a renda mensal:\n");
	scanf("%f",&renda);
	printf("Informe o valor do emprestimo:\n");
	scanf("%f",&valoremprestimo);
	printf("Informe a quantidade de parcelas:\n");
	scanf("%f",&parcelas);
	
	n1 = renda * 30;
	n2 = renda * 0.3;
	
	if((valoremprestimo >= n1) && (valoremprestimo <= n2)){
		printf("Valor do emprestimo é de R$ %f",valoremprestimo);
		printf("O total de parcelas é de %f",parcelas);
	}
	else{
		printf("Operação impossivel");
	}
	
	system("pause");
	return 0;
}
