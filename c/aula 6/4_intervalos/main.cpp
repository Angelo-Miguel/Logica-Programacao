#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	int ok,ok1,intervalo25 = 0,intervalo50 = 0,intervalo75 = 0,intervalo100 = 0;
	int i= 0,j;
	int vet[i];
	
	printf("**Intervalo**\n\n");
	printf("Escreva um número negativo caso quera terminar\n\n");
    while(ok == ok1){
    	printf("Informe o %dº número:",i+1);
    	scanf("%d",&vet[i]);
    		if(vet[i] < 0){
    			ok = 2;
    			i--;
			}
    	i++;
	}
	
	for(j=0;j<i;j++){
		if((vet[j] >= 0) && (vet[j] <= 25)){
			intervalo25++;
		}
		else if((vet[j] >= 26) && (vet[j] <= 50)){
			intervalo50++;
			}
			else if((vet[j] >= 51) && (vet[j] <= 75)){
				intervalo75++;
				}
				else if((vet[j] >= 76) && (vet[j] <= 100)){
					intervalo100++;
					}
	}
	
	printf("\n\nRESULTADO:\n\n");
	printf("Quantidade de números:\n");
	printf("Intervalo 0 a 25: %d\n",intervalo25);
	printf("Intervalo 26 a 50: %d\n",intervalo50);
	printf("Intervalo 51 a 75: %d\n",intervalo75);
	printf("Intervalo 76 a 100: %d\n\n",intervalo100);
	
	
	system("pause");
	return 0;
}
