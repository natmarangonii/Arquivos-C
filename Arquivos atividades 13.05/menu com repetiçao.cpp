//biblioteca
#include <stdio.h>
#include <locale.h>

//inicio, informar variaveis
int main(){
    float n1, n2, resp;
    int opçao;
    
    //menu para o usuario selecionar a operaçao e guardar na memoria 
    printf ("\nEscolha a opçao:\n");
    printf ("1. Somar\n");
    printf ("2. Subtrair\n");
    printf ("3. Sair\n");
    scanf ("%d", &opçao);
    
    //"do" para fazer ate que o usuario queira
    //switch para a opçao escolhida
    do {
    switch (opçao){
        
        //para a Soma
        case 1:
        printf ("\nInforme dois numeros:\n");
        scanf ("%f %f", &n1, &n2);
        resp = n1 + n2;
        printf ("Resposta: %.2f", resp);
        break;
        
        //para subtraçao
        case 2:
        printf ("\nInforme dois numeros:\n");
        scanf ("%f %f", &n1, &n2);
        resp = n1 - n2;
        printf ("Resposta: %.2f", resp);
        break;
        
        //caso nao seja nenhuma opçao
        default:
        printf ("Opção invalida. Programa encerrado");
        return 1;
        
    }
    } while (opçao != 3);
    
    //encerrar programa
    return 0;
}