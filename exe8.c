#include <stdio.h>
#include <stdlib.h>

int main () {
    
    int matriz[5][5], l, c, f;
    
    f = 0;
    
    for (l=0; l<5; l++){
        for (c=0; c<5; c++){
            scanf("%d", &matriz[l][c]);
            if (c > l){
                if (matriz[l][c] != 0){
                    f = 1;
                }
            }
        }
    }
    
    for (l=0; l<5; l++){
        for (c=0; c<5; c++){
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }
    
    
    if (f == 0){
        printf("E MATRIZ TRIANGULAR");    
    } else {
        printf("NAO E MATRIZ TRIANGULAR");
    }
    
	return 0;
}