//biblioteca
#include <locale.h>
#include <stdio.h>
int main (){
    int n [6], i;
    int soma; 
    
    for (i= 0; i<6; i ++){
    printf ("Informe o numero:\n");
    scanf ("%d", &n[i]);}
    
    soma = n[0]+n[1]+n[2]+n[3]+n[4]+n[5];
    printf ("A soma dos numeros é %d\n", soma);
    
    return 0;
    
    
}