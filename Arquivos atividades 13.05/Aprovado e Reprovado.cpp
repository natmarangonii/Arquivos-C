//biblioteca
#include <locale.h>
#include <stdio.h>

//definir variáveis 
int main(){
    float nota1, nota2, media;
    
    //pedir para o usuário a informação
    printf ("Informe duas notas:\n");
    scanf ("%f %f", &nota1, &nota2);
    
    //calcular a media
    media = (nota1 + nota2)/2;
    
    //caso positivo, aluno aprovado
    if (media >= 7){
        printf ("Aluno aprovado! Média: %.2f", media);
    }
    
    //caso negativo, aluno reprovado
    else {
        printf ("Aluno reprovado! Media: %.2f", media);
    }
    
    //encerrar programa
    return 0;
}