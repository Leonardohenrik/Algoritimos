#include<stdio.h>

int main(){
    int tamanho = 8, maior = 0, pos_maior, menor = 1000, pos_menor;
    int array[tamanho];
    for(int i = 0;i < tamanho;i++){
        printf("Digite um número: ");
        scanf("%d", &array[i]);
        if(array[i] < menor){
            menor = array[i];
            pos_menor = i;
        }
        if(array[i] > maior){
            maior = array[i];
            pos_maior = i;
        }

    }
    for(int i = 0; i < tamanho; i++){
        printf("%d\t", array[i]);
    }
    printf("\nmaior: %d\nposição: %d\nmenor: %d\nposição: %d\n",maior, pos_maior, menor, pos_menor);
    
    
    
    
    
    return 0;
}