#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int i,n,j,b;
	char caracter;
	
	printf("**Triângulo***\n\n");
	
	printf("Informe um caracter: ");
	scanf("%c",&caracter);
	do{
	
	printf("Informe um valor (impar): ");
	scanf("%d",&n);
	printf("\n\n");
	
	}while(n % 2 == 0);
	b = n;
	for(i = 1; i <= n; i ++){
		printf("\n");
		for(j = 1; j<= b; j ++){
			printf("%c ",caracter);
		}
		b--;
	}
	
	system("pause");
	return 0;
}
