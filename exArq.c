#include <stdio.h>
#include <stdlib.h>
#include "modulo.h"


int main(){
    FILE *fp;
    int n = 5;
    pessoa ps[n];

    fp = fopen("arquivo.txt","wb");

    if(fp==NULL){
        printf("Erro, arquivo não aberto");
        return 1;
    }


    for (int i =0; i < n; i++){
        printf("Digite o nome:");
        scanf("%s",ps[i].nome);

        
        printf("\nDigite a idade:\n");
        scanf("%d",&ps[i].idade);

        if((ps[i].idade)< 0||(ps[i].idade > 80)){
            printf("Idade inválida\n");
            fclose(fp);
            return 1;
        }

        printf("Digite o CPF:\n");
        scanf("%s",ps[i].cpf);

    }

    fwrite(ps,sizeof(pessoa), n, fp);
    fclose(fp);



    return 0;
}