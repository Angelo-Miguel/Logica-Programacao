#include <iostream>
#include <locale.h>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int senha, cons;
	
	cons = 1234;
	
	printf("**SENHA**\n");
	printf("\Informe a senha:");
	scanf("%d",&senha);
	
	
	if(senha == cons){
		printf("\nSenha correta\n");
	}	
	else{
		printf("\nSenha incorreta\n");
	}
	system("pause");
	return 0;
}
