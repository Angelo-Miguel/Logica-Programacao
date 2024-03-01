#include <iostream>
#include <unistd.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int i;
	
	for(i = 10; i >= 0; i --){
		printf("   %d  ",i);
		sleep(1); 
		system("cls");
	}
	printf("\n\n\aBomb Exploded\n\n");
	
	system("pause");
	return 0;
}
