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
	printf("Hoje é Domingo\n");
	}
	else{
		if(dia == 2){
		printf("Hoje é Segunda-feira\n");
		}
		else{
			if(dia == 3){
			printf("Hoje é Terça-feira\n");
			}
			else{
				if(dia == 4){
				printf("Hoje é Quarta-feira\n");
				}
				else{
					if(dia == 5){
					printf("Hoje é Quinta-feira\n");
					}
					else{
						if(dia == 6){
						printf("Hoje é Sexta-feira\n");
						}
						else{
							if(dia == 7){
							printf("Hoje é Sabado\n");
							}
						}
					}
				}
			}
		}
	}
	
	if((dia != 1) && (dia != 2) && (dia != 3) && (dia != 4) && (dia != 5) && (dia != 6) && (dia != 7)){
		printf("Erro    (Informe um número de 1 a 7)");
	}
	system("pause");
	return 0;
}
