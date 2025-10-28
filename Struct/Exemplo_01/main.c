#include<stdio.h>

int main(){
    typedef struct{
        char nome[50];
        int idade;
        float altura;

    }Pessoa;

    Pessoa p1;

    printf("Digite o nome: ");
    scanf("%s", p1.nome);
    printf("Digite a idade: ");
    scanf("%d", &p1.idade);
    printf("Digite a altura: ");
    scanf("%f", &p1.altura);

    printf("%s você tem %d anos e %.2f de altura\n", p1.nome, p1.idade, p1.altura);

    
    
    
    
    return 0;
}