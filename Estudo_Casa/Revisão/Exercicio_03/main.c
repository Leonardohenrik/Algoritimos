// Escreva um algoritmo que solicite para o usuário o ano
//  atual e o ano de vencimento de um produto. Mostre uma
//  mensagem dizendo se o produto está vencido e deve ser
//  descartado ou se o produto está dentro da validade e pode
//  ser consumido.

#include<stdio.h>


int main(){
    int ano_atual, ano_vencimento;
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    printf("Digite o ano de vencimento: ");
    scanf("%d", &ano_vencimento);

    if(ano_atual >= ano_vencimento){
        printf("Você deve descartar o produto\n");
    }else{
        printf("Você pode consumir o produto\n");
    }
    
    
    
    return 0;
}