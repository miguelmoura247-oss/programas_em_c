#include <stdio.h>

void calcular_area(int *altura, int *base,  double *area_resp){
        *area_resp = ((double)(*base) * (*altura))/2;
        printf("\na area da base  é: %lf\n",*area_resp);
    }


void main(){
    int base;
    int altura;
    double area;

    printf("\nDigite os valores de altura e base para calcular a aréa do triangulo:\n");
    scanf("%d %d", &altura, &base);
    calcular_area(&altura,&base,&area);
    
    }