#include <iostream>

 

/* run this program using the console pauser or add your own getch, system("pause") 
or input loop */

 

int main(int argc, char** argv) {
    int contador,i,j, figura, ok, meio;
    int inicio, fim;
    do{
        printf("Escolha a figura a ser exibida ( 1-Quadrado / 2-Triangulo): ");
        scanf("%d", &figura);    
        if((figura == 1) || (figura == 2)){
            ok = 1; //verdadeiro
        }
        else{
            ok = 0; //falso
        }
    } while(ok == 0);
    
    if(figura == 2){
        do{
            printf("Informe um valor: ");
            scanf("%d", &contador);    
            if(contador%2 == 1){
                ok = 1; //verdadeiro
            }
            else{
                ok = 0; //falso
            }
        }while(ok == 0);
    }
    if(figura == 1){
        printf("Informe um valor: ");
        scanf("%d", &contador);
        /*
        for(i=1; i <= contador; i++){
            for(j=1; j <= contador; j++){
                printf("*");
            }
            printf("\n");
        }
       
        printf("\n\n\n");
        */
        i=1;
        while(i <= contador ){
            j=1;
            while(j <= contador){
                printf("*");
                j++;
            }
            printf("\n");
            i++;
        }
        
    }else{
        meio = contador / 2 + 1;
        //printf("Meio: %d", meio);
        i = 1;
        inicio = meio;
        fim = meio;
        while(i <= meio){    
            j=1;
            while(j<=contador ){
                if((j>= inicio) && (j <= fim)){
                    printf("*");
                } else{
                    printf(" ");
                }
                j++;
            }
            inicio--;
            fim++;
            printf("\n");
            i++;
        }     
    }
    
    
    return 0;
}
