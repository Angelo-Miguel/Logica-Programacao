#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int j = 1,i = 1,valor;
	char caracter;
	
	printf("***Quadrado for***\n\n");
	
	printf("Informe um caracter: ");
	scanf("%c",&caracter);
	printf("Informe um valor: ");
	scanf("%d",&valor);
	printf("\n\n");
	
	for(i = 1; i <= valor; i ++){
		printf("\n");
		for(j = 1; j<= valor; j ++){
			printf("%c ",caracter);
		}
	}
	printf("\n\n");

	
	
	system("pause");
	return 0;
}
