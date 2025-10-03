#include<stdio.h>

int main(){
    int tamanho = 15;
    int array[tamanho];
    int menu;
    int pares = 0, impares = 0;

    while(1){
        printf("Digite um 1 para iniciar o armazenamento ou 0 para sair!");
        scanf("%d", &menu);

        if(menu == 1){
            for(int i = 0; i < tamanho; i++){
                printf("Digite os 15 valores que você deseja armazenar!: ");
                scanf("%d", &array[i]);
                if(array[i] %2 == 0){
                    pares++;

                }else{
                    impares++;
                }
            }

        }
        
        if(menu == 0){
            printf("Você escolheu sair!\n");
            break;
        }
        printf("A quantidade de números pares é de %d\n", pares);
        printf("A quantidade de números ímpares é de %d\n", impares);

    }
    
    
    
    return 0;
}