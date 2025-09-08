#include<stdio.h>
#include"calculadora.h"

int main(){
    float num_1, num_2;
    printf("Digita o valor de a: ");
    scanf("%f", &num_1);
    printf("Digite o valor de b: ");
    scanf("%f", &num_2);

    printf("A soma de a e b é de: %.1f\n", somar(num_1, num_2));
    printf("A subtração de a e b é de: %.1f\n", subtrair(num_1, num_2));
    printf("A multiplicação de a e b é de: %.1f\n", multiplicar(num_1, num_2));
    if(num_2 != 0){
        printf("A divisão de a e b é de: %.1f\n", dividir(num_1, num_2));
    }else{
        printf("Divisão por zero não existe!!!!\n");
    }

    return 0;


}