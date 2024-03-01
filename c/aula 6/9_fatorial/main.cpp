#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int i,n,fatorial;
	printf("***Fatorial***\n\n");
	
	printf("Informe um número: ");
	scanf("%d",&n);
	
	printf("\n\n");
	printf("%d",n);
	for(i = n - 1; i >= 1; i--){ 	
		fatorial = n * i;  
		n = fatorial;	
		printf(" X %d",i);
	}
	printf(" = %d\n\n",fatorial);
		
	system("pause");
	return 0;
}
