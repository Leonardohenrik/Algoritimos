#include<stdio.h>

int f_rec(int x, int n){
    if(n == 0){
        return 1;
    }
    return f_rec(x, n - 1) * x;
}

int main(){
    printf("%d\n", f_rec(2, 4));
    
    
    
    return 0;
}
