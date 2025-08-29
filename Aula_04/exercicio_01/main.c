#include<stdio.h>
#include"funcoes.h"

int main(){
    float num_1;
    float num_2;
    printf("Digite o primeiro número: ");
    scanf("%f", &num_1);
    printf("Digite o segundo número: ");
    scanf("%f", &num_2);

    printf("O maior número digitado é o: %.2f\n", maior(num_1, num_2));
    return 0;
}
