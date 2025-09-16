#include<stdio.h>

int main(){
    int tamanho = 10;
    int lista[tamanho];
    int soma = 0;
    int positivos[tamanho];

    for(int i = 0;i < tamanho;i++){
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &lista[i]);
        soma = soma + lista[i];
    }
    printf("%d\n", soma);
    printf("%d", positivos[tamanho]);

    
    
    
    return 0;







}