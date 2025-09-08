// 1. Faça um programa que pergunte para o usuário 5 números inteiros e imprima o
// resultado da soma.



#include<stdio.h>

void main(){
    int num_1, num_2, num_3, num_4, num_5, soma;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num_1);
    printf("Digite o segundo valor: ");
    scanf("%d", &num_2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &num_3);
    printf("Digite o quarto valor: ");
    scanf("%d", &num_4);
    printf("Digite o quinto valor: ");
    scanf("%d", &num_5);

    soma = num_1 + num_2 + num_3 + num_4 + num_5;

    printf("O valor da soma dos números é de: %d\n", soma);

}