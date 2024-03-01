#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int i, soma;
	
	soma = 0;
	
	for(i = 1; i <= 100; i ++){
		printf("%d ",i);
		soma = soma + i;
	}
	
	printf("\n\nSoma:%d\n\n",soma);
	
	system("pause");
	return 0;
}
