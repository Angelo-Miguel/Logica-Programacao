#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


/*
Tipo 1 – ervas daninhas R$ 50,00 por acre;
Tipo 2 – gafanhotos R$ 100,00 por acre;
Tipo 3 – broca R$ 150,00 por acre;
Tipo 4 – todos acima R$ 250,00 por acre*/
int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int fator, area, total, desconto;
	
	printf("***Área pulverizada***\n\n");
	
	printf("Tipo 1 – ervas daninhas\n");
	printf("Tipo 2 – gafanhotos\n");
	printf("Tipo 3 – broca\n");
	printf("Tipo 4 – todos acima\n");
	printf("_______________________\n");
	printf("Infome qual deseja:    (1 a 4)\n");
	scanf("%d",&fator);
	printf("Informe a área a ser pulverizada:\n");
	scanf("%d",&area);	
	
	if(area < 1000){
		if(fator == 1){
		total = area * 50;
		}
		else{
			if(fator == 2){
			total = area *100;
			}
			else{
				if(fator == 3){
				total = area * 150;
				}
				else{
					if(fator == 4){
					total = area * 250;
					}
				}
			}
		}
	}
	
	if(area >= 1000){
		if(fator == 1){
		total = (area * 50) - ((area * 50) * 0.05); 
		}
		else{
			if(fator == 2){
			total = (area *100) - ((area * 100) * 0.05);
			}
			else{
				if(fator == 3){
				total = (area * 150) - ((area * 150) * 0.05);
				}
				else{
					if(fator == 4){
					total = (area * 250) - ((area * 250) * 0.05);
					}
				}
			}
		}
	}
	
	if(total > 750){
		desconto = total  - (total * 0.10);
	}
	
	printf("\n\n**RESULTADO**\n\n");
	printf("O total foi de R$%d\n\n\n",desconto);
	
	system("pause");
	return 0;
}
