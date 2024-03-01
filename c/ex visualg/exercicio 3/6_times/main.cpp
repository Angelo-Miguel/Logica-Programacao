#include <iostream>
#include <locale.h>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	char time1[10], time2[10];
	int goal1, goal2;
	
	printf("**Goals***\n\n");
	
	printf("*Time 1*\n");
	printf("Informe o nome do primeiro time: ");
	scanf("%s",&time1);
	printf("Informe a quantidade de goasl: ");
	scanf("%d",&goal1);
	
	printf("\n*Time 2*\n");
	printf("Informe o nome do segundo time: ");
	scanf("%s",&time2);
	printf("Informe a quantidade de goasl: ");
	scanf("%d",&goal2);
	
	system("cls");
	
	printf("\n*RESULTADO*\n\n");
	if(goal1 > goal2){
		printf("O time %s ganhou\n\n",time1);
	}
	else{
		if(goal2 > goal1){		
		printf("O time %s ganhou\n\n",time2);
		}
		else{
			if(goal1 == goal2){
				printf("%s está EMPATADO com o %s\n\n",time1, time2);
			}
		}
	}
	
	system("pause");
	return 0;
}
