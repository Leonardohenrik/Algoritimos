#include<stdio.h>
#include"conversoes.h"


int main(){
    int numero_escolhido;

    do{
        printf("Digite um número para escolher a conversao: 1.(Celsius/Fahrenheit), 2.(metros/quilômetros), 3.(segundos/minutos): ");
        scanf("%d", &numero_escolhido);

        if(numero_escolhido == 1){
            float temperatura_c;
            printf("Digite a temperatura em celsius: ");
            scanf("%f", &temperatura_c);

            printf("A temperatura em Fahrenheit é de: %.1f\n", temperatura(temperatura_c));
        }else if(numero_escolhido == 2){
            float metros;
            printf("Digite a quantidade de metros para a conversão: ");
            scanf("%f", &metros);

            printf("A quantidade de quilômetros é de: %.1f Km(s)\n", km(metros));
        }else if(numero_escolhido == 3){
            int segundos;
            printf("Digite a quantidade de segundos: ");
            scanf("%d", &segundos);

            printf("A quantidade de minuto(s) é de: %d minuto(s)\n", tempo(segundos));
        }else{
            printf("Número inválido!!!\n");
        }
    }while(numero_escolhido < 1 || numero_escolhido > 3);



    
    
    
    return 0;
}