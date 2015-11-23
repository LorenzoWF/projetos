#include <stdio.h>
#include <stdlib.h>

int main (){
    
    char nome[40], car;
    
    int i, pos;
    
    fgets(nome, 41, stdin);
    
    for (i=0; nome[i] != '\0'; i++){
        if (nome[i] == 32){
            pos = i;
        }
    }
    
    for (i=pos + 1; nome[i] != '\n'; i++){
        printf("%c", nome[i]);
    }
    
    printf("/");

    for (i=0; nome[i] != 32; i++){
        printf("%c", nome[i]);
    }  
    
    return 0;
}