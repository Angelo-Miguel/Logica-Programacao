#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*9 Escreva um programa que leia os dados de um
funcion�rio e que aplique um aumento sobre o seu
sal�rio, sendo que a empresa definiu um aumento de
10% para quem possuir mais de cinco anos de casa e for
casado, para os demais o aumento � de 8%. Esse aumento
deve ser calculado por uma fun��o. Dados de entrada:
sal�rio bruto, quantidades de anos na empresa, e estado
civil (C, c, S, s). Dados de sa�da: taxa do aumento, sal�rio
inicial, e sal�rio com aumento do funcion�rio.*/
int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int bruto,anos;
	float salario;
	char l;
	
	printf("***Aumento de sal�rio***\n\n");
	
	printf("Informe o estado civil \"C ou S\": ");
	scanf("%c",&l);
	printf("Informe o sal�rio bruto: ");
	scanf("%d",&bruto);
	printf("Informe a quantidade de anos na empresa: ");
	scanf("%d",&anos);
	
	system("cls");
	printf("\n**RESULTADO**\n\n"); 
	
	if((anos >= 5) and (l == 'C') or (l == 'c')){
		salario = bruto + (bruto * 0.10);
		printf("Taxa: 10%\n");
	}
	else{
		salario = bruto + (bruto * 0.08);
		printf("Taxa:8%\n");
	}
	
	printf("Sal�rio inicial: %d\n",bruto);
	printf("Sal�rio final: %f\n\n",salario);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
