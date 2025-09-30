#include<stdio.h>


int main(){
    int base, expoente;
    int resultado = 1;

    printf("Digite o número que você deseja calcular a potência: ");
    scanf("%d", &base);

    printf("Digite qual expoente você deseja elevar esse número: ");
    scanf("%d", &expoente);

    for(int i = 1; i <= expoente; i++){
        resultado = resultado * base;
        
    }

    printf("%d\n", resultado);

    
    
    
    return 0;
}