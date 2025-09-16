#include<stdio.h>

int main(){
    int tamanho = 5;
    int lista[tamanho];

    for(int i = 0;i < tamanho; i++){
        printf("Digite o valor %d: ",i + 1);
        scanf("%d", &lista[i]);
    }
    for(int i = 0;i < tamanho; i++){
        printf("%d ",lista[i]);
    }
    printf("\n");

    return 0;

}
