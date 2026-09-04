#include <stdio.h>
#include<string.h>
#include "turmas.h"

int cadastrar_turmas(int i, turma_struct turmas[]) {
    void import();
    if (i >= 3) {
        printf("Máximo de turmas já cadastradas\n");
        return 1;
    } else {
        printf("Digite o nome da turma: ");
        scanf("%s", turmas[i].nome_turmas);
        turmas[i].numero_turmas = i;
        turmas[i].alunos_cadastrados = 0; 
    }
    return 0;
}

int cadastrar_aluno_na_turmas(turma_struct turmas[]) {
    char nome_turmas_teste[30];
    printf("Digite o nome da turma que deseja cadastrar um aluno: ");
    scanf("%s", nome_turmas_teste);

    for (int i = 0; i < 3; i++) {
        if (strcmp(turmas[i].nome_turmas, nome_turmas_teste) == 0) {
            if (turmas[i].alunos_cadastrados == 9) {
                printf("Máximo de alunos cadastrados.\n");
                return 1;
            } 
            else {
                printf("Digite o nome do aluno que deseja cadastrar: ");
                scanf("%s", turmas[i].aluno[turmas[i].alunos_cadastrados].nome_estudante);
                turmas[i].alunos_cadastrados++;
                return 0;
            }
        }
    }
    printf("\nTurma não encontrada.");
    return 1;
}

int excluir_aluno(turma_struct turmas[]) {
    char aluno_remocao[30];
    char nome_turmas_teste[30];
    printf("Digite o nome da turma para remover um aluno: ");
    scanf("%s", nome_turmas_teste);

    for (int i = 0; i < 3; i++) {
        if (strcmp(turmas[i].nome_turmas, nome_turmas_teste) == 0) {
            printf("Digite o nome do aluno que deseja remover: ");
            scanf("%s", aluno_remocao);

            for (int j = 0; j < turmas[i].alunos_cadastrados; j++) {
                if (strcmp(turmas[i].aluno[j].nome_estudante, aluno_remocao) == 0) {
                    for (int n = j; n < turmas[i].alunos_cadastrados - 1; n++) {
                        strcpy(turmas[i].aluno[n].nome_estudante, turmas[i].aluno[n + 1].nome_estudante);
                    }
                    turmas[i].alunos_cadastrados--;
                    printf("Aluno removido com sucesso!\n");
                    return 0;
                }
            }
            printf("Aluno não encontrado na turma.\n");
            return 1;
        }
    }
    printf("Turma não encontrada.\n");
    return 1;
}

int exibir_alunos(turma_struct turmas[]) {
    char nome_turmas_teste[30];
    printf("Digite o nome da turma para exibir os alunos: ");
    scanf("%s", nome_turmas_teste);

    for (int i = 0; i < 3; i++) {
        if (strcmp(turmas[i].nome_turmas, nome_turmas_teste) == 0) {
                printf("Alunos da turma %s:\n", turmas[i].nome_turmas);
                    for (int j = 0; j < turmas[i].alunos_cadastrados; j++) {
                        printf("- %s\n", turmas[i].aluno[j].nome_estudante);
            }
            printf("\n");
            return 0;
        }
    }
    printf("Turma não encontrada.\n");
    return 1;
}