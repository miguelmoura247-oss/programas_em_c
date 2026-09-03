#include<stdio.h>

int main(){
    int matrizA[3][5];
    int matrizT[5][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            printf("digite o termo %d %d da matriz:",i,j);
            scanf("%d",&matrizA[i][j]);
           matrizT[j][i] = matrizA[i][j];
        }
    }
    for(int j=0;j<5;j++){
        for(int i=0;i<3;i++){
            printf("%d",matrizT[j][i]);
        }
        printf("\n");
    }
    return 0;
}