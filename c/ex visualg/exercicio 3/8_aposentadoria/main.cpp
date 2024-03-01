#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int codigo,ano,anoentrada,idade,trabalho,aposentadoria;
	
	printf("***Aposentadoria***\n\n");
	
	printf("Informe o codigo do empregado: ");
	scanf("%d",&codigo);
	printf("Informe o ano de nascimento: ");
	scanf("%d",&ano);
	printf("Informe o ano de entrada na emprese: ");
	scanf("%d",&anoentrada);
	
	idade = 2022 - ano;
	trabalho = 2022 - anoentrada;
	
	if(idade >= 65){
	aposentadoria = 1;
	}
	else{
		if(trabalho >= 30){
		aposentadoria = 1;
		}
		else{
			if((idade >= 60) && (trabalho >= 25)){
					aposentadoria = 1;
			}
		}
	}

	system("cls");
	
	printf("*Resultado*\n\n");
	printf("Idade: %d\n",idade);
	printf("Tempo de trabalho: %d\n",trabalho);
	if(aposentadoria == 1){
		printf("Requer aposentadoria\n\n");
	}
	else{
		if(aposentadoria != 1){
		printf("Não requer aposentadoria\n\n");
		}
	}
	
	system("pause");
	return 0;
}
