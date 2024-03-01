#include <iostream>
#include <locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	system("color 2");
	
	int a = 5000000,b = 7000000,anos = 0;
	
	printf("***Taxa de natalidade***\n\n");
	
	while(a < b){
		
	a +=  (a * 0.03);	
	b +=  (b * 0.02);	
	anos++;	
	}
	
	printf("População A: %d\n",a);	
	printf("População B: %d\n",b);
	printf("Tempo em anos: %d\n",anos);
	
	system("pause");
	return 0;
}
