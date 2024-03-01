#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	float media, maximo, minimo, atual;
	
	printf("***Estoque***\n\n");
	
	printf("Informe o estoque atual: ");
	scanf("%f",&atual);
	printf("\nInforme o estoque maximo: ");
	scanf("%f",&maximo);
	printf("\nInforme o estoque minimo: ");
	scanf("%f",&minimo);
	
	system("cls"); //limpar tela
	
	media = (maximo + minimo) /2;
	
	printf("\n\n*RESULTADO**\n\n");
	printf("O estoque médio é de %f\n",media);
	if(atual >= media){
	printf("Não efetuar a compra");
	}
	else{
		if(atual < media){
		printf("Efetuar a compra\n");
		}
	}
	system("pause");
	return 0;
}
