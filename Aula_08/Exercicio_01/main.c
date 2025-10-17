#include<stdio.h>

int main(){
    FILE *f = fopen("Arquivo.txt", "w");
    if(f == NULL){
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }
    fprintf(f, "test\n");
    fprintf(f, "%d", 42);
    fclose(f);

    
    
    
    
    return 0;
}