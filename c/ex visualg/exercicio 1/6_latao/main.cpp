#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	float latao, cobre, zinco;
	
	printf("**Quantidade de lat�o**\n");
	
	printf("Informe a quantidade de lat�o requerida\n");
	scanf("%f",&latao);
	
	cobre = latao * 0.70;
	zinco = latao * 0.30;
	
	printf("\n\n*RESULTADO*\n");
	printf("Ser� necess�rio de %f kg de cobre\n",cobre);
	printf("Ser� necess�rio de %f kg de zinco\n",zinco);
	
	
	

	
	system("pause");
	return 0;
}
