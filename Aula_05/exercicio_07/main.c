#include<stdio.h>

int f_iter(int n){
    int x = 0;
    if(n == 1){
        return x;
    }
    int y = 1;
    if(n == 2){
        return y;
    }
    int aux;
    for(int i = 0; i < n - 2; i++){
        aux = y;
        y = y + x;
        x = aux;
    }
    return y;
}

int main(){
    int n;
    printf("Digita o valor da posição que você deseja calcular: ");
    scanf("%d", &n);
    printf("%d\n", f_iter(n));
    
    return 0;
}