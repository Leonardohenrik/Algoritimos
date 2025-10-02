#include<stdio.h>

int main(){
    int linhas;
    printf("Digite a quantidade de linhas que você deseja desenhar: ");
    scanf("%d", &linhas);

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    
    
    
    return 0;
}