//bibliotecas
#include <stdio.h>
#include <stdlib.h>

//inicio
int main(){
   
//declarar as variáveis    
    float n[10], maior;
    int i;
   
//laço de repetição para pegar os números ate 10
    for (i = 0; i < 10; i ++){
       
//"printf" para pedir os números, "scanf" para guardar e "i + 1" para ir aumentando o número de 1 em 1
        printf("Informe o %d número: ", i + 1);
        scanf("%f", &n[i]);
    }
   
//para limpar o código
    system ("clear");

//definir a variável "maior" com o valor do primeiro número informado
    maior = n[0];
   
//laço de repetição para fazer a verificação de qual número é maior até chegar em 10    
    for (i = 1; i < 10; i++){
       
//compara o número guardado na variável "maior" com outro e se for maior o valor na variável é substituido
        if (n[i] > maior){
                maior = n[i];
            }
    }

//"printf" para exibir o resultado
    printf("O maior número informado é: %.2f", maior);
   
//para encerrar o programa    
    return 0;
}
