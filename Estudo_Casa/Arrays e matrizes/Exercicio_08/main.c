#include<stdio.h>

int main(){
    int linhas = 3, colunas = 3;
    int matriz[linhas][colunas];
    int soma = 0;

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Digite o valor da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if(i == j){
                printf("O %d° valor da diagonal é o %d\n", i + 1, matriz[i][j]);
                soma = soma + matriz[i][j];

            }
        }
    }
    printf("A soma dos elementos da diagonal principal é de %d\n", soma);
    
    
    
    
    return 0;
}