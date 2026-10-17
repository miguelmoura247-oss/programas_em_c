#include <stdio.h>
#include <stdlib.h>
#include "modulo.h"

int main(){
    
    int n = 5;
    pessoa ps[n];
    FILE *fp;
    
    fp = fopen("arquivo.txt","rb");

    if(fp == NULL){
        printf("Erro, arquivo não aberto");
        return 1;
    }


    fread(ps, sizeof(pessoa), n,fp);
    fclose(fp);

    for (int i =0; i < n; i++){
        printf("Nome: %s, idade: %d, CPF: %s \n", ps[i].nome, ps[i].idade, ps[i].cpf);        
    }



    return 0;
}