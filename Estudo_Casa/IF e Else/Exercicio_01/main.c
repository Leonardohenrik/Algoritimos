// Escreva um programa que leia dois números inteiros e
//  determine qual é o maior usando apenas operadores de
//  comparação. Se os números forem iguais, exiba uma
//  mensagem apropriada.


#include<stdio.h>

int main(){
    int a, b;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    if(a > b){
        printf("O maior valor é o: %d\n", a);
    }else if(b > a){
        printf("O maior valor é o: %d\n", b);
    }else{
        printf("Os valores são iguais!\n");
    }
    
    
    
    return 0;
}