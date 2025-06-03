#include <locale.h>
#include <stdio.h>

int main (){
    int a = 10;
    int *b; // * representa um ponteiro
    
    b = &a;
    
    printf ("A - %d\n", a);
    printf ("&A - %p\n", &a); //pedir o endereço de a
    printf ("B - %d\n", *b); 
    printf ("&B - %p\n", b); //aponta um espaço da memoria
    
    *b = 20;
    
    printf ("A - %d\n", a);
    printf ("B - %d\n", *b); 
    
    return 0;
    
}