#include<stdio.h>

int media(float nota_1, float nota_2, float nota_3){
    float media = (nota_1 + nota_2 + nota_3) / 3;

    if(media >= 7){
        printf("Você foi aprovado!\n");
        return 0;

    }
    else if(media >= 5 || media < 7){
        printf("Você ficou de recuperação!\n");
        return 0;
    }
    else{
        printf("Voce foi reprovado!\n");
        return 0;
    }
    return 0;
}
