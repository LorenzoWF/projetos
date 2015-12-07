#include <stdio.h>
#include <stdlib.h>

int main () {
    
    int m[5][5], l, c, n, f;
    
    l = 0;
    
    while (l < 5){
        c = 0;
        while (c < 5){
            scanf("%d", &m[l][c]);
            c++;
        }
        l++;
    }
    
    scanf("%d", &n);
    
    f = 0;
    l = 0;
    
    while (l < 5){
        c = 0;
        while (c < 5){
            if (n == m[l][c]){
                printf("O NUMERO %d SE ENCONTRA NA POSICAO %d %d DA MATRIZ\n", n, l + 1, c + 1);
                f = 1;
            }
            c++;
        }
        l++;
    }
    
    if (f == 0){
        printf("O NUMERO %d NAO SE ENCONTRA NA MATRIZ\n", n);
    }
}