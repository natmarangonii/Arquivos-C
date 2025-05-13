//biblioteca
#include <stdio.h>
#include <locale.h>

//inicio, informar variaveis
int main (){
setlocale (LC_ALL,"");
   int i;
  
 //estrutura para repetir ate que chegue no desejado 
 for (i = 0; i <= 100; i ++){
        printf("%d\n", i);
    }
 
    //encerar programa
    return 0;
}