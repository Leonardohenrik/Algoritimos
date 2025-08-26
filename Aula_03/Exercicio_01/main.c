#include<stdio.h>
#include"funcoes.h"

int main(){
   int num_1;
   int num_2;
   printf("Digite o valor de num_1: ");
   scanf("%d", &num_1);
   printf("Digite o valor de num_2: ");
   scanf("%d", &num_2);
   printf("%d\n", maior(num_1, num_2));
   return 0;
}



