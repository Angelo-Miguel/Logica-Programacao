#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int n1, n2;
	
	printf("**N�mero maior**\n\n");
	
	printf("Informe o primeiro n�mero:\n");
	scanf("%d",&n1);
	printf("Informe o segundo n�mero:\n");
	scanf("%d",&n2);
	
	
	if(n1 > n2){
		printf("\n\nO n�mero %d � maior\n",n1);
	}
	if(n2 > n1){
		printf("\n\nO n�mero %d � maior\n",n2);
	}		
	if(n1 == n2){
		printf("\n\nOs n�meros s�o iguais\n");
	}
	
	
	
	
	system("pause");
	return 0;
}
