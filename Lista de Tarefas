#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char titulo[20];
    char descriçao[50];
    char horarioCom[10];
    char horarioTer[10];
    int concluido, status;
} Cadastro;

int numCadastro = 0;
Cadastro cadastro [10];

void cadastroTarefa();
void finalizaFunçao();
void listarTarefa();
void marcarConcluida();
void tarefaConcluida();

int main (){
    int opçao;
    do{
    printf("\n---- Planner de Tarefas ----\n");
    printf ("1. Adicionar Tarefa\n");
    printf ("2. listarTarefa\n");
    printf ("3. Marcar tarefa como conluída\n");
    printf ("0. Sair\n");
    scanf ("%d", &opçao);
    
    
    switch (opçao){
        case 1:
        cadastroTarefa();
        break;
        
        case 2:
        listarTarefa();
        break;
        
        case 3:
        marcarConcluida();
        break;
        
        case 0:
        printf ("\nObrigado!\n");
        break;
        
        default:
        printf ("\nOpção inválida!\n");
        break;
    }
    }while (opçao != 0);
    return 0;
}

    void cadastroTarefa(){
        system ("clear");
        printf ("\n--- Adicionar Tarefa ---\n");
        printf ("Insira o título da atividade:");
        scanf (" %[^\n]", cadastro[numCadastro].titulo);
        
        printf ("\nInsira uma descrição:");
        scanf (" %[^\n]", cadastro[numCadastro].descriçao);
        
        printf ("\nInsira a data e horário de começo:");
        scanf (" %[^\n]", cadastro[numCadastro].horarioCom);
        
        printf ("\nInsira a data e horário de término:");
        scanf (" %[^\n]", cadastro[numCadastro].horarioTer);
        
        printf ("\nStatus da tarefa (0 = pendente 1 = concluida)");
        scanf ("%d", &cadastro[numCadastro].status);
        
         numCadastro++;
        
        finalizaFunçao();
       
        }
    

    void listarTarefa(){
    system ("clear");
    printf ("\n---- Listar Tarefas ----\n");
    for (int i = 0; i < numCadastro; i++){
        printf ("Título: %s", cadastro[i].titulo);
        printf ("Descrição: %s\n", cadastro[i].descriçao);
        printf ("Horário de começo: %s\n", cadastro[i].horarioCom);
        printf ("Horário de término: %s\n", cadastro[i].horarioTer);
        if (cadastro[i].concluido == 0) {
            printf("Status: Pendente\n");
        } else {
            printf("Status: Concluída\n");
        }

        printf ("\n--------------------\n");
    }
    finalizaFunçao();}
    
    void marcarConcluida() {
    system ("clear");
    int indice;
    printf("\nDigite o número da tarefa concluída: ");
    scanf("%d", &indice);

    if (indice < 1 || indice > numCadastro) {
        printf("\nNúmero inválido!\n");
        return;
    }

    cadastro[indice - 1].concluido = 1;
    printf("\nTarefa marcada como concluída!\n");
}

    void finalizaFunçao(){
    printf ("Enter para continuar...");
    
    getchar();
    getchar();
    system ("clear");
    }
