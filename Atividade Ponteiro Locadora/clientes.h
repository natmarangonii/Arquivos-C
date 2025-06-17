#ifndef CLIENTES_H
#define CLIENTES_H


typedef struct{
    int ID;
    char Nome[50];
    char Telefone[12];
} Cliente;

void finalizaFuncao();
void cadastrarCliente(Cliente *clientes, int *totalClientes);
void listarClientes(Cliente clientes[], int totalClientes);
void buscarClientePorID(Cliente clientes[], int totalClientes, int idCliente);

#endif