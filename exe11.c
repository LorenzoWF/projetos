#include <stdio.h>
#include <stdlib.h>

int main (){
    
    char bin[10]; 
    int i, a, soma, pos;
    
    fgets(bin, 11, stdin);
    
    if (bin[0] == '1'){
        for (i=1; i<10; i++){
            if (bin[i] == '1'){
                bin[i] = '0';
            } else {
                bin[i] = '1';
            }
        }
        a = 1;
        for (i=9; i>0 && a == 1; i--){
            if (bin[i] == '0'){
                bin[i] = '1';
                a = 0;
            } else{
                bin[i] = '0';
            }
        }
    }
    
    pos = 1;
    soma = 0;
    
    for (i=9; i>0; i--){
        if (bin[i] == '1'){
            soma = soma + pos;
        }
        pos = pos * 2;
    }
    
    if (bin[0] == '1'){
        soma = soma * -1;
    }
    
    printf("%d", soma);
    
    return 0;
}