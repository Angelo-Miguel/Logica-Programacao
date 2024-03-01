#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int i,n,cons;
	
	cons = 0;
	printf("***Numeros pares***\n\n");
	
	printf("Informe 20 números:\n");
	for(i = 1; i <=20; i ++){
		scanf("%d",&n);
		
		if(n % 2 == 0){
			cons = cons + 1;
		}
	}
	
	printf("Tem %d números pares\n\n",cons);
	
	system("pause");
	return 0;
}
