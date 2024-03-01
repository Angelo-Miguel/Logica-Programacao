#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int i,n,primo;
	
	printf("***Primo***\n\n");
	
	printf("Informe um número: ");
	scanf("%d",&n);
	
	primo = 0;
	for(i = 1; i <= n; i++){
		if(n % i == 0){
		primo = primo + 1;
		}	
	}
	
	system("cls");
	printf("*Resultado*\n");
	if(primo == 2){
	printf("O número %d é primo\n\n",n);
	}
	else{
		if(primo != 2){
		printf("O número %d não é primo\n\n",n);
		}
	}
	
	system("pause");
	return 0;
}
