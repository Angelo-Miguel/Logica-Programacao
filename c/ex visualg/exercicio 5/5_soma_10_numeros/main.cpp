#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int i,n,soma;
	
	printf("***Soma 10 números***\n\n");
	
	printf("Informe 10 números:\n");
	soma = 0;
	for(i = 1; i <= 10; i ++){
			scanf("%d",&n);
			soma = soma + n;
	}
	system("cls");
	printf("*RESULTADO*\n\n");
	printf("Soma: %d\n\n",soma);
	
	system("pause");
	return 0;
}
