#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, ) or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	
	float velomax, velomoto, total;
	
	printf("**Multa**\n\n");
	printf("Informe a velocidade do motorista\n");
	scanf("%f",&velomoto);
	printf("Infome a velocidade maxima\n");
	scanf("%f",&velomax);
	
	total = velomoto - velomax;
	
	printf("\nEle está a %f Km/h acima da velocidade permitida\n",total);
	
	if(total <= 10){
		printf("\nO valor da multa é de 50R$\n");
	}
	else{
		if(total <= 30){
			printf("\nO valor da multa é de 100R$\n ");
		}
		else{
		if(total > 31){
		printf("\nO valor da multa é de 200R$\n");
		}
		}
	}
	
	
	
	
	system("pause");
	return 0;
}
