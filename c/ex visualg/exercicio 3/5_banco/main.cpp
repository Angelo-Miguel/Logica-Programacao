#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	float saldo, saldoatual, credito, debito;
	int conta;
	
	printf("***Banco***\n\n");
	
	printf("Informe número da conta: ");
	scanf("%d",&conta);
	printf("Informe o saldo na conta: ");
	scanf("%f",&saldo);
	printf("Informe o debíto: ");
	scanf("%f",&debito);
	printf("Informe o crédito: ");
	scanf("%f",&credito);
	
	saldoatual = saldo - debito + credito;
	
	system("cls");
	printf("*RESULTADO*\n\n");
	
	if(saldoatual > 0){
	printf("Nº da conta: %d\n",conta);
	printf("Saldo atual: %f\n",saldoatual);
	printf("Saldo positivo\n\n");
	}
	else{
		if(saldoatual <= 0){
		printf("Nº da conta: %d\n",conta);
		printf("Saldo atual: %f\n",saldoatual);
		printf("Saldo negativo\n\n");
		}
	}
	
	system("pause");
	return 0;
}
