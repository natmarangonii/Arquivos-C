#ifndef LOCACOES_H
#define LOCACOES_H


typedef struct{
   int idCliente;
   char Filme[50];
   char Data[12];
} Locacao;

void realizarLocacao(Locacao *locacoes, int *totalLocacoes, Cliente clientes[], int totalClientes);
void listarLocacoes(Locacao locacoes[], int totalLocacoes);
void buscarLocacoesPorCliente(Locacao locacoes[], int totalLocacoes, int idCliente);

#endif