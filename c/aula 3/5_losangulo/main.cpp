#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int i,k,n,j,l,p,b,total;
	char caracter;
	
	printf("**Losângulo***\n\n");
	
	printf("Informe um caracter: ");
	scanf("%c",&caracter);
	do{
	
	printf("Informe um valor (impar): ");
	scanf("%d",&n);
	printf("\n\n");
	
	}while(n % 2 == 0);
	total = 1;
	p = n / 2 + 1;
	b = n / 2 + 1;
	while(total <= n){
	
	for(i = 1;i <= b;i ++){
			p--;
			for( l = 1; l <= p; l++){
			printf("  ");
				}
		for(j = 1; j<= total; j ++){
			printf("%c ",caracter);
		}
		printf("\n");
		total+=2;
	}
	}
	
	total = n-2;
	
	for(i = 1;i <= n;i ++){
			p++;
			printf("  ");
			for( l = 2; l <= p; l++){
			printf("  ");
				}
		for(j = 1; j<= total; j ++){
			printf("%c ",caracter);
		}
		printf("\n");
		total-=2;
	}
	
	system("pause");
	return 0;
}











