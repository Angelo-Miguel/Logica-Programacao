#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int n1, n2, n3, n4;
	int par1, par2, par3, par4;
	int somatotal, somaimp, somapar;
	
	printf("**Soma dos pares e impares**\n\n");
	
	printf("Informe o primeiro número:\n");
	scanf("%d",&n1);
	printf("Informe o segundo número:\n");
	scanf("%d",&n2);
	printf("Informe o terceiro número:\n");
	scanf("%d",&n3);
	printf("Informe o quarto número:\n");
	scanf("%d",&n4);
	
	
	if(n1 % 2 == 0){
	par1 = n1;
	}	
		if(n2 % 2 == 0){
		par2 = n2;
		}
			if(n3 % 2 == 0){
			par3 = n3;
			}
				if(n4 % 2 == 0){
				par4 = n4;
				}
	
somatotal = n1 + n2 + n3 + n4;
somapar = par1 + par2 + par3 + par4;
somaimp = somatotal - somapar;


printf("*RESULTADO*\n\n");
printf("SOMA TOTAL: %d\n",somatotal);
printf("SOMA IMPAR: %d\n",somaimp);
printf("SOMA PAR  : %d\n",somapar);
	
	
	
	system("pause");
	return 0;
}
