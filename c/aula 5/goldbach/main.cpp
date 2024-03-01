#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	printf("***Goldbach***\n\n");
	
	int par,a = 1,primo,atu,ant,total,total1;
	
	for(int i = 1 ;i<= 1000;i++){
		primo = 0;
		for(int j = 1; j <= i; j++){
			if(i % j == 0){
				primo++;	
			}	
		}
		if(primo == 2){
			for(int k = 1; k<=1000;k++){
				for(int l = 1; l <= k; l++){
					if(k % l == 0){
						primo++;	
					}	
				}
			
				total = ant + atu;
				atu = i;
				ant = total - ant;
				total1 = ant + atu;
			
				if( total1 % 2 ==0){
					if((total1 >= 500) and (total1 <= 1000)){
						printf("%d +",atu);
						printf(" %d = ",ant);
						printf("%d\n",total1);
					}
				}
			
			}
			}	
		}
	


	
	system("pause");
	return 0;
}
