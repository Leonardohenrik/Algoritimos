
int eh_par(int num_1){
    if(num_1 %2 == 0){
        return 1;
    }else{
        return 0;
    }
    
}

int eh_primo(int num_1){
    int divisor = 1;
    int primo = 0;
    if(num_1 < 2){
        return 0;
        
    }else{
        while(divisor <= num_1){
            if((num_1 % divisor) == 0){
                primo = primo + 1;
            }
            divisor = divisor + 1;

        }
        if(primo == 2){
            return 1;
        }else{
            return 0;
        }
    }  
}

int fat(int num_1){
    int contador = 1;
    int resultado = 1;
    while(contador <= num_1){
        resultado = resultado * contador;
        contador = contador + 1;
        

    }
    return resultado;
}

int maior(int num_1, int num_2){
    if(num_1 > num_2){
        return num_1;
    }else{
        return num_2;
    }
}

int pot(int num_1, int power){
    int contador = 1;
    int resultado = 1;
    while(contador <= power){
        resultado = resultado * num_1;
        contador = contador + 1;


    }
    return resultado;
}