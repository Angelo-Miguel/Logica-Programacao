#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	char letra;
	
	printf("** Vogal ou consoante**\n\n");
	
	printf("Informe um letra\n");
	scanf("%c",&letra);
	
	if((letra == 'a') or (letra == 'e') or (letra == 'i') or (letra == 'o') or (letra == 'u') or (letra == 'A') or (letra == 'E') or (letra == 'I') or (letra == 'O') or (letra == 'U')){
		printf("\n\nA letra %c é uma vogal\n",letra);
	}
	else{
	printf("\n\nA letra %c é uma consoante\n",letra);	
	}
	
	system("pause");
	return 0;
}
