#include <iostream>
#include <locale.h>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	system("color 2");

	while(1 == 1){
		
		int i,j,k;
		int figura = 0;
		int base,altura;
		char caracter[20];
		int n,total = 1,l,p;
		
		while((figura != 1) && (figura != 2) && (figura != 3) && (figura != 4) && (figura != 5)){
			printf("***Formas geometricas***\n\n");
			printf("1 - Retângulo\n");
			printf("2 - Triângulo\n");
			printf("3 - Losângulo\n");
			printf("4 - Quadrado\n");
			printf("5 - Quadrado borda\n");
			printf("_____________\n");
			printf("Qual figura deseja?\n");
			scanf("%d",&figura);	
			system("cls");
		}
		
		switch(figura){
		
			case 1:
				printf("***Retângulo***\n\n");
				printf("Informe o caracter: ");
				scanf("%s",&caracter);
				printf("Informe a base: ");
				scanf("%d",&base);
				printf("Informe a altuta: ");
				scanf("%d",&altura);
				
				for(i = 1; i <= altura; i ++){
					printf("\n");
					for(j = 1; j<= base; j ++){
						printf("%s ",caracter);
					}
				}
				printf("\n\n");			
			break;
			
			case 2:
				printf("***Triângulo***\n\n");
				printf("Informe o caracter: ");
				scanf("%s",&caracter);
				system("cls");
				do{
					printf("***Triângulo***\n\n");
					printf("Informe uma base impar: ");
					scanf("%d",&n);
					system("cls");
				}while(n % 2 == 0);
				
				printf("***Triângulo***\n\n");
				base = n / 2 + 1;
				altura = n / 2 + 1;
				while(total <= n){
					for(i = 1;i <= base;i ++){
						altura--;
							printf("  ");
						for( l = 1; l <= altura; l++){
							printf("  ");
						}
						for(j = 1; j<= total; j ++){
							printf("%s ",caracter);
						}
						printf("\n");
						total+=2;
					}
				}
				printf("\n\n");	
			break;
			
			case 3:
				

				printf("***Losângulo***\n\n");
				printf("Informe o caracter: ");
				scanf("%s",&caracter);
				system("cls");
				do{
					printf("***Losângulo***\n\n");
					printf("Informe uma base impar: ");
					scanf("%d",&n);
					system("cls");
				}while(n % 2 == 0);
				
				printf("***Losângulo***\n\n");
				base = n / 2 + 1;
				altura = n / 2 + 1;
				while(total <= n){
					for(i = 1;i <= base;i ++){
						altura--;
							printf(" ");
						for( l = 1; l <= altura; l++){
							printf(" ");
						}
						for(j = 1; j<= total; j ++){
							printf("%s",caracter);
						}
						printf("\n");
						total+=2;
					}
				}	
					p = 0;
					total = n-2;
				for(i = 1;i <= n / 2;i ++){
					p++;
					printf("  ");
					for( l = 2; l <= p; l++){
						printf(" ");
					}
					for(j = 1; j<= total; j ++){
						printf("%s",caracter);
					}
					printf("\n");
					total-=2;
				}
				printf("\n\n");
			break;
			
			case 4:
				printf("***Quadrado***\n\n");
				printf("Informe um caracter: ");
				scanf("%s",&caracter);
				printf("Informe um valor: ");
				scanf("%d",&base);
				printf("\n\n");
			
				for(i = 1; i <= base; i ++){
					printf("\n");
					for(j = 1; j<= base; j ++){
						printf("%s ",caracter);
					}
				}
				printf("\n\n");	
			break;
			
			case 5:
				printf("***Quadrado borda***\n\n");
				printf("Informe um caracter: ");
				scanf("%s",&caracter);
				printf("Informe uma altura: ");
				scanf("%d",&altura);
				system("cls");
				printf("***Quadrado borda***\n\n");
				for(i = 1;i <= altura; i ++){
					printf("%s ",caracter);	
				}
				for(j = 1;j <= altura-2; j++){
					printf("\n%s",caracter);
					printf(" ");
					for(k = 1;k <= altura-2; k++){
						printf("  ");
					}
					printf("%s",caracter);
				}
				printf("\n");
				for(i = 1;i <= altura; i ++){
					printf("%s ",caracter);
				}
				printf("\n\n");	
			break;
		}
			
		system("pause");
		system("cls");
	}
	return 0;
}
