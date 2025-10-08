#include<stdio.h>

int main(){
    int tamanho = 10;
    int array[tamanho];
    int num, encontrado = 0;

    for(int i = 0; i < tamanho; i++){
        printf("Digite o %d° valor: ", i + 1);
        scanf("%d", &array[i]);

    }
    printf("Digite o número que você deseja procurar: ");
    scanf("%d", &num);
    for(int i = 0; i < tamanho; i++){
        if(num == array[i]){
            printf("Número encontrado! e se encontra na %d° posição\n", i+1);
            encontrado = 1;
            break;
        }
        

    }
    if(encontrado == 0){
        printf("Número não encontrado!\n");
    }
    
    
    
    
    return 0;
}