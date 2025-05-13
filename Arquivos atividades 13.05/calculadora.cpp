//biblioteca
#include <locale.h>
#include <stdio.h>

//definir variáveis 
int main(){
    float num1, num2, resp;
    int opçao;
    
    //pedir ao usuario dois numeros
    printf ("Informe dois numeros:\n");
    scanf ("%f %f", &num1, &num2);
    
    //pedir ao usuario a operação
    printf ("Escolha a operação:\n");
    printf ("1. Adiçao\n");
    printf ("2. Subtraçao\n");
    printf ("3. Divisao\n");
    printf ("4. Multiplicaçao\n");
    scanf ("%d", &opçao);
    
    //estrutura de Escolha
    switch (opçao){
        
        //caso escolha adiçao
        case 1: 
        printf ("Voce escolheu Adição!\n");
        resp = num1 + num2;
        printf ("Resposta: %.2f\n", resp);
        break;
        
        //caso escolha subtração
        case 2: 
        printf ("Voce escolheu Subtração!\n");
        resp = num1 - num2;
        printf ("Resposta: %.2f\n", resp);
        break;
        
        //caso escolha divisão
        case 3: 
        printf ("Voce escolheu Divisão!\n");
        resp = num1 / num2;
        printf ("Resposta: %.2f\n", resp);
        break;
        
        //caso escolha Multiplicação
        case 4: 
        printf ("Voce escolheu Multiplicação!\n");
        resp = num1 * num2;
        printf ("Resposta: %.2f\n", resp);
        break;
        
        //encerar switch
        return 1;
    }
    
    //encerar programa
    return 0;
}