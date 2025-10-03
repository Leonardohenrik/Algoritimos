#include<stdio.h>

int main(){
    int tamanho = 20, soma = 0;

    int array[tamanho];

    for(int i = 0; i < tamanho; i++){
        printf("Digite o valor que deseja armazenar: ");
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < tamanho; i++){
        if(array[i] %2 == 0){
            soma = soma + array[i];
        }

    }
    printf("A soma dos elementos pares é de %d\n", soma);


    
    
    
    
    return 0;
}