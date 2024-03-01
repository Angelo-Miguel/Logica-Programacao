#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int i,soma;
	
	printf("***Soma 1 até 15***\n\n");
	soma = 0;
	for(i = 1; i <= 15; i ++){
		printf("%d\n",i);
		soma = soma + i;
	}
	printf("\n\n**RESULTADO**\n");
	printf("O total da soma é %d\n\n",soma);
	
	
	system("pause");
	return 0;
}
