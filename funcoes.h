#ifndef UNTITLED1_FUNCOES_H
#define UNTITLED1_FUNCOES_H

struct tarefa {
    int prioridade;
    char descricao[300];
    char categoria[100];
    char estado[20];
};


void salvar_tarefas(struct tarefa tarefas[], int numero_tarefas);

int carregar_tarefas(struct tarefa tarefas[]);

void adicionar_tarefas(struct tarefa tarefas[], int *numero_tarefas);

void deletar_tarefas(struct tarefa tarefas[], int *numero_tarefas);

void alterar_tarefas(struct tarefa tarefas[], int numero_tarefas);

void listar_prioridade(struct tarefa tarefas[], int numero_tarefas);

void listar_tarefas(struct tarefa tarefas[], int numero_tarefas, int max_caracteres);

void filtrar_tarefas_por_prioridade(struct tarefa tarefas[], int numero_tarefas, int prioridade);

void filtrar_tarefas_por_estado(struct tarefa tarefas[], int numero_tarefas, const char estado[]);

void filtrar_tarefas_por_categoria_prioridade(struct tarefa tarefas[], int numero_tarefas, int prioridade, const char categoria[]);

void exportar_tarefas_por_prioridade(struct tarefa tarefas[], int numero_tarefas, int prioridade);

void exportar_tarefas_por_categoria(struct tarefa tarefas[], int numero_tarefas, const char categoria[]);

void exportar_tarefas_por_prioridade_e_categoria(struct tarefa tarefas[], int numero_tarefas, int prioridade, const char categoria[]);


#endif 
