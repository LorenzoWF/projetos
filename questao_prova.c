/*"Construa um algoritmo que receba três numeros obrigatoriamente em ordem crescente 
e uma quarto numero que nao siga esta regra. Mostre, em seguida, os quatro numeros 
em ordem decrescente. Suponha que o usuario informara quatro numeros diferentes"*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int n1, n2, n3, n4, f, i;
    
    f = 0;
    
    scanf("%d", &n1);
    
    scanf("%d", &n2);
    
    if (n2 <= n1){
        f = 1;
    }
    
    scanf("%d", &n3);
    
    if (n3 <= n2){
        f = 1;
    }
    
    if (f == 0){
        scanf("%d", &n4);
        if (n4 <= n1){
            printf("NUMEROS EM ORDEM DECRESCENTE:\n%d %d %d %d", n3, n2, n1, n4);
        } else{
            if (n4 <= n2){
                printf("NUMEROS EM ORDEM DECRESCENTE:\n%d %d %d %d", n3, n2, n4, n1);
            } else{
                if (n4 <= n3){
                    printf("NUMEROS EM ORDEM DECRESCENTE:\n%d %d %d %d", n3, n4, n2, n1);
                } else{
                    printf("NUMEROS EM ORDEM DECRESCENTE:\n%d %d %d %d", n4, n3, n2, n1);
                }
            }
        }
    } else{
        printf("ENTRADA INVALIDA, OS 3 PRIMEIROS NUMEROS NAO ESTAO EM ORDEM CRESCENTE");
    }
    
    return 0;
}