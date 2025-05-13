//biblioteca
#include <stdio.h>
#include <locale.h>

//inicio, informar variaveis
int main(){
    float n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, media;
    
    //perguntar os numeros e guardar na memoria
    printf ("Informe 10 numeros:\n");
    scanf ("%f %f %f %f %f %f %f %f %f %f", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10);
    
    //calcular a media
    media = (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10) / 10;
    
    //informar para o usuario a media
    printf ("A media é: %.2f", media);
    
    //encerrar programa
    return 0;
}
