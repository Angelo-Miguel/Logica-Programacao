#include <iostream>
#include <locale.h>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int i,n;
	char nome[40];
	
	printf("***Repitir nome N vezes***\n\n");



	printf("Informe um nome: ");
	scanf("%s",&nome);
	printf("Informe a quantidade de vezes: ");
	scanf("%d",&n);
	
	for(i = 1; i <= n; i ++){
		printf("%dº- %s\n",i,nome);
	}

	system("pause");
	return 0;
}
