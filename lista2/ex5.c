#include<stdio.h>

typedef struct{
    char nome[51];
    int posicao;
}jogador;

int main(){
    jogador player[5];
    int n;

    printf("Digite o nome e o numero do jogador:");

    for(int i=0;i<5;i++){

        scanf("%s %d",&player[i].nome,&player[i].posicao);

        if((player[i].posicao < 1)||(player[i].posicao>5)){
            printf("erro posição inválida!");
                return 1;
        }
    }

   for(int i=0;i<5;i++){

    printf("%s",time[i].nome);

    if((time[i].posicao == 1 )||(time[i].posicao == 2)){
        printf("armador");
    }

    if((time[i].posicao == 3 )||(time[i].posicao == 4)){
        printf("ala");
    }

    if(time[i].posicao == 5 ){
        printf("pivo");
    }
   }

    return 0;
}
