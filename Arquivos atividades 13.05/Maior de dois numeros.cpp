//biblioteca
#include <stdio.h>
#include <locale.h>

//inicio, informar variaveis
int main (){
setlocale (LC_ALL,"");
   int n1, n2;
   
   //perguntar os numeros
    printf ("Digite dois numeros:\n");
    scanf ("%d %d", &n1, &n2);
    
    //estrutura de condiçao, faça apenas se...
    if (n1>n2) 
    {
        printf ("%d é maior que %d", n1, n2);
    }
    else if (n1<n2)
    {
        printf ("%d é menor que %d", n1, n2);
    }
    else{
        printf ("%d é igual a %d", n1, n2);
    }
    
    //encerar programa
    return 0;
}