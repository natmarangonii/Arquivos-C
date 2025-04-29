//biblioteca
#include <locale.h>
#include <stdio.h>

    int main (){
        int numeros[10], busca, i, encontrado = 0;
        
        printf ("Digite 10 numeros:\n");
        for (i=0; i < 10; i++){
            scanf ("%d", &numeros[i]);
        }
        printf("Digite um numero para buscar:\n");
        scanf ("%d", &busca);
        
        for (i = 0; i < 10; i++){
            if (numeros[i]== busca){
                printf ("Numero encontrado na posição %d (indice %d)\n", i + 1, i); 
                encontrado = 1;
                break;
                }
        }
        if (!encontrado){
            printf ("Numero nao encontrado!\n");
            
        }
        return 0;
    }
    
       
    
    