#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int n1, n2;
	
	printf("**Número maior**\n\n");
	
	printf("Informe o primeiro número:\n");
	scanf("%d",&n1);
	printf("Informe o segundo número:\n");
	scanf("%d",&n2);
	
	
	if(n1 > n2){
		printf("\n\nO número %d é maior\n",n1);
	}
	if(n2 > n1){
		printf("\n\nO número %d é maior\n",n2);
	}		
	if(n1 == n2){
		printf("\n\nOs números são iguais\n");
	}
	
	
	
	
	system("pause");
	return 0;
}
