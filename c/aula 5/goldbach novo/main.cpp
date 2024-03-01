#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int primo,primo1,j,l,n1,n2,total;
	
	int vettotal[16349];
	int vetn1[16349];
	int vetn2[16349];
	int p = 0,h,g;
	
	printf("***Goldbach***\n\n");
	
	for(int i=0; i<=1000; i++){
		primo = 0;
		for(j = 1; j <= i; j++){
			if(i% j == 0){
				primo++;
			}	
		}
		if(primo == 2){
			n1 = i;
			for(int l=1; l<=1000; l++){
				primo1 = 0;
				for(int k = 1; k <= l; k++){
					if(l% k == 0){
						primo1++;
					}	
				}
				if(primo1 == 2){
					n2 = l;
					total= n1 + n2;
					if(total % 2 ==0){
						if((total >= 1) and (total <= 1000)){
							printf("%d + %d = %d\n",n1,n2,total);
							vettotal[p] = total;
							vetn1[p] = n1;
							vetn2[p] = n2;
							p++;			
						}
					}
				}
			}
		}
	}
	system("pause");
	system("cls");
	printf("***Goldbach***\n\n");
	
	for(h = 0; h<1001;h++){
		for(g = 0; g<16349;g++){
			if(vettotal[g] == h){
				printf("%d + %d = %d\n",vetn1[g],vetn2[g],vettotal[g]);
				g = 16349;
			}
		}	
	}
	
	system("pause");
	return 0;
}
