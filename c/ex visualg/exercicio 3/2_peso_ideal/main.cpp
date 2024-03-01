#include <iostream>
#include <locale.h>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	char sexo;
	char nome[61];

	float altura, peso;
	
	printf("***Peso Ideal***\n\n");
	
	
    printf("Informe seu nome:\n");
    scanf("%s",&nome);
    printf("Informe seu sexo (f ou m):\n");
    scanf(" %c",&sexo);
	printf("Informe sua altura:\n");
	scanf("%f",&altura);
	printf("\n\n*RESULTADO*\n\n");
	
	if(sexo == 'm'){
	peso = ( 72.2 * altura) - 58;
	printf("Nome: %s\n",nome);
	printf("Sexo: %c\n",sexo);
	printf("Seu peso ideal é: %f\n",peso);
	}
	else{
		if(sexo == 'f'){
		peso = ( 62.1 * altura) - 44.7;
		printf("Nome: %s\n",nome);
		printf("Sexo: %c\n",sexo);
		printf("Seu peso ideal é: %f\n",peso);
		}
		else{
			printf("ERRO");
		}
	}
	system("pause");
	return 0;
}
