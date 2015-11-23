#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int c, d, u, soma, i;
    
    
    for (i=100; i<1000; i++){
        c = i / 100;
        d = (i / 10) % 10;
        u = i % 10;
        soma = (c * c * c) + (d * d * d) + (u * u * u);
        if (soma == i){
            printf("%d\n", i);
        }
    }
    
    return 0;
}