#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	while(1 == 1){
	
		int n1,n2,total,fator;
		int erro404 = 0;
		
		do{
			erro404 = 0;
			printf("**Swithed case**\n\n");
			
			printf("1 - Soma\n");
			printf("2 - Subitra��o\n");
			printf("3 - Multiplica��o\n");
			printf("4 - Divis�o\n");
			printf("_________________\n");
			printf("Informe qual opera��o deseja: ");
			scanf("%d",&fator);
			system("cls");
			
			switch(fator){
				case(1):
					printf("**Soma**\n\n");
					printf("Informe o primeiro n�mero: ");
					scanf("%d",&n1);
					printf("Informe o segundo n�mero: ");
					scanf("%d",&n2);
					
					total = n1 + n2;
					system("cls");
					printf("RESULTADO:\n\n");
					printf("Soma: %d\n\n",total);
				break;
				
				case(2):
					printf("**Subitra��o**\n\n");
					printf("Informe o primeiro n�mero: ");
					scanf("%d",&n1);
					printf("Informe o segundo n�mero: ");
					scanf("%d",&n2);
					
					total = n1 - n2;
					system("cls");
					printf("RESULTADO:\n\n");
					printf("Subitra��o: %d\n\n",total);
				break;
				
				case(3):
					printf("**Multiplica��o**\n\n");
					printf("Informe o primeiro n�mero: ");
					scanf("%d",&n1);
					printf("Informe o segundo n�mero: ");
					scanf("%d",&n2);
					
					total = n1 * n2;
					system("cls");
					printf("RESULTADO:\n\n");
					printf("Multiplica��o: %d\n\n",total);
				break;
				
				case(4):
					printf("**Divis�o**\n\n");
					printf("Informe o primeiro n�mero: ");
					scanf("%d",&n1);
					printf("Informe o segundo n�mero: ");
					scanf("%d",&n2);
					
					total = n1 / n2;
					system("cls");
					printf("RESULTADO:\n\n");
					printf("Divis�o: %d\n\n",total);
				break;
				
				default:
					printf("N�mero inv�lido\n");
					printf("ERRO 404\n\n");
					erro404 = 1;			
			}		
			system("pause");
			system("cls");
		}while(erro404 == 1);
	}
	
	system("pause");
	return 0;
}
