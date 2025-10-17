#include<stdio.h>
#include<stdlib.h>

int main(){
    int x = 10;
    int *ptr = &x;
    printf("Valor de x: %d\n", x);
    printf("Valor apontado por ptr: %d\n", *ptr);
    printf("Valor armazenado em ptr: %lu\n", ptr);
    printf("Endereço de x na memoria: %lu\n", &x);
    printf("Endereço de ptr na memoria: %lu\n", &ptr);
    
    
    
    
    return 0;
}