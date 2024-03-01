#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int n1, n2, n3;
	int pri, meio, ult;
	
	printf("**Maior número**\n\n"); 
	
	printf("Informe o primeiro número\n");
	scanf("%d",&n1);
	printf("Informe o segundo número\n");
	scanf("%d",&n2);
	printf("Informe o terceiro número\n");
	scanf("%d",&n3);
	
	
	
	if((n1 > n2) and (n1 > n3)){
		pri = n1;
	}
		else{
			if((n2> n1) and (n2 > n3)){
				pri = n2;
			}
				else{
					if((n3 > n1) and (n3 > n2)){
						pri = n3;
				 	}
				}		
			}
	
	
	
	printf("\n\nO maior número é: %d\n", pri);
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
