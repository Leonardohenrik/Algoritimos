#include<stdio.h>


int fat(int n){
    if(n == 1){
        return 1;
    }else{
        return n * fat(n - 1);
    }
}

int main(){
    int num;
    printf("Digite o número que você deseja calcular o fatorial: ");
    scanf("%d", &num);

    printf("O fatorial do número digitado é de %d", fat(num));
    
    
    
    
    
    return 0;
}