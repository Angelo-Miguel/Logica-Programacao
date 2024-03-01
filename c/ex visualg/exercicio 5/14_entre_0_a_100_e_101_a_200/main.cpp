#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int i,n,cons,cons2;
	
	cons2 = 0;
	cons = 0;
	printf("***Entre 0 a 100 e 101 a 200***\n\n");
	
	printf("Informe 20 números:\n");
	for(i = 1; i <=20; i ++){
		scanf("%d",&n);
		
		if((n >= 0 ) and (n <= 100)){
			cons = cons + 1;
		}
		else{
			if((n >= 101 ) and (n <= 200)){
			cons2 = cons2 + 1;
		}
		}
	}
	
	printf("Tem %d números entre 0 e 100\n\n",cons);
	printf("Tem %d números entre 101 e 200\n\n",cons2);
	
	system("pause");
	return 0;
}
