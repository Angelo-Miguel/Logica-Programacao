#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*1) Op��o: a vista com 10% de desconto
 2) Op��o: em duas vezes (pre�o da etiqueta)
 3) Op��o: de 3 at� 10 vezes com 3% de juros ao m�s (somente para compras
acima de R$ 100,00).
*/

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	float gasto,total,valorparcelas;
	int opcao,parcelas;
	
	while(gasto > -1000){
		system("cls");
	
	printf("***Op��es de pagamentos***\n\n");

	printf("Informe o valor gasto: ");
	scanf("%f",&gasto);
	system("cls");
		
	printf("***Op��es de pagamento***\n\n");
	
	printf("1) Op��o: a vista com 10%% de desconto\n");
	printf("2) Op��o: em duas vezes\n");
	if(gasto > 100){
		printf("3) Op��o: de 3 at� 10 vezes com 3%% de juros ao m�s\n\n");
	}
	
	scanf("%d",&opcao);
	system("cls");
	
	if(opcao == 1){
		printf("Op��o 1: a vista com 10%% de desconto\n");
		total = gasto -(gasto * 0.10);
		printf("\nValor gasto: %f\n",gasto);
		printf("Desconto: %f\n",gasto * 0.10);
		printf("Total: %f\n\n",total);
	}		
	else{
		if(opcao == 2){
			printf("Op��o 2: em duas vezes\n");
			total = gasto / 2;
			printf("\nValor gasto: %f\n",gasto);
			printf("parcelas: 2\n");
			printf("Total: %f\n\n",total);
		}
		else{
			if((opcao == 3) and (gasto > 100)){
				parcelas = 0;
				
				while(parcelas < 3){
					printf("Informe a quantidade de parcelas: ");
					scanf("%d",&parcelas);
					
					while(parcelas > 10){
						printf("Informe a quantidade de parcelas: ");
						scanf("%d",&parcelas);
					}
				}
				
				system("cls");
				printf("Op��o 3: de 3 at� 10 vezes com 3%% de juros ao m�s\n\n");
				valorparcelas = gasto / parcelas;
				total = valorparcelas + (valorparcelas * 0.03);
				
				printf("\nValor gasto: %f\n",gasto);
				printf("parcelas: %d\n",parcelas);
				printf("Juros: %f\n",valorparcelas * 0.03);
				printf("Total: %f\n\n",total);
				
				printf("Todas as parcelas: %f\n\n",total *parcelas);
			}
			else{
				printf("Opc�o invalida");
			}
		}
	}
		
	printf("\n\n");
	system("pause");
	}
	return 0;
}
