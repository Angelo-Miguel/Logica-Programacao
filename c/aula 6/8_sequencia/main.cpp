#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"POrtuguese");
	
	int i,n, pri,razao;
	
	while(1 == 1){
	
	printf("***Sequencia com razão***\n\n");
	
	printf("Informe o primeiro número da sequencia: ");
	scanf("%d",&pri);
	printf("Informe a razão: ");
	scanf("%d",&razao);
	
	
	for(i = 1; i <= 10; i++){
		printf("%d\n",pri);
				pri =+ pri + razao;
	}
	
	system("pause");
	system("cls");
	}
	return 0;
}
