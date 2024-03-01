#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int hora, sal, horassemana, horaextra, ajuste, ajustetotal, salariototal;
	
	printf("***Horas extras***\n\n");
	
	printf("Informe a quantidade de horas trabalhadas:\n");
	scanf("%d",&hora);
	printf("Informe seu salario hora:\n");
	scanf("%d",&sal);
	
	horassemana = hora / 4;
	
	if(horassemana > 40){
		horaextra = horassemana - 40;
		ajuste = sal / 2;
		ajustetotal  = ((ajuste + sal) * horaextra);
	}
		salariototal = ajustetotal + ((sal *8) * 22);
		
		printf("O sálario total é de %d\n",salariototal);
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
