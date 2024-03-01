#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"portuguese");
	

	float i,n, total;
	
	printf("**Soma***\n\n");
	
	printf("Informe um número: ");
	scanf("%f",&n);
	
	total = 0;
	
	for(i = 1; i <= n; i ++){
	
		total = total + (1 / i);
		//printf("%f \n",(1 / i));
	}

	printf("A soma é %f \n",total);
	
	system("pause");
	return 0;
}
