#include<stdio.h>

int main(){
    int linhas = 2, colunas = 2;
    int matriz_1[linhas][colunas], matriz_2[linhas][colunas];
    int iguais = 0;

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Digite o elemento da linha %d e coluna %d da primeira matriz: ", i + 1, j + 1);
            scanf("%d", &matriz_1[i][j]);
        }
    }
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("Digite o elemento da linha %d e coluna %d da segunda matriz: ", i + 1, j + 1);
            scanf("%d", &matriz_2[i][j]);
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%3d",matriz_1[i][j]);
        }
        printf("      ");
        for(int j = 0; j < colunas; j++){
            printf("%3d", matriz_2[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if(matriz_1[i][j] == matriz_2[i][j]){
                iguais++;
            }
        }
    }
    if(iguais == linhas * colunas){
        printf("As matrizes são iguais!\n");
    }else{
        printf("As matrizes são diferentes!\n");
    }





    
    
    
    
    return 0;
}