#include<stdio.h>
#include"numeros.h"

int main(){
    int num_1;
    int num_2;
    int power;
    printf("Digite o número que você deseja testar: ");
    scanf("%d", &num_1);
    printf("Digite o segundo número para testar: ");
    scanf("%d", &num_2);
    printf("Digite o potência a ser calculada: ");
    scanf("%d", &power);

    if(eh_par(num_1)){
        printf("O número %d é par\n", num_1);
    }else{
        printf("O número %d não é par\n", num_1);
    }

    if(eh_primo(num_1)){
        printf("O número %d é primo\n", num_1);
    }else{
        printf("O número %d não é primo\n", num_1);
    }
    
    printf("O fatorial de %d é: %d\n", num_1, fat(num_1));

    printf("O maior número entre %d e %d é: %d\n", num_1, num_2, maior(num_1, num_2));

    printf("O número %d elevado a %d é: %d\n", num_1, power, pot(num_1, power));
    
    
    return 0;
}