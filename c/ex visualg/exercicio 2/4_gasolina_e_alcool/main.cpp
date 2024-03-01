#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int fator;
	float litro, total;
	
	printf("***Gasolina e alcool***\n\n");
	printf("alcool     -   1\n");
	printf("Gasolina   -   2\n");
	printf("________________\n");
	printf("Oque deseja?\n");
	scanf("%d",&fator);
	printf("Informe a quantidade de litros:\n");
	scanf("%f",&litro);
	
	if((fator == 1) && (litro <= 25)){
	total = litro * 3.528;
	printf("O valor do alcool é de %f",total);
	}
	else{
		if((fator == 1 ) && (litro > 25)){
			total = litro * 3.456;
			printf("O valor do alcool é de %f",total);
		}
	}
		if((fator == 2) && (litro <= 25)){
	total = litro * 4.7336;
	printf("O valor da gasolina é de %f",total);
	}
	else{
		if((fator == 2 ) && (litro > 25)){
			total = litro * 4.636;
			printf("O valor do gasolina é de %f",total);
		}
	}
	
	
	
	
	
	
	system("pause");
	return 0;
}
