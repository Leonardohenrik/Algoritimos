#include<stdio.h>

int main(){
    float nota_1, nota_2, nota_3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota_1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota_2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota_3);

    media = (nota_1 + nota_2 + nota_3) / 3;

    if(media >= 7){
        printf("Parabéns você foi aprovado!\n");
    }else if(media >=5 && media < 7){
        printf("Você ficou de recuperação!\n");
    }else{
        printf("Você foi reprovado!\n");
    }

    
    
    
    
    return 0;
}