#include <stdio.h>
#include <stdlib.h>

#include "alunos.h"
#include "notas.h"


void finalizaFuncao();
void cadastrarNota(Nota *nota, int *conta);
void calcularMedia(Aluno alunos[], Nota notas[]);

int main(){
    int opcao, contAluno = 0, contNota = 0;
    Aluno alunos[10];
    Nota notas[50];
    
    do{
    system ("clear");    
    printf("---- Sistema escolar ----\n");
    printf("1- Cadastrar aluno\n");
    printf("2- Cadastrar nota\n");
    printf("3- Cadastrar média\n");
    printf("0- Sair\n");
    printf("Selecione uma opção: ");
    scanf("%d", &opcao);
    
    switch (opcao){
        case 1:
        cadastrarAluno(&alunos[contAluno], &contAluno);
        break;
        
        case 2:
        cadastrarNota(&notas[contNota], &contNota);
        break;
        
        case 3:
        calcularMedia(alunos, notas);
        break;
        
        case 0:
        printf("Saindo....");
        break;
        
        default:
        system ("clear");
        printf("Resposta inválida. Tente novamente\n\n");
        break;
    }
    } while (opcao != 0);

    return 0;
}

void finalizaFuncao(){
    printf("Enter para continuar...");
    getchar();   
    getchar();
    system("clear");
}


void calcularMedia(Aluno alunos[], Nota notas[]){

    int matricula, qntNotas = 0;
    float media = 0;
    system ("clear");
    printf ("---- Média do aluno ----\n");
    printf ("Informe a matrícula: ");
    scanf ("%d", &matricula);
    
    for (int i = 0; i < 10; i ++){
        if (alunos[i].matricula == matricula){
            printf ("Nome: %s\n", alunos[i].nome);
            break;
        }
    }
    
    for (int i = 0; i < 50; i ++){
        if (notas[i].matricula == matricula){
            media += notas[i].nota;
            qntNotas ++;
        }
    }
    
    printf ("Média: %.2f\n", (media / qntNotas));
    getchar();
    getchar();
}



















