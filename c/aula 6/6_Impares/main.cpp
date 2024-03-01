#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int i,p=0,impares[50],j;
	
	printf("***Impares de 100 a 200***\n\n");
	
	for(i = 100; i<= 200;i++){
		if(i % 2 != 0){
			impares[p] = i;
			p++;
		}
	}
	
	for(j=0;j<p;j++){
		printf("%d\n",impares[j]);
	}
	
	
	
	return 0;
}
