#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	int ano;
	
	printf("**Ano bissexto**\n\n");
	
	printf("Informe o ano:\n");
	scanf("%d",&ano);
	
	
	if((ano % 400 == 0) or (ano % 4 == 0) && (ano % 2 != 0)){
		printf("\n\nO ano %d é bissexto\n	",ano);
	}
	else{
			printf("\n\nO ano %d não é bissexto\n",ano);
	}	
	system("pause");
	return 0;
}
