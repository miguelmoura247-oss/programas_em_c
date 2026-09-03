#include<stdio.h>
#include <math.h>

//"pow (base, expoente) potencia"
//"sqrt(numero) raiz quadrada"
int main(){
    double x[10];
    double desvio = 0.0,desvio_padrao = 0.0;
    double media = 0.0;

    printf("Digite os 10 valores para o desvio padrão:");
    
    for(int i=0;i<10;i++){
        scanf("%lf",&x[i]);
            media += x[i];
    }
    
    media = media/10;

    for(int j=0;j<10;j++){
        desvio += pow(x[j]-media,2);
    }
    desvio=desvio/10;

    desvio_padrao= sqrt(desvio);
    
    printf("o desvio padrão é igual a: %lf",desvio_padrao);
    
    return 0;
}