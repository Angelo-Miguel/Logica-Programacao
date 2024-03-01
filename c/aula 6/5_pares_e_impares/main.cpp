#include <iostream>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int ok = 1, ok1 = 1;
	int j,i,g,k,l = 0;
	int vet[i];				
	int pares[i];
	int par = 0,impar = 0;
	int soma,somapares;
	float media,mediapares;
	
	printf("**Intervalo**\n\n");
	printf("Escreva \"0\" caso quera terminar\n\n");
    while(ok == ok1){
    	printf("Informe o %dº número:",i+1);
    	scanf("%d",&vet[i]);
    		if(vet[i] == 0){
    			ok = 2;
    			i--;
			}
    	i++;
	}
	l = 0;
	for(j=0;j<i;j++){
		if(vet[j] % 2 == 0){
			par++;
			pares[l] = vet[j];
			l++;
		}
		else{
			impar++;
		}	
	}
	
	somapares = 0;
	for(k=0;k<l;k++){
		somapares += pares[k];  
	}
	mediapares = somapares / par;
	
	soma = 0;
	for(g=0;g<i;g++){
		soma += vet[g];
	}
	media= soma / i;
	
	printf("\n\nRESULTADO:\n\n");
	printf("Números pares: %d\n",par);
	printf("Números impares: %d\n",impar);
	printf("Média pares: %.1f\n",mediapares);
	printf("Média geral: %.1f\n",media);
	
	system("pause");
	return 0;
}
