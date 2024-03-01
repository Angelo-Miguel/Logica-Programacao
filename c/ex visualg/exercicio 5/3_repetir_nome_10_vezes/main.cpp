#include <iostream>
#include <locale.h>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	char nome[20];
	
	printf("***Repitir nome 10 vezes***\n\n");

	printf("Informe um nome: ");
	scanf("%s",&nome);
	
	for(i = 1; i <= 10; i ++){
		printf("%dº- %s\n",i,nome);
	}

	system("pause");
	return 0;
}
