#include <stdio.h>


int main(){
    FILE *fp;
    FILE *fp1;
    
    char nome_temp[12]; 
    int idade_temp;
    float nota_temp;
    

    fp = fopen("arquivo1.txt","r+");
    
    if (fp == NULL){
        printf("ERRO, ARQUIVO");
        return;
    }

    fp1 = fopen("arquivo2.txt","w+");

    while((fscanf(fp, "%11s,%d, %f", nome_temp, &idade_temp, &nota_temp)) == 3){

        

        if(nota_temp > 6){
            fprintf(fp1,"%11s, %d, %f\n",nome_temp, idade_temp, nota_temp);
        }
        
    } 
    fclose(fp1);
    fclose(fp);
    return 0;
}