#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int negativo,n,i;
	
	printf("***Quantidade valores negaticos***\n\n");
	
	printf("Informe 5 valores: \n");
	
	negativo = 0;
	for(i = 1; i <= 5; i ++){
		scanf("%d",&n);
		if(n < 0){
			negativo ++;
		}
	}
	
	system("cls");
	printf("*RESULTADO*\n\n");
	printf("Tem %d números negativos\n\n",negativo);
	
	system("pause");
	return 0;
}
