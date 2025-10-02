#include<stdio.h>

int collatz(int n){
    if(n == 1){
        return 0;
    }else if(n %2 == 0){
        return 1 + collatz(n / 2);
    }else{
        return 1 + collatz((3 * n) + 1);
    }
}

int main(){
    int num, passos;
    
    

    while(1){
        printf("Digite um número: ");
        scanf("%d", &num);

        if(num <= 0){
            printf("Número inválido digite novamente!.\n");
        }else{
            break;
        }
       
    }
    passos = collatz(num);
    printf("A quantidade de passos necessários foram de: %d\n", passos);
    
    
    
    
    
    return 0;
}