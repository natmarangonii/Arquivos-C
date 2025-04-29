//biblioteca
#include <locale.h>
#include <stdio.h>

    int main (){
        int n[8], par = 0, impar = 0;
        
        printf("Digite 8 numeros:\n");
        for (int i = 0; i < 8; i ++){
            scanf ("%d", &n[1]);
            
            if (n[1] % 2 == 0){
                par++;
            }
            
            else {
                impar ++;
            }
        }
        
        printf ("Par: %d\n", par);
        printf ("Impar: %d", impar);
        
        return 0;
    }
    