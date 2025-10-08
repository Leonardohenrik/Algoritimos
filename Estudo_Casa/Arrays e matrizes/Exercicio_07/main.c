#include<stdio.h>

int main(){
    int linhas = 4, colunas = 4;
    int matriz[linhas][colunas];
    int soma_linha = 0, soma_coluna = 0;

    for(int i = 0; i < linhas; i++){
        for(int j  = 0; j < colunas; j++){
            printf("Digite o valor da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(int i = 0; i < linhas; i++){
        for( int j = 0; j < colunas; j++){
            soma_linha = soma_linha + matriz[i][j];

        }
        printf("A soma dos elementos da %d° linha é de %d\n", i + 1, soma_linha);
        soma_linha = 0;
    }
    for(int j = 0; j < colunas; j++){
        for(int i = 0; i < linhas; i++){
            soma_coluna = soma_coluna + matriz[i][j];
        }
        printf("A soma dos elementos da %d° coluna é de %d\n", j + 1, soma_coluna);
        soma_coluna = 0;
    }
    
    
    
    
    
    return 0;
}