#include<stdio.h>

int main(){
    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    int maior_18 = (idade >= 18)? 1:0;

    if(maior_18 == 1){
        printf("Você é maior de idade!\n");
    }else{
        printf("Você não é maior de idade!\n");
    }
    
    
    
    
    return 0;
}