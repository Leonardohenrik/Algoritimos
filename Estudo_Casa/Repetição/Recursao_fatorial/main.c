#include<stdio.h>


int fat(int n){
    if(n == 1 || n == 0){
        return 1;
    }else{
        return n * fat(n - 1);
    }
}

int main(){
    int num;
    printf("Digite o número que você deseja calcular o fatorial: ");
    scanf("%d", &num);

    if(num < 0){
        printf("Não existe fatorial de número negativo!\n");
    }else{
        printf("O fatorial do número digitado é de %d\n", fat(num));

    }
    
    return 0;
}