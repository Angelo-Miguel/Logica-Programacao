#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int i,contador,fim,meio,inicio,j;
	char caracter;
	
	printf("**Triângulo complexo***\n\n");
	
	printf("Informe um caracter: ");
	scanf("%c",&caracter);
	do{
	printf("Informe um valor (impar): ");
	scanf("%d",&contador);
	printf("\n\n");
	
	}while(contador % 2 == 0);

	meio = contador / 2 + 1;
	i = 1;
	inicio = meio;
	fim = meio;
	while(i <= meio){
		j=1;
		while(j<=contador){
			if((j>=inicio) && (j<=fim)){
				printf("%c",caracter);
			}else{
				printf(" ");
			}
			j++;
		}
		inicio--;
		fim++;
		printf("\n");
		i++;
	}
	
	system("pause");
	return 0;
}
