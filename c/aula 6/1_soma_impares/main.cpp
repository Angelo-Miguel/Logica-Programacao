#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int i,p = 0,j;
	int impar = 0;
	
	printf("***Soma impares***\n\n");
	for(i=0;i<=500;i++){
		if((i % 2 != 0) && (i % 3 == 0)){
			impar += i;
			printf("%d\n",i);
		}
	}	
	printf("\n\nSoma:\n%d\n\n",impar);
	
	system("pause");
	return 0;
}
