#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"POrtuguese");
	
	int i,n;
	
	printf("***Tabuada***\n\n");
	
	printf("Informe um número: ");
	scanf("%d",&n);
	
	for(i=0;i<=10;i++){
		printf("%d X %d = %d\n",i,n,i*n);
	}
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
