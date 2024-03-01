#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int n1,n2,n3;
	int pri, seg, ter;
	
	printf("**Ordem cresente**\n\n"),
	
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
	if((n1 > pri) and ((n1 < n2) or (n1 < n3))){
		seg = n1;
	}
		else{
			if((n2 > pri) and ((n2 < n3) or (n2 < n1))){
				seg = n2;
			}
				else{
					if((n3 > pri) and ((n3 < n2) or (n3 < n1))){
						seg = n3;
				 	}
				}		
			}
	if((n1 > pri) and (n1 > seg)){
		ter = n1;
	}
		else{
			if((n2> pri) and (n2 > seg)){
				ter = n2;
			}
				else{
					if((n3 > pri) and (n3 > seg)){
						ter = n3;
				 	}
				}		
			}
	
	
	printf("\n\n**RESULTADO**\n\n");	
	printf("A sequencia é: %d, %d, %d,\n",pri,seg,ter);
	
	 system("pause");
	return 0;
}
