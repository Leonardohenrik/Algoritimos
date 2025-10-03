#include<stdio.h>

int main(){
    int tamanho = 8;
    int array[tamanho]; 

    for(int i = 0; i < tamanho; i++){
        printf("Digite o %d° número que você deseja armazenar: ", i+1);
        scanf("%d", &array[i]);

    }

    int maior = array[0];
    int menor = array[0];
    int pos_maior = 0, pos_menor = 0;

    for(int i = 0; i < tamanho; i++){
        if(array[i] > maior){
            maior = array[i];
            pos_maior = i;
        }
        if(array[i] < menor){
            menor = array[i];
            pos_menor = i;
        }
    }


    printf("O maior número digitado é o %d e está na posição %d°\n", maior, pos_maior + 1);
    printf("O menor número digitado é o %d e está na posição %d°\n", menor, pos_menor + 1);
    
    
    
    
    return 0;
}