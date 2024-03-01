#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int idadem1,idadem2,idadeh1,idadeh2;
	int hvelho,hnovo,mnovo,mvelho;
	int soma,produto;
	
	printf("***Idade***\n\n");
	
	printf("*Homens:*\n");
	printf("Informe a idade do primeiro homen: ");
	scanf("%d",&idadeh1);
	printf("Informe a idade do segundo homen: ");
	scanf("%d",&idadeh2);
	
	system("cls");
	
	printf("*Mulheres:*\n");
	printf("Informe a idade da primeira mulher: ");
	scanf("%d",&idadem1);
	printf("Informe a idade da segunda mulher: ");
	scanf("%d",&idadem2);
	
	//Homen
	if(idadeh1 > idadeh2){
	hvelho = idadeh1;
	hnovo = idadeh2;
	}
	else{
		if(idadeh2 > idadeh1){
		hvelho = idadeh2;
		hnovo = idadeh1;
		}
	}
	
	//mulher
	if(idadem1 > idadem2){
	mvelho = idadem1;
	mnovo = idadem2;
	}
	else{
		if(idadem2 > idadem1){
		mvelho = idadem2;
		mnovo = idadem1;
		}
	}
	
	soma = hvelho + mnovo;
	produto = hnovo * mvelho;
	
	system("cls");
	
	printf("\n*RESULTADO*\n\n");
	printf("Soma: %d\n",soma);
	printf("Produto: %d\n\n",produto);
	
	system("pause");
	return 0;
}
