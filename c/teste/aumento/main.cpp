#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*9 Escreva um programa que leia os dados de um
funcionário e que aplique um aumento sobre o seu
salário, sendo que a empresa definiu um aumento de
10% para quem possuir mais de cinco anos de casa e for
casado, para os demais o aumento é de 8%. Esse aumento
deve ser calculado por uma função. Dados de entrada:
salário bruto, quantidades de anos na empresa, e estado
civil (C, c, S, s). Dados de saída: taxa do aumento, salário
inicial, e salário com aumento do funcionário.*/
int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int bruto,anos;
	float salario;
	char l;
	
	printf("***Aumento de salário***\n\n");
	
	printf("Informe o estado civil \"C ou S\": ");
	scanf("%c",&l);
	printf("Informe o salário bruto: ");
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
	
	printf("Salário inicial: %d\n",bruto);
	printf("Salário final: %f\n\n",salario);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
