#include <iostream>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int n[10]={1,2,3,4,5,2,7,7,9,10};
	int i,j;
	int n1 = 0,n2 = 0,n3 = 0,n4 = 0,n5 = 0,n6 = 0,n7 = 0,n8 = 0,n9 = 0,n10 = 0;

	printf("***Números na arrays iguais***\n\n");
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if((n[i] == n[j]) && (i != j)){
				if(n[i] == 1){
					n1++;
				}
				else if(n[i] == 2){
					n2++;
				}
				else if(n[i] == 3){
					n3++;
				}
				else if(n[i] == 4){
					n4++;
				}
				else if(n[i] == 5){
					n5++;
				}
				else if(n[i] == 6){
					n6++;
				}
				else if(n[i] == 7){
					n7++;
				}
				else if(n[i] == 8){
					n8++;
				}
				else if(n[i] == 9){
					n9++;
				}
				else if(n[i] == 10){
					n10++;
				}
				
			}
		}
	}
	
	if(n1 >= 1){
		printf("Existem números 1 repetidos\n");
	}
	if(n2 >= 1){
		printf("Existem números 2 repetidos\n");
	}
	if(n3 >= 1){
		printf("Existem números 3 repetidos\n");
	}
	if(n4 >= 1){
		printf("Existem números 4 repetidos\n");
	}
	if(n5 >= 1){
		printf("Existem números 5 repetidos\n");
	}
	if(n6 >= 1){
		printf("Existem números 6 repetidos\n");
	}
	if(n7 >= 1){
		printf("Existem números 7 repetidos\n");
	}
	if(n8 >= 1){
		printf("Existem números 8 repetidos\n");
	}
	if(n9 >= 1){
		printf("Existem números 9 repetidos\n");
	}
	if(n10 >= 1){
		printf("Existem números 10 repetidos\n");
	}
	
	
	
	getch();
	return 0;
}
