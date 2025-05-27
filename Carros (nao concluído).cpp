#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Possuir: ID, marca, modelo, ano, valor, combustivel, cor 
//cadastrar veiculos, listar, buscar e filtrar por tipo de comb.

typedef struct {
    char marca [30];
    char modelo [30];
    char cor [30];
    float valor;
    int ano, opçao, id;
    int opçaocomb;
    char comb[10];
} Veiculo;

int carro = 0;
Veiculo veiculo[10];
int encontrou = 0;

void cadastrarVeiculo();
void filtrarCombustivel();
void buscarVeiculo();
void listarVeiculos();
void finalizaFunçao();

int main(){
    
    int opçao;
    do{
    printf ("\n-----Concessionária SESI-----\n");
    printf ("1. Cadastrar veículos\n");
    printf ("2. Lista\n");
    printf ("3. Buscar veículo\n");
    printf ("4. Filtrar por combustível\n");
    printf ("0. Sair\n");
    printf ("Selecione uma opção:\n");
    scanf ("%d", &opçao);
    
    
    switch (opçao){
    case 1:
    cadastrarVeiculo();
    break;
    
    case 2:
    listarVeiculos();
    break;
    
    case 3:
    buscarVeiculo();
    break;
    
    case 4:
    filtrarCombustivel();
    break;
    
    
    case 0:
    printf ("\nObrigado!\n");
    break;
    
    default:
    printf ("\nOpção inválida!\n");
    break;
}
} while (opçao != 0);

return 0;
}

void cadastrarVeiculo(){
    system ("clear");
    printf ("\n-----Novo Veículo-----\n");
    printf ("Marca:\n");
    scanf ("%s", veiculo[carro].marca);
    
    printf ("ID:\n");
    scanf ("%d", &veiculo[carro].id);
    
    printf ("Modelo:\n");
    scanf ("%s", veiculo[carro].modelo);
    
    printf ("Valor:\n");
    scanf ("%f", &veiculo[carro].valor);
    
    printf ("Cor:\n");
    scanf ("%s", veiculo[carro].cor);
    
    printf ("Ano:\n");
    scanf ("%d", &veiculo[carro].ano);
    
    printf ("Escolha o combustível:\n");
    printf ("1. Gasolina\n");
    printf ("2. Etanol\n");
    printf ("3. Disel\n");
    printf ("4. Alcool\n");
    scanf ("%d", &veiculo[carro].opçaocomb);
    carro++;
    finalizaFunçao();
}

void listarVeiculos(){
    system ("clear");
    printf ("\n-----Listar-----\n");
    for (int i = 0; i < carro; i++){
        printf ("ID do veículo: %d\n", i+1);
        printf ("Marca: %s\n", veiculo[i].marca);
        printf ("Modelo: %s\n", veiculo[1].modelo);
        printf ("Valor: %.2f\n", veiculo[i].valor);
        printf ("Ano: %d\n", veiculo[i].ano);
        printf ("Cor: %s\n", veiculo[i].cor);
        printf ("Combustível: %d\n", veiculo[i].opçaocomb);
        printf ("\n--------------------\n");
    }
    finalizaFunçao();}

void buscarVeiculo(){
    int idbusca;
    
    system ("clear");
    printf("-----Buscar Veículo-----\n");
    printf("Informe o ID que deseja buscar:\n");
    scanf("%d", &idbusca);
    
    for (int i = 0; i < idbusca; i++) {
        if (veiculo[i].id == idbusca) {
            printf("Veiculo encontrado:\n");
            printf("ID: %d\n", veiculo[i].id);
            printf("Marca: %s\n", veiculo[i].marca);
            printf("Modelo: %s\n", veiculo[i].modelo);
            printf("Ano: %d\n", veiculo[i].ano);
            printf("Valor: %.2f\n", veiculo[i].valor);
            printf("Combustível: %s\n", veiculo[i].comb);
            printf("Cor: %s\n", veiculo[i].cor);
            encontrou = 1;}
        
        if(encontrou!= 1){
        printf("Veiculo não encontrado.\n");
        break;
        }
        
    finalizaFunçao();}
    }

void filtrarCombustivel(){
    
}

    
void finalizaFunçao(){
    printf ("Enter para continuar...");
    
    getchar();
    getchar();
    system ("clear");
}

