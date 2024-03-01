#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	float maior = 0,menor = 999,altura;
	
	printf("***Altura 15 pessoas***\n\n");
	for(i = 0; i <15;i++){
		printf("Informe a altura da %dº pessoa:",i+1);
		scanf("%f",&altura);
		if(altura > maior){
			maior = altura;
		}
		if(altura < menor){
			menor = altura;
		}
	}
	
	printf("\n\nRESULTADO\n");
	printf("Maior altura: %.2f\n",maior);
	printf("Menor altura: %.2f\n",menor);
	
	
	
	
	system("pause");
	return 0;
}
