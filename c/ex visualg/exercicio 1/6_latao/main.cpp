#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	float latao, cobre, zinco;
	
	printf("**Quantidade de latão**\n");
	
	printf("Informe a quantidade de latão requerida\n");
	scanf("%f",&latao);
	
	cobre = latao * 0.70;
	zinco = latao * 0.30;
	
	printf("\n\n*RESULTADO*\n");
	printf("Será necessário de %f kg de cobre\n",cobre);
	printf("Será necessário de %f kg de zinco\n",zinco);
	
	
	

	
	system("pause");
	return 0;
}
