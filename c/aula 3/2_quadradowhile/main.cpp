#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int while1 = 1,while2 = 1;
	int j = 1,i = 1;
	int valor;
	char caracter;
	
	printf("**Quadrado while***\n\n");
	
	printf("Informe um caracter: ");
	scanf("%c",&caracter);
	printf("Informe um valor: ");
	scanf("%d",&valor);
	printf("\n\n");

	while(while1 <= valor){
		while(while2 <= valor){
			printf("%c ",caracter);
			while2++;
		}
		printf("\n");
		while1++;
		while2 = 1;
	}
	printf("\n\n");

	system("pause");
	return 0;
}
