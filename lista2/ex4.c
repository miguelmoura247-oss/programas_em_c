#include<stdio.h>
#include<string.h>

int main(){
    char text[501];
    
    printf("Digite o texto:");
    scanf("%s",&text);

    for(int i=0;i<500;i++){
        if(text[i]!='.'){
            printf("%c",&text[i]);
        }
        else if(text[i]=='.'){
            printf("\n";)
        }
    }
    return 0;
}
