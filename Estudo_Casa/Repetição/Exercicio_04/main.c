#include<stdio.h>

int calcular_quadrado(int num){
    int quadrado = num * num;
    return quadrado;

}

int calcular_cubo(int num){
    int cubo = num * num * num;
    return cubo;

}


int main(){
    int num, numero_menu;
    do{
        printf("------MENU------\n");
        printf("1.Para calcular o quadrado\n");
        printf("2.Para calcular o cubo\n");
        printf("3.Para sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &numero_menu);
        if(numero_menu == 1){
            printf("Digite o número que você deseja calcular: ");
            scanf("%d", &num);
            printf("%d\n", calcular_quadrado(num));
        }else if(numero_menu == 2){
            printf("Digite o número que você deseja calcular: ");
            scanf("%d", &num);
            printf("%d\n", calcular_cubo(num));
        }else if(numero_menu == 3){
            printf("até mais :D!\n");
        }else{
            printf("opção inválida digite novamente\n");
        }

    }while(numero_menu != 3);

    
    
    
    
    
    return 0;
}