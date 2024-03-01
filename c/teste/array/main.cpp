#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n[10][10];
	int i,j;
	
	for(i=0;i<10;i++){
		printf("\n\nLinha %d\n",i+1);
		for(j=0;j<10;j++){
			printf("%d- ",j+1);
			scanf("%d",n[i][j]);
		}
	}
	
	
	
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(n[i][j] == 1){
				printf("***");
			}
			else{
				printf("---");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
