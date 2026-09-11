#include <stdio.h>

typedef struct{
    char nome[50];
    int n1;
    int n2;
}aluno;

float print_aprovados(int n, aluno estudante[]){

    for(int i = 0;i < n; i++){

        printf("\nDigite o nome do %d° aluno:\n",i+1);
        scanf("%s",estudante[i].nome);

        printf("\nDigite a primeira nota do aluno:\n");
        scanf("%d",&estudante[i].n1);

            if ((estudante[i].n1) > 10){
                printf("\nPrimeira nota inválida!\n");
                return 1;
        }

        printf("\nDigite a segunda nota do aluno:");
        scanf("%d",&estudante[i].n2);

          if ((estudante[i].n2) > 10){
            printf("\nSegunda nota inválida!\n");
            return 1;
        }

        float media;
        media =(((estudante[i].n1) + (estudante[i].n2) )/2);

        if (media >= 6){

            printf("\nAluno %s aprovado com a média igual a %f.\n",estudante[i].nome, media);

        }else {
            printf("\nAluno %s reprovadocom a média igual a %f.\n",estudante[i].nome, media);
        }
    }
}

int main() {
    int n;

    printf("Digite a quantidade de alunos:\n");
    scanf("%d", &n);

    aluno estudante[n];

    print_aprovados(n, estudante);

    return 0;
}
