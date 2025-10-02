#include<stdio.h>

int main(){
    int tamanho = 5;
    int arranjo[tamanho];

    for(int i = 0; i < tamanho; i++){
        printf("Digite os valor que você deseja armazenar: ");
        scanf("%d", &arranjo[i]);

    }
    for(int i = 0; i < tamanho; i++){
        printf("%d\n", arranjo[i]);
    }


    
    
    
    
    
    return 0;
}