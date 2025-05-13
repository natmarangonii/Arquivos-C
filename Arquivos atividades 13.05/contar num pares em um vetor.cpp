//bibliotecas
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
    
int main(){
//declaracão de variavel
    int n[10], i, pares = 0;
    
//laço de repetição para pedir os números    
    for (i = 0; i < 10; i++) { 
        printf("Digite um número: ");
        scanf("%d", &n[i]); 
        
//analisar quais numeros sao pares        
        if (n[i] % 2 == 0){ 
            
//acrescenta numeros pares na resposta            
            pares++; 
        }
    }
//mostra para o usuario a resposta
    printf("Quantidade de números pares: %d\n", pares); 
    
    //encerrar programa
    return 0;
    }