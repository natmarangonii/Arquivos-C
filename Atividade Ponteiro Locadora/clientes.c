#include <stdio.h>
#include <stdlib.h>

#include "clientes.h"

void finalizaFuncao(){
    printf("Enter para continuar...");
    getchar();   
    getchar();
    system("clear");
}

void cadastrarCliente(Cliente *clientes, int *totalClientes){
    system ("clear");
    printf("---- Cadastrar Cliente ----\n");
    printf("Informe seu nome: ");
    scanf(" %[^\n]", clientes->Nome);
    printf("Informe seu ID: ");
    scanf("%d", &clientes->ID);
    printf("Informe seu telefone: ");
    scanf(" %[^\n]", clientes->Telefone);
    *totalClientes = *totalClientes + 1;
    finalizaFuncao();
}

void listarClientes(Cliente clientes[], int totalClientes){
    system ("clear");
    printf("---- Listar Clientes ----\n");
    for (int i = 0; i < totalClientes; i++){
        printf("Nome: %s\n", clientes[i].Nome);
        printf("ID: %d\n", clientes[i].ID);
        printf("Telefone: %s\n", clientes[i].Telefone);
        printf("-----------------------------\n");
    }
    finalizaFuncao();
}

void buscarClientePorID(Cliente *clientes, int totalClientes, int ID){
    int i, encontrou = 0;
    system ("clear");
    printf("---- Buscar Cliente ----\n");
    for (int i = 0; i < totalClientes; i ++){
        if (clientes[i].ID == ID){
            printf("Nome: %s\n", clientes[i].Nome);
            printf("ID: %d\n", clientes[i].ID);
            printf("Telefone: %s\n", clientes[i].Telefone);
            encontrou = 1;
            break;
        }
    }
    if (encontrou == 0){
        printf("Cliente não encontrado! :(\n");
    }
    finalizaFuncao();
}