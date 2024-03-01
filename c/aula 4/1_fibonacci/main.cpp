#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");

	int n,i,ant,atu,total;
	
	printf("***Sequência de fibonacci***\n\n");
	
	printf("Informe quantos números deseja: ");
	scanf("%d",&n);
	printf("\n");
	
	ant= 1;
	atu= 0;
	for(i = 1;i <= n; i ++){
		total = ant + atu;
		atu = total;
		ant = total - ant;
		printf("%d ",total);
	}
	printf("\n\n");
	
	system("pause");
	return 0;
}
