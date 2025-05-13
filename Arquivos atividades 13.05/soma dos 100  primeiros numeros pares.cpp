//biblioteca
#include <stdio.h>
#include <locale.h>

//inicio, informar variaveis
int main(){
    int i, soma = 0;

    //laço de repetição 
    for (i = 1; i <= 100; i ++){
    soma += 2 * i;
    }
    
    //mostrar ao usuario o resultado
    printf("A soma dos 100 primeiros números pares é: %d", soma);
    
    //encerrar programa
    return 0;
    }