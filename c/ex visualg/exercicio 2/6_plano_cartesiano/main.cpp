#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int x, y;
	
	printf("***Plano Cartesiano***\n\n");
	
	printf("Informe o valor de x:\n");
	scanf("%d",&x);
	printf("Informe o valor de y:\n");
	scanf("%d",&y);
	
	printf("\n\n*RESULTADO**\n");
	
	if((x > 0) && (y > 0)){
		printf("\n\nEssa cordenada está no primeiro quadrante\n\n");
	}
		if((x > 0) && (y < 0)){
		printf("\n\nEssa cordenada está no segundo quadrante\n\n");
	}
		if((x < 0) && (y < 0)){
		printf("\n\nEssa cordenada está no terceiro quadrante\n\n");
	}
		if((x < 0) && (y > 0)){
		printf("\n\nEssa cordenada está no quarto quadrante\n\n");
	}
	

	system("pause");
	return 0;
}
