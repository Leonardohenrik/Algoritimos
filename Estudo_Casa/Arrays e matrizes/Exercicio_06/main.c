#include<stdio.h>

int main(){
    int linhas = 3, colunas = 3;
    int matriz[linhas][colunas];

    for(int i  = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Digite o valor da linha %d e coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);

        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d", matriz[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    
    
    
    
    return 0;
}