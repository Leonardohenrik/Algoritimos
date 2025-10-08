#include<stdio.h>

int main(){
    int linhas = 5, colunas = 5;
    int matriz[linhas][colunas];

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matriz[i][j] =(i + 1) + (j + 1); 
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j  = 0; j < colunas; j++){
            printf("%3d", matriz[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    
    
    
    
    return 0;
}