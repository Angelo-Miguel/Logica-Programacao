#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	
	printf("***Repitir frase 20 vezes***\n\n");
	
	for(i = 1; i <= 20; i ++){
		printf("%dº -Eu gosto de estudar Algoritmos!\n",i);
	}
	system("pause");
	return 0;
}
