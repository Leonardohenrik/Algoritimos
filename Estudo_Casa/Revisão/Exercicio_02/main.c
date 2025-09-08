// Escreva um algoritmo que solicite para o usuário o
//  horário atual (hora, minuto e segundo). Depois, calcule
//  e mostre quantos segundos se passaram desde as 00:00:00 e
//  quantos segundos faltam até a meia noite.


#include<stdio.h>


int main(){
    int hora_atual, minuto_atual, segundo_atual, horario_segundos, pos_meia_noite, meia_noite, falta_para_meia_noite;

    printf("Digite a hora atual: ");
    scanf("%d", &hora_atual);
    printf("Digite o minuto atual: ");
    scanf("%d", &minuto_atual);
    printf("Digite o segundo atual: ");
    scanf("%d", &segundo_atual);

    horario_segundos = (hora_atual * 60 * 60) + (minuto_atual * 60) + segundo_atual;
    pos_meia_noite = horario_segundos;

    meia_noite = 24 * 60 * 60;

    falta_para_meia_noite = meia_noite - pos_meia_noite;

    printf("Se passaram depois da meia noite %d segundos\n", pos_meia_noite);
    printf("Faltam %d segundos para meia noite\n", falta_para_meia_noite);





    
    
    
    return 0;
}