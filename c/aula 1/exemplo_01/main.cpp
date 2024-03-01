#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	
	int valor, valor2;
	printf("Exemplo de leitura\n");
	printf("Informe um valor:\n");
	scanf("%d",&valor);
	printf("Informe um segundo valor:\n");
	scanf("%d",&valor2);
	printf("\nO primeiro valor é %d e o segundo valor é %d \n\n", valor, valor2 );

	
	if(valor < 100){
		printf("O valor é menor que 100[%d] \n", valor);
	}
	else{
		printf("O valor é maior que 100[%d] \n", valor);
	}
		if(valor2 < 100){
		printf("O segundo valor é menor que 100[%d] \n", valor2);
	}
	else{
		printf("O segundo valor é maior que 100[%d] \n\n", valor2);
	}
	
	
	system("pause");
	return 0;
}
