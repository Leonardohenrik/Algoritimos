#include<stdio.h>

int maior(int num_1, int num_2){
    if(num_1 > num_2){
        return num_1;
    }
    else if(num_2 > num_1){
        return num_2;
    }
    printf("Os números são iguais!\n");
    return 0;
        
}
