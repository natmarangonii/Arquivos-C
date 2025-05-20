#include <stdio.h>

//tipo da funçao e nome da funçao (parametros)
int somar(int v1, int v2);
void somarSemRetorno(int v1, int v2);
int subtrai (int v1, int v2);
float dividir (float v1, float v2);
void multiplica (int v1, int v2);
int menu();
void media (float v1, float v2); 

int main(){
    
    int a, b, opçao;
    //repetir ate selecionar um numero especifico
    do{
    opçao = menu();
    switch (opçao){
        //soma
        case 1:
        printf ("Informe os numeros:\n");
        scanf ("%d %d", &a, &b);
        printf ("Resultado da soma: %d\n", somar(a, b));
        break;
        
        //subtraçao
        case 2: 
        printf ("Informe os numeros:\n");
        scanf ("%d %d", &a, &b);
        printf ("Resultado da subtração: %d", subtrai(a, b));
        break;
        
        //divisao
        case 3:
        printf ("Informe os numeros:\n");
        scanf ("%d %d", &a, &b);
        printf("Resultado da divisão: %.2f\n", dividir(a, b));
        
        //multiplicaçao
        case 4:
        printf ("Informe os numeros:\n");
        scanf ("%d %d", &a, &b);
        multiplica (a, b);
        break;
        
        //media
        case 5: 
        printf ("Informe os numeros:\n");
        scanf ("%.2f %.2f", &a, &b);
        media (a, b);
        
    }
} while (opçao != 0);
    
    //encerrar programa
    return 0;
    
    }
    
    //funçao da soma
    int somar(int v1, int v2){
    int res = v1 + v2;
    return res;
    }
    
    //conclusao dentro do proprio codigo
    void somarSemRetorno(int v1, int v2){
        int res = v1 + v2;
        printf ("resultado = %d\n", res);
    }
    
    //funçao da subtraçao
    int subtrai (int v1, int v2){
        int res = v1 - v2;
        return res;
    }
    
    //funçao da divisao
    float dividir (float v1, float v2){
        int res = v1/v2;
        return res;
    }
    
    //conclusao dentro do proprio codigo, funçao multiplicaçao
    void multiplica (int v1, int v2){
        int res = v1 * v2;
        printf ("Resultado da multiplicaçao: %d", res);
    }
    
    //funçao da media 
    void media (float v1, float v2){
        int res = (v1 + v2)/2;
        printf ("Resultado da media: %.2f", res);
    }
    
    //seleçao da opçao
    int menu (){
    int opçao;
    printf ("\n1. Soma\n");
    printf ("2. Subtraçao\n");
    printf ("3. Divisao\n");
    printf ("4. Multiplicaçao\n");
    printf ("5. Media\n");
    printf ("0. Sair\n");
    printf ("informe a operaçao:\n");
    scanf ("%d", &opçao);
    return opçao;
    }
    
    
    
    
    
    
    
    
    
