//biblioteca
#include <locale.h>
#include <stdio.h>

    int main (){
        int n[5], i;
        
        printf("Digite 5 numeros:\n");
        
        for (i = 0; i < 5; i ++){
            scanf ("%d", &n[i]);
        }
        
        printf ("Ordem inversa: \n");
        for (i = 4; i >= 0; i--){
            printf ("%d", n[i]);
        }
            return 0;
            
    }
    