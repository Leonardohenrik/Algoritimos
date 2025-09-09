#include<stdio.h>

int main(){
    int A, B, soma, sub, multi;
    float div;
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    char operador;

    printf("Digite o operador:(+, -, *, /)\n");
    scanf(" %c", &operador);

    switch(operador){
        case '+':
            soma = A + B;
            printf("A soma dos valores é de: %d\n", soma);
            break;
        case '-':
            sub = A - B;
            printf("A subtração dos valores é de: %d\n", sub);
            break;
        case '*':
            multi = A * B;
            printf("A multiplicação dos valores é de: %d\n", multi);
            break;
        case '/':
            if(B == 0){
                printf("Divisão por zero não existe!\n");
                break;

            }else{
                div = A / B;
                printf("A divisão dos valores é de: %.1f\n", div);
                break;
            }

    }


    
    
    
    return 0;
}