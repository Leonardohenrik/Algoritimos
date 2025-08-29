#include<stdio.h>

int menu(){
    int opcao = 0;
    while(1){
    printf("=====================\n");
    printf("1) Calcular área do circulo\n ");
    printf("2) Calcular área do retângulo\n");
    printf("3) Calcular área do triângulo\n");
    printf("4) Sair\n");
    printf("======================\n");
    scanf("%d", &opcao);
    if(opcao >= 1 && opcao <= 4){
        return opcao;
    }
    printf("\nValor inválido!\n");
    }
}


float area_circulo(){
    float raio;
    printf("Digite o rair do circulo: ");
    scanf("%f", &raio);
    return 3.14 * raio * raio;
    
}

float area_retangulo(){
    float base, altura;
    printf("Digite a base: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    return base * altura;
}
float area_triangulo(){
    float base, altura;
    printf("Digite a base: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    return (base * altura) / 2;
}

