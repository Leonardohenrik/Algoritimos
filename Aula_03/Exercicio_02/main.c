#include<stdio.h>
#include"funcoes.h"

int main(){
    float nota_1;
    float nota_2;
    float nota_3;
    printf("Digite o valor da 1° nota: ");
    scanf("%f", &nota_1);
    printf("Digite o valor da 2° nota: ");
    scanf("%f", &nota_2);
    printf("Digite o valor da 3° nota: ");
    scanf("%f", &nota_3);
    printf("%f\n", media(nota_1, nota_2, nota_3));

    return 0;
}