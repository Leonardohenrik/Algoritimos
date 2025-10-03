#include<stdio.h>


int main(){
    int linha = 3, coluna = 3;
    int soma = 0;

    int matriz[linha][coluna];

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("Digite o valor que deseja armazenar: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("%d", matriz[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            soma = soma + matriz[i][j];
            

        }
        
    }
    printf("A soma de todos os elementos da matriz é de %d\n", soma);

    return 0;
}