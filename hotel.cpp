#include <stdio.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL,"");
    int opçao1, opçao2, dias, numero, pessoas;
    char nome1, nome2, cidade;
    float valor;;
    printf ("Bem-vindo ao hotel!\n");
    printf ("Insira seu nome:\n");
    scanf ("%s", &nome1);
    printf ("Insira seu último nome:\n");
    scanf ("%s", &nome2);
    printf ("Insira seu número de contato:\n");
    scanf ("%d", &numero);
    printf ("Insira de onde você veio:\n");
    scanf ("%s", &cidade);
    printf ("Quantas pessoas estam no mesmo quarto:\n");
    scanf ("%d", &pessoas);
    printf ("Quantos dias de estadia:\n");
    scanf ("%d", &dias);
    valor = dias * 200.0;
    printf ("O valor total das diárias é %.2f, seu quarto é o 5\n", valor);
    printf ("Deseja chamar o serviço de quarto?:\n");
    printf ("1- Não\n");
    printf ("2- Sim\n");
    scanf ("%d", &opçao1);
    
    
    switch(opçao1){
        case 1:
        printf ("Estamos a disposição!");
        break;
        
        case 2:
        printf ("Qual opçao de serviço? (1-4):\n");
        printf ("1- Travesseiro\n");
        printf ("2- Limpeza\n");
        printf ("3- Roupa de cama\n");
        printf ("4- Lanche\n");
        scanf ("%d", &opçao2);
        
        switch(opçao2){
            case 1:
            printf ("Seu travesseiro sera entregue em breve!");
            break;
            
            case 2:
            printf ("A limpeza sera feita em breve!");
            break;
            
            case 3:
            printf ("Seu pedido sera atendido em breve!");
            break;
            
            case 4:
            printf ("Seu lanche sera entregue em breve!");
            break;
            
            default:
            printf("Erro");
            return 1;
        } 
        break;
        
       default:
       printf ("Opção invalida. Programa encerrado");
       return 1;
    }
    return 0;
}