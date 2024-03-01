#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"POrtuguese");
	
	int dia;
	while(1 == 1){
	
		printf("**Dia da semana\n\n");
		
		printf("Informe o dia da semana (1 a 7): ");
		scanf("%d",&dia);
		
		switch(dia){
			case 1:
				printf("\n\nHoje é Domingo");
			break;
			
			case 2:
				printf("\n\nHoje é Segunda-feira");
			break;
			
			case 3:
				printf("\n\nHoje é Terça-feira");
			break;
			
			case 4:
				printf("\n\nHoje é Quarta-feira");
			break;
			
			case 5:
				printf("\n\nHoje é Quinta-feira");
			break;
			
			case 6:
				printf("\n\nHoje é Sexta-feira");
			break;
			
			case 7:
				printf("\n\nHoje é Sábado");
			break;
			
			default:
				printf("\n\nDia inválido");
		}
		
		printf("\n\n");
		
		system("pause");
		system("cls");
	}
	return 0;
}
