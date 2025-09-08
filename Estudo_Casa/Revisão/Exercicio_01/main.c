// Escreva um algoritmo que solicite para o usuário as 3
//  notas de laboratório, a nota do projeto e a nota da prova
//  final. Calcule e apresente a média de acordo com o
//  critério da disciplina CCP230.

#include<stdio.h>
#include<math.h>

int main(){
    float lab_1, lab_2, lab_3, media_lab, nota_projeto, nota_prova_final, nota_final;
    printf("Digite a nota do lab_1: ");
    scanf("%f", &lab_1);
    printf("Digite a nota do lab_2: ");
    scanf("%f", &lab_2);
    printf("Digite a nota do lab_3: ");
    scanf("%f", &lab_3);
    media_lab = (lab_1 + lab_2 + lab_3) / 3;
    printf("Digite a nota do projeto: ");
    scanf("%f", &nota_projeto);
    printf("Digite a nota da prova final: ");
    scanf("%f", &nota_prova_final);

    nota_final = (0.2 * media_lab) + (0.8 * sqrt(nota_projeto * nota_prova_final));

    printf("A sua media final é: %.2f\n", nota_final);

    if(nota_final >= 5){
        printf("Parabéns você foi aprovado\n");
    }else if(nota_final >= 3 && nota_final < 5){
        printf("Você final de recuperação no regime de ORIE\n");
    }else{
        printf("Você terá que cursao a matéria novamente\n");
    }



    
    
    
    return 0;
}