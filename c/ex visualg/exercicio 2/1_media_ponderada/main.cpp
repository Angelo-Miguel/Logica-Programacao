#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int n1,n2,n3;
	int pri, seg, ter;
	float media;
	
	printf("**M�dia ponderada**\n\n");
	
	printf("Informe o primeiro valor\n");
	scanf("%d",&n1);
	printf("Informe o segundo valor\n");
	scanf("%d",&n2);
	printf("Informe o terceiro valor\n");
	scanf("%d",&n3);
	
	
	if((n1 < n2) and (n1 < n3)){
		pri = n1;
	}
		else{
			if((n2 < n1) and (n2 < n3)){
				pri = n2;
			}
				else{
					if((n3 < n1) and (n3 < n2)){
						pri = n3;
				 	}
				}		
			}
	if((n1 > n2) and (n1 > n3)){
		ter = n1;
	}
		else{
			if((n2 > n1) and (n2 > n3)){
				ter = n2;
			}
				else{
					if((n3 > n1) and (n3 >n2)){
						ter = n3;
				 	}
				}		
			}
	if((n1 > pri) and (n1 < ter)){
		seg = n1;
	}
		else{
			if((n2> pri) and (n2 < ter)){
				seg = n2;
			}
				else{
					if((n3 > pri) and (n3 < ter)){
						seg = n3;
				 	}
				}		
			}
	media = ((ter * 5) + (seg * 2.5) + (pri * 2.5)) / 10;
	
	printf("\n\n**RESULTADO**\n\n");	
	printf("A media � �: %f\n",media);
	
	 system("pause");
	return 0;
}
