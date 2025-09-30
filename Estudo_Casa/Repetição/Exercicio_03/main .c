#include<stdio.h>


int main(){
    int n, soma_1 = 0, contador = 1, soma_2 = 0;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        soma_1 = soma_1 + i;

    }
    // o laço for deixa o codigo menor oque facilite a leitura e a interpretação
    while(contador <= n){
        soma_2 = soma_2 + contador;
        contador = contador + 1;
    }
    // o laço while ele necessita de uma variavel de controle e uma linha de codigo a mais

    printf("%d\n", soma_1);
    printf("%d\n", soma_2);
    
    
    
    
    return 0;
}