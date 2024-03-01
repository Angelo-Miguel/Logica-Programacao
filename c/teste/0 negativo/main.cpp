#include <iostream>
#include <conio.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int vet[40];
	int i;
	
	printf("***Vetor negativo***\n\n");
	for(i=0;i<40;i++){
		printf("Informe o %dº vetor: ",i+1);
		scanf("%d",&vet[i]);
	}
	for(i=0;i<40;i++){
		if(vet[i] < 0){
			vet[i] = 0;
		}
	}
	for(i=0;i<40;i++){
		printf("%dº- %d\n",i+1,vet[i]);
	}
	
	getch();
	return 0;
}
