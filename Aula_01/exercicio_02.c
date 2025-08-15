#include<stdio.h>


int main(){
    int hora, minuto, segundo, tempo_falta, tempo_passado, meia_noite_segundos;

    printf("Digite a hora atual: ");
    scanf("%d", &hora);

    printf("Digite o minuto atual: ");
    scanf("%d", &minuto);

    printf("Digite o segundo atual: ");
    scanf("%d", &segundo);

    meia_noite_segundos = 24 * 3600;


    tempo_passado = segundo + (minuto * 60) + (hora * 3600);


    tempo_falta = meia_noite_segundos - tempo_passado;


    printf("A quantidade de segundos que falta para a meia noite é de: %d\n", tempo_falta);






    return 0;
}