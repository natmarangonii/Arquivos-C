//biblioteca
#include <stdio.h>
#include <locale.h>

//inicio, informar variaveis
int main(){
    int numero;

//pedir ao usuario um numero e guardar
    printf("Informe um número: ");
    scanf("%d", &numero);
    
//eestrutura de condiçao para ver se é impar ou par
    if (numero % 2 != 0){
        printf("Esse número é ímpar!\n");
    }
    else {
        printf("Esse número é par!\n");
    }
    
 
    //encerrar programa
    return 0;
}