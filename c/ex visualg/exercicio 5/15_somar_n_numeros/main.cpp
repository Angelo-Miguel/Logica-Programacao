#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int i,n,vezes,total;
	
	printf("***Somar n números***\n\n");
	
	total = 0;
	printf("Informe quantos números:\n");
	scanf("%d",&vezes);
	system("cls");
	
	printf("Somar %d números:\n\n",vezess);
	for(i = 1; i <=vezes; i ++){
		scanf("%d",&n);
		total = total + n;
	}
	
	printf("\n\n*RESULTADO*\n\n");
	printf("O total é %d\n\n",total);
	
	
	system("pause");
	return 0;
}
