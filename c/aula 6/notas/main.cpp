#include <iostream>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	float nota[4];
	int i;
	float media,soma;
	
	printf("**Médias**\n\n");
	
	for(i=0; i<4 ;i++){
		printf("Informe a nota do %dº bimestre: ",i+1);
		scanf("%f",&nota[i]);
	}
	soma = 0;
	for(i = 0; i< 4;i++){
		soma += nota[i];
	}
	media = soma / i;
	printf("\n\nRESULTADO:\n");
	printf("Média final: %.1f",media);
	
	getch();
	return 0;
}
