// 2. Faça o mesmo usando números de ponto flutuante.


#include<stdio.h>

void main(){
    float num_1, num_2, num_3, num_4, num_5, soma;

    printf("Digite o primeiro número: ");
    scanf("%f", &num_1);
    printf("Digite o segundo número: ");
    scanf("%f", &num_2);
    printf("Digite o terceiro número: ");
    scanf("%f", &num_3);
    printf("Digite o quarto número: ");
    scanf("%f", &num_4);
    printf("Digite o quinto número: ");
    scanf("%f", &num_5);

    soma = num_1 + num_2 + num_3 + num_4 + num_5;

    printf("A soma dos número é de: %.2f\n", soma);

}