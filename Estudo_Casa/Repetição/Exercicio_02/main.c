#include<stdio.h>

int main(){
    int i = 5;

    // i tem o valor inicial de 5 mas depois do primeiro printf passa a ter o valor de 6
    printf("%d\n", i++);

    printf("%d\n", ++i);
    // neste segundo caso o i tera o valor de 7 porque ele incremente primeiro para depois imprimir o valor de i
    
    
    return 0;
}