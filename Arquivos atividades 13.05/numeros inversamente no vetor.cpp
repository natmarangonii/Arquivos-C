//bibliotecas
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

//declarar variaveis, inicio    
int main (){
    int n[5], i;
    
    //pedir para o usuario informar os numeros
    printf ("Digite 5 numeros:\n");
    
    //laço de repetiçao para guardar os numeros
    for (i = 0; i < 5; i++){
    scanf ("%d", &n[i]);
    }
    
    //laço de repetiçao para imprimir os numeros
    printf("Resultado:\n");
    for (i = 4;i>=0;i--){
        printf ("%d\n", n[i]);
        }
        
    //encerrar programa
    return 0;
    }
