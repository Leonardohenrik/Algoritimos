#include<stdio.h>

int main(){
    int num, contador = 0, acumulador = 0;
    while(1){
        do{
            printf("Digite um número: ");
            scanf("%d", &num);
        }while(num < 1 || num > 100);
        if(num  == 0){
            break;
        }
        acumulador = acumulador + num;
        contador = contador + 1;
    }
    printf("A média é %.2f\n", (float)(acumulador / contador));
    
    
    return 0;
}