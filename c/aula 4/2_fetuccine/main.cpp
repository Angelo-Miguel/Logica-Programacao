#include <stdio.h>
#include <stdlib.h>
#include <math.h>


main (){
    int i, a1, a2, n, vezes;
 
    printf("Digite o primeiro termo: ");
    scanf("%d", &a1);
 
    printf("Digite o segundo termo: ");
    scanf("%d", &a2);
    do{
    printf("Informe a qtd de vezes: ");
    scanf("%d", &vezes);
 	}while(vezes < 3);
 
    printf("\n");
    printf("%d", a1);
    printf("\n");
    printf("%d", a2);
    printf("\n");
 
    for(i = 3; i <= vezes; i++ )
    {
        if(i%2 == 0) 
        {
            n = a2 - a1;
        } 
        else 
        {
            n = a2 + a1;
        }
        printf("%d", i, n);
        printf("\n");
        a1 = a2;
        a2 = n;
    }
    printf("\n\n");
    system("pause");
}
