#include <stdio.h>
#include <stdlib.h>

//definir variaveis
typedef struct {
    char produto [30];
    float valor;
    int quantidade;
} Venda;

//variavel global, acessa em diferentes funçoes
int numvendas=0;
Venda vendas[10];

//cadastrar vendas
//faturamento total
//media de quantidade

//tipo da funçao e nome da funçao (parametros)
void cadastrarVenda();
void calcularFaturamento();
void mediaQuantidadeVendida();
void listarVendas();
void finalizaFunçao();

int main(){
    
    int opçao;
    do{
    //menu
    printf ("\n-----Mercadão SENAI-----\n");
    printf ("1. Registrar venda\n");
    printf ("2. Relatório de vendas\n");
    printf ("3. Calcular faturamento\n");
    printf ("4. Media de quantidade de vendas\n");
    printf ("0. Sair\n");
    printf ("Selecione uma opção:\n");
    scanf ("%d", &opçao);


switch (opçao){
    //cadastrar as vendas
    case 1:
    cadastrarVenda();
    break;
    
    case 2:
    listarVendas();
    break;
    
    case 3:
    calcularFaturamento();
    break;
    
    case 4:
    mediaQuantidadeVendida();
    break;
    
    
    case 0:
    printf ("\nObrigado!\n");
    break;
    
    default:
    printf ("\nOpção inválida!\n");
    break;
    
    return 1;
}
} while (opçao != 0);

return 0;
}
//para cadastrar as vendas
void cadastrarVenda(){
    system ("clear");
    printf ("\n-----Nova Venda-----\n");
    printf ("Produto:\n");
    scanf ("%s", vendas[numvendas].produto);
    
    printf ("Valor unitário:\n");
    scanf ("%f", &vendas[numvendas].valor);
    
    printf ("Quantidade:\n");
    scanf ("%d", &vendas[numvendas].quantidade);
    numvendas++;
    finalizaFunçao();
}

//para listar as vendas
void listarVendas(){
    system ("clear");
    printf ("\n-----Minhas Vendas-----\n");
    for (int i = 0; i < numvendas; i++){
        printf ("Numero da venda: %d\n", i+1);
        printf ("Produto: %s\n", vendas[i].produto);
        printf ("Valor unitário: %.2f\n", vendas[i].valor);
        printf ("Quantidade: %d\n", vendas[i].quantidade);
        printf ("\n--------------------\n");
    }
    finalizaFunçao();}

//para calcular o faturamento
void calcularFaturamento(){
    system ("clear");
    printf ("\n-----Meu faturamento-----\n");
    
    float faturamento = 0;
    for (int i = 0; i < numvendas; i++){
        faturamento += (vendas[i].valor * vendas[i].quantidade);
    }
    printf ("Faturamento R$ %.2f\n", faturamento);
    finalizaFunçao();
}

//calcular a media das quantidades
void mediaQuantidadeVendida(){
    system ("clear");
    printf ("\n-----Media da Quantidade de Vendas-----\n");
    
    float media = 0;
    int contagem = 0;
    for (int i = 0; i< numvendas; i++){
        contagem += vendas[i].quantidade;
    }
    media = contagem / numvendas;
    printf ("Media da quantidade: %.2f\n", media);
    finalizaFunçao();
}

//para cada finalizaçao das funçoes
void finalizaFunçao(){
    printf ("Enter para continuar...");
    
    //memoria vazia para avançar
    getchar();
    getchar();
    
    //limpar programa
    system ("clear");
}








