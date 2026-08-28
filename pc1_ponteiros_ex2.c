#include <stdio.h>
#include "trigo.h"

int main(){
    double x;
    double radiano;
    int n,op;
    printf("digite os graus");
    scanf("%lf",&x);
    printf("\n escolha uma das opções abaixo:");
   

    do{
        
    printf("\n===1-converter graus para radianos.===\n");
    printf("2-cosseno\n");
    printf("3-seno\n");
    printf("4-tangente\n");
    printf("5-sair\n");
    scanf("%d",&op);

    switch (op){
        case 1:
        converter(x);
        break;
        case 2:
        cosseno(x);
        break;
        case 3:
        seno(x);
        break;
        case 4:
        tangente(x);
        break;
        default:
        printf("opção invalída.");
        break;
       }
    }while(op!=5);

    return 0;
}