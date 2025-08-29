#include<stdio.h>


float maior(float num_1, float num_2){
    if(num_1 > num_2){
        return num_1;
    }else if(num_2 > num_1){
        return num_2;

    }else{
        printf("Os números são iguais!\n");
        return num_1;
    }
    


}