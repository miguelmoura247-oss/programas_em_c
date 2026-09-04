
#include <stdio.h>

double calcula_area(int altura, int base){
    return (altura * base)/2;
}

void main(){
    int base;
    int altura;
    double area;

    printf("\nDigite os valores de altura e base para calcular a aréa do triangulo:\n");
    scanf("%d %d", &altura, &base);
    area = calcula_area(altura,base);
    printf("%lf",area);
    
    }
