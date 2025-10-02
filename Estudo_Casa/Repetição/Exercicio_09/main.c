#include<stdio.h>

int main(){
    int num;
    int resultado = 0, numeros_validos = 0;
    float media;

    do{
        printf("Digite números inteiros que você deseja testar ou 0 para sair: ");
        scanf("%d", &num);
        if(num == 0){
            printf("Saindo do programa!\n");

        }else if(num < 1 || num > 100){
            printf("Número inválido digite novamente: \n");
        }else{
            resultado = resultado + num;
            numeros_validos = numeros_validos + 1;
        }

    }while(num != 0);
    if(numeros_validos > 0){
        media = resultado / numeros_validos;
        printf("A média dos números válidos digitados de 1 a 100 é de: %.2f\n", media);

    }else{
        printf("Nenhum números válido foi digitado\n");
    }

    
    
    return 0;
}