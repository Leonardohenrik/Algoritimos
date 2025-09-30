#include<stdio.h>

int potencia(int base, int expoente){
    if( expoente == 0){
        return 1;
    }else{
        return base * potencia(base, expoente - 1);
    }

}

int main(){
    int base, expoente;
    
    printf("Digite o número que você deseja calcular: ");
    scanf("%d", &base);

    printf("Digite qual número você deseja elevar: ");
    scanf("%d", &expoente);

    printf("%d\n", potencia(base, expoente));

    
    
    
    
    
    return 0;
}