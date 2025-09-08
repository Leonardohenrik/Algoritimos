float temperatura(float temperatura_c){
    float temperatura_f = (temperatura_c * 1.8) + 32;
    return temperatura_f;
}

float km(float metros){
    float km_metros = metros / 1000;
    return km_metros;
}


int tempo(int segundos){
    int minutos = segundos / 60;
    return minutos;
}
