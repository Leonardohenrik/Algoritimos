#include<stdio.h>

int main(){
    int tamanho = 10, soma = 0, positivos = 0;
    int array[tamanho];

    for(int i = 0; i < tamanho; i++){
        printf("Digite os números que você deseja armazenar: ");
        scanf("%d", &array[i]);
    }
    for(int i = 0; i < tamanho; i++){
        soma = soma + array[i];

        if(array[i] > 0){
            positivos = positivos + 1;
        }
    }

    printf("A soma de todos os números que você armazenou é de %d\n", soma);
    printf("A quantidade de números positivos armazenados é de %d\n", positivos);



    
    
    
    return 0;
}