#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int dia;
	
	
	printf("***Dias da semana***\n\n");
	
	printf("Informe um dia:       (1 a 7)\n");
	scanf("%d",&dia);
	
	if(dia == 1){
	printf("Hoje � Domingo\n");
	}
	else{
		if(dia == 2){
		printf("Hoje � Segunda-feira\n");
		}
		else{
			if(dia == 3){
			printf("Hoje � Ter�a-feira\n");
			}
			else{
				if(dia == 4){
				printf("Hoje � Quarta-feira\n");
				}
				else{
					if(dia == 5){
					printf("Hoje � Quinta-feira\n");
					}
					else{
						if(dia == 6){
						printf("Hoje � Sexta-feira\n");
						}
						else{
							if(dia == 7){
							printf("Hoje � Sabado\n");
							}
						}
					}
				}
			}
		}
	}
	
	if((dia != 1) && (dia != 2) && (dia != 3) && (dia != 4) && (dia != 5) && (dia != 6) && (dia != 7)){
		printf("Erro    (Informe um n�mero de 1 a 7)");
	}
	system("pause");
	return 0;
}
