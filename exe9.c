#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int matriz[3][4], l, c, menor, cm, a;
    
    for (l=0; l<3; l++){
        for (c=0; c<4; c++){
            scanf("%d", &matriz[l][c]);
        }
    }
    
    printf("Linha | Menor valor | Coluna\n");
    
    for (l=0; l<3; l++){
        a = l + 1;
        printf("  %d ", a);
        for (c=0; c<4; c++){
            if (c == 0){
                menor = matriz[l][c];
                cm = c + 1;
            } else {
                if (matriz[l][c] < menor){
                    menor = matriz[l][c];
                    cm = c + 1;
                }    
            }
        }
        printf("         %d          %d  \n", menor, cm);
    }
    
    
    return 0;
}