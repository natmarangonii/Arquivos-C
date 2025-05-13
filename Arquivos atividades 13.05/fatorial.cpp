//biblioteca
#include <stdio.h>
#include <locale.h>

//inicio, informar variaveis
int main(){
    int n, i;

//perguntar um numero e guardar na memoria
    printf ("Digite um numero:\n");
    scanf ("%d", &n);
    
//laço de repetiçao para fazer a multiplicaçao do fatorial    
    for (i = n - 1;i>0;i--){
        n *= i;
    }
    
    //mostrar o resultado
    printf("O resultado é: %d", n);
    
    //encerrar programa
    return 0;
    }