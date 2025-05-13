//biblioteca
#include <stdio.h>
#include <locale.h>

//inicio, informar variaveis
int main(){
    int i, num, resp;
    
//pedir ao usuario o numero e guardar   
    printf("Informe um número (1-10):\n");
    scanf("%d", &num);
    
//laço de repetiçao para repetir ate que seja feita a tabuada
    for (i = 1; i <= 10; i ++){
 
//operação
    resp = num * i;
    
//mostrar ao usuario a tabuada    
    printf("%d X %d = %d\n", num, i, resp);
}
    //encerrar programa
    return 0;
}
