#include<stdio.h>
#include<string.h>
#include "turmas.h"

int main() {
    int n;
    int qtd_turmas = 0;
    turma_struct turmas[3];
   
    do {

        printf("=== Escolha uma das opções abaixo ===\n");
        printf("1- Cadastrar turma\n");
        printf("2- Cadastrar aluno em uma turma\n");
        printf("3- Excluir aluno de uma turma\n");
        printf("4- Exibir alunos de uma turma\n");
        printf("5- Sair do programa\n");
        scanf("%d", &n);

        switch (n) {
            case 1:
                if (cadastrar_turmas(qtd_turmas, turmas) == 0) {
                    qtd_turmas++;
                    printf("Turma cadastrada com sucesso!\n");
                }
                break;
            case 2:
                cadastrar_aluno_na_turmas(turmas);
                break;
            case 3:
                excluir_aluno(turmas);
                break;
            case 4:
                exibir_alunos(turmas);
                break;
            case 5:
                printf("Saindo do programa");
                break;
            default:
                printf("Opção inválida!!");
                break;
        }
    } while (n != 5);

    return 0;
}
