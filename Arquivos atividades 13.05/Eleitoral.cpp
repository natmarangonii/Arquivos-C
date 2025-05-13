//biblioteca
#include <stdio.h>
#include <locale.h>

//inicio, informar variaveis
int main(){
    int idade;
    
//perguntar a idade e guardar na memoria   
    printf("Informe sua idade: \n");
    scanf("%d", &idade);
    
//estrutura de condiçao 
//caso seja voto facultativo
    if (idade >= 16 && idade < 18 || idade >= 70){
        printf ("Voto opcional!\n");
    }
    
    //caso nao vote
    else if (idade < 16){
        printf ("Você não pode votar!\n");
    } 
    
    //caso obrigatorio
    else {
        printf("Seu voto é obrigatório!\n");
    }
    
    //encerrar programa
    return 0;
}
