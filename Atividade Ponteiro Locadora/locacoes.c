#include <stdlib.h>
#include <stdio.h>
#include "clientes.h"
#include "locacoes.h"
void realizarLocacao(Locacao *locacoes, int *totalLocacoes, Cliente clientes[], int totalClientes){
   system ("clear");
   printf("---- Realizar Locação ----\n");
   printf("Informe o ID do cliente: ");
   scanf("%d", &locacoes->idCliente);
   printf("Informe o filme: ");
   scanf(" %[^\n]", locacoes->Filme);
   printf("Informe a data: ");
   scanf(" %[^\n]", locacoes->Data);
   *totalLocacoes = *totalLocacoes + 1;
   finalizaFuncao();
}

void listarLocacoes(Locacao locacoes[], int totalLocacoes){
    system ("clear");
    printf("---- Listar Locações ----\n");
    for (int i = 0; i < totalLocacoes; i++){
        printf("ID: %d\n", locacoes[i].idCliente);
        printf("Filme: %s\n", locacoes[i].Filme);
        printf("Data: %s\n", locacoes[i].Data);
        printf("-----------------------------\n");
    }
    finalizaFuncao();
}

void buscarLocacoesPorCliente(Locacao locacoes[], int totalLocacoes, int idClientes){
    int encontrou = 0;
    system ("clear");
    printf("---- Buscar Locações ----\n");
    for (int i = 0; i < totalLocacoes; i ++){
           if (locacoes[i].idCliente == idClientes){
            printf("ID: %d\n", locacoes[i].idCliente);
            printf("Filme: %s\n", locacoes[i].Filme);
            printf("Data: %s\n", locacoes[i].Data);
            encontrou = 1;
           }
        
    }
    if (encontrou == 0){
        printf("Cliente não encontrado! :(\n");
       
    }
    finalizaFuncao();
}