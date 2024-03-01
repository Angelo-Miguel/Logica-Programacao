#include <iostream>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int n1, n2, n3; 
	
	printf("Informe o primeiro valor:\n");
	scanf("%d", &n1);
	printf("Informe o segundo valor:\n");
	scanf("%d", &n2);
	printf("Informe o terceiro valor:\n");
	scanf("%d", &n3);
	
	if((n1 == n2) && (n1 == n3)){
		printf("O tiângulo é equilatero\n");
		}
		else{
			if((n1 == n2) && (n2 != n3)){
			printf("O tiângulo é isoceles\n");
			}
			else{
				if((n1 == n2) && (n1 != n3)){
				printf("O tiângulo é isoceles\n");
				}
				else{
					if((n1 == n3) && (n1 != n2)){
					printf("O tiângulo é isoceles\n");
					}
					else{
						if((n2 == n3) && (n1 != n3)){
						printf("O tiângulo é isoceles\n");
						}
						else{
							if((n2 == n3) && (n1 != n2)){
							printf("O tiângulo é isoceles\n");
							}
							else{
								if((n1 != n2) && (n1 != n3)){
								printf("O tiângulo é escaleno\n");
								}
							}
						}
					}
				}
			}
	}
	system("pause");
	return 0;
}
