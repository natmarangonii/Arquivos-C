//bibliotecas
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
    
//montagem da estrutura struct
typedef struct{
    char nome[30];
    int idade;
    float nota;
} Aluno;

int main(){
    
//declarar as variáveis 
    Aluno aluno;

//pedir os dados ao usuario e guardar na memoria
    printf("Informe o nome: ");
    scanf(" %[^\n]", aluno.nome);
    printf("Informe a idade: ");
    scanf("%d", &aluno.idade);
    printf("Informe a nota: ");
    scanf("%f", &aluno.nota);
    
//limpar o programa
    system ("clear");
    
//para mostrar os resultados     
    printf("Dados do aluno:\nNome: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Nota: %.2f", aluno.nota);
    
    //encerrar programa
    return 0;
    }