#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int i,idade,maior;
	
	printf("***Quantidade de pessoas maiores de idade***\n\n");
	
	printf("Informe 20 idades:\n");

	maior = 0;
	for(i = 1; i <= 20; i ++){
			scanf("%d",&idade);
			if(idade >= 18){
				maior = maior + 1;
				
			}
	}
	
	system("cls");
	printf("*RESULTADO*\n\n");
	printf("Pessoas maiores de idades: %d\n\n",maior);
	
	system("pause");
	return 0;
}
