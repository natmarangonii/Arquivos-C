#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome [30];
    char cidade [20];
    int dias, numero, pessoas, cpf;
    char feedback[50];
    float valor;
    char pagamento [10];
} Cadastro;
    
int numCadastro = 0;
Cadastro cadastro [10];

void cadastroCliente();
void finalizaFunçao();
void chamarServiço();
void pagarAluguel();
void alugarQuarto();
void darFeedback();
void listarCadastro();

int main(){
    int opçao1, dias, valor; 
    
    do{
        printf ("\n---- Bem-vindo ao hotel! ----\n");
        printf ("Selecione a opção desejada:\n");
        printf ("1. Cadastro\n");
        printf ("2. Alugar quarto\n");
        printf ("3. Chamar Serviço de Quarto\n");
        printf ("4. Pagamento\n");
        printf ("5. Feedbak\n");
        printf ("6. Listar Cadastros\n");
        printf ("0. Sair\n");
        scanf ("%d", &opçao1);
            
        switch (opçao1){
            case 1:
                cadastroCliente();
                break;
            
            case 2:
                alugarQuarto();
                break;
            
            case 3:
                chamarServiço();
                break;
            
            case 4:
            pagarAluguel();
            break;
            
            case 5:
            darFeedback();
            break;
            
            case 6:
            listarCadastro();
            break;
            
            case 0:
            printf ("\nObrigado!\n");
            break;
            
            default:
            printf ("\nOpção inválida!\n");
            break;
        
        }
    }while (opçao1 != 0);
    
    return 0;
    
}
        
void cadastroCliente(){
    system ("clear");
    printf ("---- Cadastro ----\n");
    
    printf ("Insira seu nome:\n");
    scanf (" %[^\n]", cadastro[numCadastro].nome);
    
    printf ("Insira seu número de contato:\n");
    scanf ("%d", &cadastro[numCadastro].numero);
    
    printf ("Insira seu CPF:\n");
    scanf ("%d", &cadastro[numCadastro].cpf);
    
    printf ("Insira de onde você veio:\n");
    scanf ("%s", cadastro[numCadastro].cidade);
    
    printf ("Quantas pessoas estam no mesmo quarto:\n");
    scanf ("%d", &cadastro[numCadastro].pessoas);
    
    printf ("Quantos dias de estadia:\n");
    scanf ("%d", &cadastro[numCadastro].dias);
    
    numCadastro++;
    finalizaFunçao();
}        
    
void alugarQuarto(){
    system ("clear");
    int opçao2;
    printf ("---- Alugar um Quarto ----\n");
    printf ("Escolha o quarto desejado (Todos são 150,00 a diária):\n");
    
    printf ("Quarto 1: Cama de Solteiro\n");
    printf ("Quarto 2: Cama de solteiro + geladeira\n");
    printf ("Quarto 3: Cama de casal\n");
    printf ("Quarto 4: Cama de casal + geladeira\n");
    printf ("Quarto 5: Cama de casal + Cama de Solteiro\n");
    printf ("Quarto 5: Cama de casal + Cama de Solteiro + Geladeira\n");
    scanf ("%d", &opçao2);
    
    printf ("Seu Quarto é o Quarto %d\n", opçao2);
    finalizaFunçao();
}    
    
void chamarServiço(){
    int opçao3, opçao4, quarto;
    system ("clear");
    printf ("---- Chamar Serviço ----\n");
    
    printf ("O que podemos ajudar?\n");
    printf ("1. Limpar quarto\n");
    printf ("2. Limpar banheiro\n");
    printf ("3. Comida\n");
    scanf ("%d", &opçao3);
    
    switch (opçao3){
        case 1: 
        printf ("informe seu quarto:\n");
        scanf ("%d", &quarto);
        printf ("Iremos em 30min\n");
        break;
        
        case 2:
        printf ("informe seu quarto:\n");
        scanf ("%d", &quarto);
        printf ("Iremos em 30min\n");
        
        case 3:
        printf ("Escolha a opção desejada:\n");
        printf ("1. Sanduíche\n");
        printf ("2. Suco\n");
        printf ("3. Salgado\n");
        printf ("4. Água\n");
        scanf ("%d", &opçao4);
        break;
        
    }
    finalizaFunçao();
}      
      
void pagarAluguel(){
    int codigo = 0;
    printf("Número do cadastro: ");
    scanf("%d", &codigo);
    cadastro[codigo-1].valor = cadastro[codigo-1].dias * 150.00;
    printf("O valor de sua hospedagem é de: %.2f \n", cadastro[codigo-1].valor);
    printf("Informe a forma de pagamento: ");
    scanf(" %[^\n]", cadastro[codigo-1].pagamento);
    printf ("Pagamento Concluído!");
    finalizaFunçao();
}

      
      
void darFeedback(){
    system ("clear");
    printf ("---- Feedback ----\n");
    printf ("Nos deêm um feedback sobre nosso atendimento:\n");
    scanf (" %[^\n]", cadastro[numCadastro].feedback);
    printf ("Obrigada pelo retorno! :)\n");
    finalizaFunçao();
}      
      
void listarCadastro(){
    system ("clear");
    printf ("\n---- Listar Cadastros ----\n");
    for (int i = 0; i < numCadastro; i++){
        printf ("Nome: %s\n", cadastro[i].nome);
        printf ("CPF: %d\n", cadastro[i].cpf);
        printf ("\n--------------------\n");
    }
    finalizaFunçao();}
     

void finalizaFunçao(){
    printf ("Enter para continuar...");
    
    getchar();
    getchar();
    system ("clear");
}    
        

    

