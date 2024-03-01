#include <iostream>
#include <locale.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"Portuguese");
	
	//calculadora
	int while1,erro,calculadora,operacao;
	char fator;
	
	//tabuada
	int i,tabuada;
	
	//bhaskara
	int a,b,c,errobhaskara;
	float x1,x2,delta;
	
	//primo
	int primo,j,n1;
	
	//area
	float area,dma,dme,raio,altura,base;
	int figuras;
	
	//medio
	float media;
	int k;
	

	float total,num1,num2;
	while1 = 1;
	
	
	
	
	while(while1 == 1){
		
		i = 0;
		j = 0;
		total = 0;
		erro = 0;
		
		calculadora = 0;
		printf("***Calculadora***\n\n");
	  	printf("1 - matemática\n");
	  	printf("2 - física\n");
	  	printf("_______________\n");
	  	scanf("%d",&calculadora);
	  	system("cls");
	  	
	 	if((calculadora != 1) and (calculadora != 2)){
	  		erro = 1;
	  	}
	  
/*_____________________________________________________________________________________
MATEMÁTICA*/
	 
	  	if(calculadora == 1){
	  		operacao = 0;
	  		printf("***MATEMÁTICA***\n");
	  		printf("________________\n\n");
	 		printf("Operações\n");
	 		printf("1 - operações\n");
	 		printf("2 - bhaskara\n");
	  		printf("3 - tabuada\n");
	 		printf("4 - primos\n");
			printf("5 - áreas\n");
	 		printf("6 - média\n");
	 		printf("_______________\n\n");
	 		scanf("%d",&operacao);
	 		system("cls");
	 	
	  		if((operacao != 1) and (operacao != 2) and (operacao != 3) and (operacao != 4) and (operacao != 5)){
	  			erro = 1;
			}
	  	}
	
/*_______________________________________________________________________________
OPERAÇÕES SIMPLES*/
	  
	  	if(operacao == 1){
		  	fator = 0;
	 		printf("***CALCULADORA***\n");
	 		printf("_________________\n\n");
	 		printf("EX: - + * / ^ v %\n");
	 		printf("\nInforme qual conta deseja: ");
	 		scanf("%s",&fator);
	 		system("cls");
	 	
		 	if((fator == '-') or (fator == '+') or (fator == '*') or (fator == '/')){
		  		if(fator == '-'){
		  		printf("*SUBITRAÇÃO*\n\n");
		  		}
		  		else{	
		  			if(fator == '+'){
		  			printf("*SOMA*\n\n");
					}
		  			else{
		  				if(fator == '*'){
		  				printf("*MULTIPLICAÇÃO*\n\n");
						}
		  				else{
		  					if(fator == '/'){
		  					printf("*DIVISÃO*\n\n");
		  					}
		  				}
		  			}
		  		}
			  	printf("\nInforme o primeiro número: ");
			  	scanf("%f",&num1);
			  	printf("Informe o segundo número: ");
			  	scanf("%f",&num2);
			  	
			}
			else{
		  		if(fator == 'v'){
		  			printf("RAIZ QUADRADA\n");
		  			printf("\nInforme o valor: ");
		  			scanf("%f",&num1);
		  		}
		  		else{
		  			if(fator == '^'){
		  				printf("POTÊNCIA\n");
		  				printf("\nInforme o primeiro número: ");
		  				scanf("%f",&num1);
		  				printf("informe o expoente: ");
		  				scanf("%f",&num2);
		  			}
		  			else{
		  				if(fator == '%'){
		  					printf("PORCENTAGEM\n\n");
		  					printf("Informe o número: ");
		  					scanf("%f",&num1);
		  					printf("Informe a porcentagem: ");
		  					scanf("%f",&num2);
		  					system("cls");
		  				}
		  				else{
		  					printf("\nErro Simbolo não reconhecido\n");
		  				
			  			}
			  		}
			 	}
		  	}
		  	
		  	if(fator == '-'){
		  		total= num1 - num2;
		  	}
		  	else{
		  		if(fator == '+'){
		  			total= num1 + num2;
		  		}
		  		else{
		  			if(fator == '*'){
		  				total= num1 * num2;
		  	 		}
		  			else{
		  				if((fator == '/') and (num2 != 0)){  
		  					total= num1 / num2;
		  				}
		  				else{
		  					if(fator == '^'){
		  						total= pow(num1,num2);
		  					}
		  					else{
		 						if(fator == 'v'){
		  							total= sqrt(num1);
		  						}
		  						else{
		  							if(fator == '%'){
		  								total= num1 * (num2 /100);
		  							}
		  						}
		  					}
		  				}
		  			}
		  		}
		  	}
		  	
		  	if((fator == '-') or (fator == '+') or (fator == '*') or (fator == '/') or (fator = '^') or (fator == 'v') or (fator == '%')){
		  		system("cls");
		  		printf("***RESULTADO***\n");
		  		printf("O total é: %f\n\n",total);
		  	}
		}
		  	
/*_______________________________________________________________________________
BHASKARA*/
	  
	    if(operacao == 2){
	        printf("***BHASKARA***\n");
	        printf("______________\n\n");
	        printf("Digite o valor de A: ");
	        scanf("%d",&a);
	        printf("Digite o valor de B: ");
	        scanf("%d",&b);
	        printf("Digite o valor de C: ");
	        scanf("%d",&c);
	  
	        delta = (b*b)-(4*a*c);
	        
	        if(delta <= 0){
	            system("cls");
	            errobhaskara = 1;   
	        }
	         else{
	              x1 = ((-b)+sqrt(delta))/(2*a);
	              x2 = ((-b)-sqrt(delta))/(2*a);
	              printf("Valor de X1= %f\n",x1);
	              printf("Valor de X2= %f\n\n",x2);
	        }
	    }
	  
/*______________________________________________________________________________
TABUADA*/ 
	  
	  	if(operacao == 3){
	 		printf("***TABUADA***\n");
	 		printf("_____________\n\n");
	  		printf("Informe um número: ");
	  		scanf("%d",&tabuada);
	  		system("cls");
	  		printf("***RESULTADO***\n\n");
	  		for(i = 1; i <= 10; i ++){
	  			printf("%d * %d = %d \n",tabuada,i,i * tabuada);
	  		}
	  	}
	
/*______________________________________________________________________________
PRIMOS*/
	 
	  	if(operacao == 4){
	  		primo = 0;
	  		printf("***PRIMOS***\n");
	  		printf("____________\n\n");
	  		printf("Informe um número para saber se ele é primo ou não: ");
	  		scanf("%d",&n1);
	  		for(j = 1; j <= n1;j ++){
	  			if(n1 % j == 0){
	  			primo++;
	  			}
	  		}
	  		system("cls");
	  		printf("***RESULTADO***\n\n");
	  		if(primo == 2){
	  		printf("O número %d é primo\n\n",n1);
	  		}
	  		else{
	  		printf("O número %d não é primo\n\n",n1);
	  		}
	  	}
	 
/*______________________________________________________________________________
ÁREAS*/
	 
	  	if(operacao == 5){
	  		printf("***ÁREAS***\n");
	  		printf("___________\n\n");
	  		printf("1 - Triângulo\n");
			printf("2 - Quadrado\n");
		 	printf("3 - Losango\n");
		 	printf("4 - Retângulo\n");
		  	printf("5 - Círculo\n");
		  	printf("___________________\n\n");
		  	printf("Informe qual a area que deseja calcular: ");
		  	scanf("%d",&figuras);
		  	system("cls");
		 	if(figuras == 3){
			  	printf("Informe a diagonal maior: ");
			  	scanf("%f",&dma);
			  	printf("Informe a diagonal menor: ");
			  	scanf("%f",&dme);
		  	}
		  	else{
			  	if(figuras == 5){
			  	printf("Informe o raio da circunferencia: ");
			  	scanf("%f",&raio);
	  			}
	  			else{
				  	printf("Informe a altura: ");
				  	scanf("%f",&altura);
				 	printf("Informe a base: ");
				  	scanf("%f",&base);
	  			}
	  		}
	  		system("cls");
	  	if(figuras == 1){
	  		area = (base * altura) /2;
	  	}
	  	else{
		  	if(figuras == 2){
		  		area = base * altura;
		  	}
		  	else{
			  	if(figuras == 3){
			  		area = (dma * dme) / 2;
			  	}
			  	else{
				  	if(figuras == 4){
				  		area = (base * altura);
				  	}
				  	else{
				  		if(figuras == 5){
				 			area = M_PI  * (raio * raio);
				 		}
				  	}
			  	}
		  	}
	  	}
	  	printf("***RESULTADO***\n\n");
	  	printf("A área é %f\n\n",area);
	  	}
	
/*______________________________________________________________________________
MÉDIA*/
 
  		if(operacao == 6){
  			total = 0;
  			num1 = 0;
  			num2 - 0;
	  		printf("***MÉDIA***\n");
	  		printf("___________\n\n");
	  		printf("A quantidade de números: ");
	  		scanf("%f",&num1);
	  		printf("Os números: \n");
	  		for(k = 1; k <= num1; k ++){
		  		scanf("%f",&num2);
		  		total = total + num2;
	  		}
	  		media = total / num1;
	  		system("cls");
	  		printf("***RESULTADO***");
	  		printf("A média é: %f",media);
  		}
  
	
		
	
/*______________________________________________________________________________
VOLTAR PARA O COMEÇO*/

		if(errobhaskara == 1){
			system("cls");
			printf("Delta Negativo\n\n");
			errobhaskara = 0;   
		}
	  	
	  	if((fator == '/') and (num2 == 0)){
			system("cls");
			printf("Erro Divisão por 0\n\n");
		}
	  	
	 	if(erro == 1){
	 	system("cls");
	 	printf("ERRO 404\n\n");
	 	}
	 
	 	system("pause");
	    system("cls");
	}
	return 0;
}
