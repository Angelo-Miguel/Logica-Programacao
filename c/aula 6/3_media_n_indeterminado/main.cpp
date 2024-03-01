#include <iostream>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int i = 0,j = 0,k = 0;
	int ok = 1,ok1 = 1;
	int vet[999];
	int soma = 0;
	float media,n;
	int posi,nega,pornega,porposi;
	
	printf("**Média n indeterminado e porcentagem**\n\n");
	printf("Escreva \"404\" caso quera terminar\n\n");
    while(ok == ok1){
    	printf("Informe o %dº número:",i+1);
    	scanf("%d",&vet[i]);
    		if(vet[i] == 404){
    			ok = 2;
    			i--;
			}
    	i++;
	}
	
	for(j = 0; j<i;j++){
		soma += vet[j];
	}
	n = i;
	
	media = soma / n;
	
	posi = 0;
	nega = 0;
	for(k=0;k<i;k++){
		if(vet[k] >= 0){
			posi++;
		}
		else{
			nega++;
		}
	}
	porposi = (posi * 100) / i;
	pornega = (nega * 100) / i;
	
	printf("\n\nRESULTADO\n");
	
	printf("Porcentagem:\n");
	printf("Positivos: %d%\n",porposi);
	printf("Negativos: %d%\n\n",pornega);
	
	printf("Qtd de positivos e negativos:\n");
	printf("Positivos: %d\n",posi);
	printf("Negativos: %d\n\n",nega);
	
	printf("Média:\n");
	printf("Soma: %d\n",soma);
	printf("Total de números: %d\n",i);
	printf("Média: %.2f\n",media);
	
	getch();
	return 0;
}
