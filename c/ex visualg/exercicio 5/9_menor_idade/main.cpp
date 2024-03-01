#include <iostream>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	system("color 5");
	
	int i,idade,menoridade = 9999;
	char nome[40], menornome[40];
	
	printf("***Menor idade***\n\n");

	for(i = 1; i <= 3; i ++){
		printf("%dº pessoa:\n\n",i);
		printf("Informe um nome: ");
		scanf("%s",&nome);
		printf("Informe a idade:");
		scanf("%d",&idade);
		system("cls");
		
		if(idade < menoridade){
			menoridade = idade;
			strcpy(menornome,nome);
		}
	}
	
	system("cls");
	printf("*RESULTADO*\n\n");
	printf("Nome: %s\n",menornome);
	printf("Idade: %d\n\n",menoridade);

	system("pause");
	return 0;
}
