#ifndef TRIGO_H
#define TRIGO_H


 typedef struct {
        char nome_estudante[30];
    } estudante;
    
    typedef struct {
        char nome_turmas[30];
        int numero_turmas;
        estudante aluno[9];
        int alunos_cadastrados;
    } turma_struct;

    
int cadastrar_turmas(int i, turma_struct turmas[]);
int cadastrar_aluno_na_turmas(turma_struct turmas[]);
int excluir_aluno(turma_struct turmas[]);
int exibir_alunos(turma_struct turmas[]);

#endif