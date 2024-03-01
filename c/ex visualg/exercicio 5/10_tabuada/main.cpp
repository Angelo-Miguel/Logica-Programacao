#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int n,i,j;
	while(i > -1){
	printf("***Tabuada***\n\n");
	
	printf("Informe um número: ");
	scanf("%d",&n);
    system("cls");
	
	//for(j = 1; j <= 10; j++){
    printf("\n\nTabuado do %d\n\n",n);
	
		for(i = 1; i <= 10; i ++){
			printf("%d X %d = %d\n",n,i,i * n);
	
		}
//	}
	
	system("pause");
	system("cls");
	}
	return 0;
}
