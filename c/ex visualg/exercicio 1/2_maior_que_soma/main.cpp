#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	float n1, n2, n3, total;
	
	printf("Informe o primeiro n�mero\n");
	scanf("%f",&n1);
	printf("Informe o segundo n�mero\n");
	scanf("%f",&n2);
	printf("Informe o terceiro n�mero\n");
	scanf("%f",&n3);
	
	total = n2 + n3;
	
	if(total < n1){
		printf("\n\n%f � maior que %f",n1,total);
  	}
	else{
		printf("\n\n%f � menor que %f",n1,total);
    }

	
	system("pause");
	return 0;
}
