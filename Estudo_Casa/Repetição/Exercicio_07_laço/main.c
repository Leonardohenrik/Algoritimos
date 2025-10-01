#include<stdio.h>

int main(){

    int posicao, resultado = 0;
    printf("Digite a posição que voce deseja saber da sequência de fibonacci: ");
    scanf("%d", &posicao);

    int a = 0, b = 1;

    if(posicao == 0){
        resultado = a;
        printf("A posição %d corresponde ao valor de %d\n", posicao, resultado);
    }else if(posicao == 1){
        resultado = b;
        printf("A posição %d corresponde ao valor de %d\n", posicao, resultado);
    }else{
        for(int i = 2; i <= posicao; i++){
        resultado = a + b;
        a = b;
        b = resultado;
        
    }
    printf("A posição %d corresponde ao valor de %d\n", posicao, resultado);





    }
    
    
    
    
    
    return 0;
}