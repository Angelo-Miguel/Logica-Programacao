#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int n1, n2, n3, n4, n5;
	
	printf("***Exames***\n\n");
	
	printf("Informe a primeira nota:\n");
	scanf("%d",&n1);
	
	printf("Informe a segunda nota:\n");
	scanf("%d",&n2);
	
	printf("Informe a terceira nota:\n");
	scanf("%d",&n3);
	
	printf("Informe a quarta nota:\n");
	scanf("%d",&n4);
	
	printf("Informe a quinta nota:\n");
	scanf("%d",&n5);
	
	if((n1 >= 70) && (n2 >= 70) && (n3 >= 70) && (n4 >= 70) && (n5 >= 70)){
		printf("O aluno passou em todos os exames\n");
	}
	else{
		if((n1 >= 70) && (n2 >= 70) && (n3 < 70) && (n4 >= 70) && (n5 < 70)){
		printf("O aluno passou nos exames I, II e IV\n");
		}
		else{
			if((n1 >= 70) && (n2 >= 70) && (n3 >= 70) && (n4 >= 70) && (n5 < 70)){
			printf("O aluno passou nos exames I, II, III e IV\n");
			}
			else{
				printf("O aluno foi reprovado em outras situações\n");
			}
		}
	}
	

	system("pause");
	return 0;
}
