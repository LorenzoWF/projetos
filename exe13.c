#include <stdio.h>
#include <stdlib.h>

int main (){
    
    char nome[30],  primeiraLetra;
    
    int i, f, cont;
    
    fgets(nome, 31, stdin);
    
    f = 0;
    cont = 0;
    for (i=0; nome[i] != '\0'; i++){
        if (nome[i] != 32){
            if (f == 0){
                printf("%c", nome[i]);
                f = 1;
            }
            cont++;
        } else {
            printf("%d", cont);
            cont = 0;
            f = 0;
        }
    }
    printf("%d", cont);
    
    return 0;
}