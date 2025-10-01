#include<stdio.h>

int fib(int posicao){
    int a = 0, b = 1;
    if(posicao == 0){
        return a;
    }else if(posicao == 1){
        return b;
    }else{
        return fib(posicao - 1) + fib(posicao - 2);
    }

}

int main(){
    int posicao;
    printf("Digite a posição que você deseja saber o valor correspondente: ");
    scanf("%d", &posicao);

    printf("O valor da posição %d é o %d\n", posicao, fib(posicao));
    
    
    
    
    
    return 0;
}