#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int i, soma, nota;
	float media;
	
	soma = 0;
	for(i = 1; i <= 5; i ++){
		printf("Informe a %d� nota: ",i);
		scanf("%d",&nota);
		soma = soma + nota;
		system("cls");
	}
	
	media = soma/5;
	
	printf("*Resultado*\n\n");
	printf("A m�dia � %f\n\n",media);
	
	system("pause");
	return 0;
}
