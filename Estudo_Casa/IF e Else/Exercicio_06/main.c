#include<stdio.h>


int main(){
    int A, B, C;
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);

    if(A > B && A > C){
        if(B > C){
            printf("O maior valor é %d e o menor valor é  %d\n", A, C);
        }else{
            printf("O maior valor é %d e o menor valor é  %d\n", A, B);
        }

    }else if(B > A && B > C){
        if(A > C){
            printf("O maior valor é  %d e o menor valor é  %d\n", B, A);
        }else{
        printf("O maior valor é  %d e o menor valor é  %d\n", B, C);
        }
    }else{
        if(A > B){
            printf("O maior valor é  %d e o menor valor é  %d\n", C, B);
        }else{
            printf("O maior valor é  %d e o menor valor é  %d\n", C, A);
        }
    }

    
    
    return 0;
}