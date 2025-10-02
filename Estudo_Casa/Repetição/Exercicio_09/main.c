#include<stdio.h>

int main(){
    int num;
    int soma = 0, quantidade = 0;
    float media;
    while(1){
        do{
            printf("Digite um número entre 1 e 100 ou 0 para sair: ");
            scanf("%d", &num);

            if(num < 0 || num > 100){

                printf("Número inválido digite novamente\n");
            }

        }while(num < 0 || num >100);
        if(num == 0){
            printf("Você escolheu sair até mais!\n");
            break;
        }
        quantidade = quantidade + 1;
        soma = soma + num;
    }
    if(quantidade > 0){
        media = (float)soma / quantidade;
        printf("A média dos números válidos digitados é de %.2f\n", media);

    }else{
        printf("Nenhum número válido foi digitado!\n");
    }
    
    
    
    return 0;
}