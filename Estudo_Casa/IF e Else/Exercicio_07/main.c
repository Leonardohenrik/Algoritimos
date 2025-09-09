#include<stdio.h>

int main(){
    char usuario, senha;

    printf("Digite o usuario: ");
    scanf("%c", &usuario);

    printf("Digite a senha: ");
    scanf("%c", &senha);

    if(usuario == "admin" && senha == "123456"){
        printf("Credenciais corretas!\n");
    }else if(usuario != "admin" && senha == "123456"){
        printf("Usuário incorreto!\n");
    }else if(usuario == "admin" && senha != "123456"){
        printf("Senha incorreta!\n");
    }else{
        printf("Ambos incorretas!\n");
    }
    
    
    
    return 0;




}